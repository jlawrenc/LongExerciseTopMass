#!/usr/bin/env python
import ROOT
from ROOT import *
from array import array
import tdrstyle

# Add a zero to the theoretical values to make a nice y=x plot
theor=array('d',[0.0,65.74033,67.57093,69.390239])
exper=array('d',[0.359,-0.2075,0.07182]) # Pseudo
#exper=array('d',[64.89,66.34,67.09])
theor_err=array('d',[0.0,0.0,0.0,0.0])
exper_err=array('d',[0.6379,0.7578,0.658]) # Pseudo
#exper_err=array('d',[0.59,0.26,0.64])

#for i in range(0,len(exper)):
#    exper[i]=(exper[i]-16.51)/0.729
#    exper_err[i]=(exper_err[i])/0.729

c1 = TCanvas("canvas 1", "c1")
c1.cd()
tdrstyle.setTDRStyle()

graph = TGraphErrors(len(exper),theor[1:],exper,theor_err,exper_err)
graph.SetMarkerColor(4)
graph.SetMarkerStyle(21)
graph.SetTitle("")
graph.GetXaxis().SetTitle("Predicted Energy Peak Position [GeV]")
graph.GetYaxis().SetTitle("Pull Mean")
graph.GetXaxis().SetRangeUser(60.0,75.0)
graph.GetYaxis().SetRangeUser(-2.0,2.0)
graph.GetXaxis().SetTitleFont(42)
graph.GetYaxis().SetTitleFont(42)
graph.GetXaxis().SetTitleSize(0.035)
graph.GetYaxis().SetTitleSize(0.035)
graph.GetXaxis().SetTitleOffset(1.4)
graph.GetYaxis().SetTitleOffset(1.4)

gfit = TF1("f","[0] + [1] * x")
graph.Fit(gfit)

Covariance1 = TVirtualFitter.GetFitter().GetCovarianceMatrixElement(0,1)
print Covariance1
Covariance2 = TVirtualFitter.GetFitter().GetCovarianceMatrixElement(1,0)
print Covariance2
Variance0 = TVirtualFitter.GetFitter().GetCovarianceMatrixElement(0,0)
print Variance0
Variance1 = TVirtualFitter.GetFitter().GetCovarianceMatrixElement(1,1)
print Variance1

graph.Draw("AP")

ideal = TGraph(len(theor),theor,theor_err)
ideal.SetLineColor(4)
ideal.SetLineStyle(7)
ideal.Draw("SAME")

label1 = TLatex()
label1.SetNDC()
label1.SetTextFont(60)
label1.SetTextSize(0.07)
label1.SetTextAlign(31)
label1.DrawLatex(0.32, 0.92, "CMS DAS")
label2 = TLatex()
label2.SetNDC()
label2.SetTextFont(42)
label2.SetTextSize(0.06)
label2.SetTextAlign(11)
label2.DrawLatex(0.33, 0.92, "#it{Simulation}")

leg = TLegend(0.3,0.73,0.48,0.84)
leg.AddEntry(graph,"Simulation","p")
leg.AddEntry(ideal,"Expectation","l")
leg.AddEntry(gfit,"Fit","l")
leg.Draw("SAME")

gPad.Update()
stats = gPad.GetPrimitive("stats")
stats.__class__ = ROOT.TPaveStats
stats.SetY1NDC(0.1)
stats.SetY2NDC(0.3)
stats.SetX1NDC(0.7)
stats.SetX2NDC(0.9)

# Save the plot
gPad.RedrawAxis()
c1.SaveAs("pull_all.png")
