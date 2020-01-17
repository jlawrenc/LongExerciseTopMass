#!/usr/bin/env python
import math, ROOT, json, optparse, os, sys, pprint
from ROOT import *
import tdrstyle

def myFitFunc(x=None,par=None):
    return par[0]*TMath.Gaus(x[0],par[1],par[2],kFALSE)

def gPeak(h=None,inDir=None,isData=None,lumi=None):

    # Set the stats off 
    gStyle.SetOptStat(0)
    gStyle.SetOptTitle(0)
    gStyle.SetTickLength(0.03)

    # Get the log(E) histogram 
    hFit = h.Clone()
    hFit.SetMarkerStyle(8)
    hFit.GetYaxis().SetTitleSize(0.062)
    hFit.GetYaxis().SetLabelSize(0.062)
    hFit.GetYaxis().SetTitleOffset(0.62)
    hFit.GetYaxis().SetTitle("1/E dN_{b jets}/dlog(E)")
    hFit.GetXaxis().SetLabelOffset(1)
    hFit.GetXaxis().SetTitle("log(E)")
    hFit.SetLineColor(kBlack)
    hFit.SetMarkerColor(kBlack)

    # Define the fit function and parameters
    ## Set limits
    minToFit = 3.6
    maxToFit = 4.8
    ## Set the function
    fitfunc = TF1("Gaussian fit", myFitFunc, minToFit, maxToFit, 3)
    ## Set normalization
    fitfunc.SetParameter(0, h.Integral());
    fitfunc.SetParLimits(0, 0.1*h.Integral(), 2.5*h.Integral());
    ## Set gaussian mean starting value and limits
    fitfunc.SetParameter(1, 4.2);
    fitfunc.SetParLimits(1, 3.8, 4.4);
    ## Set gaussian width starting value and limits
    fitfunc.SetParameter(2, 0.65);
    fitfunc.SetParLimits(2, 0.35, 1.0);
    ## Some cosmetics
    fitfunc.SetLineColor(kBlue)
    fitfunc.SetLineWidth(3)
    fitfunc.SetLineStyle(1)

    # Do the fit
    hFit.Fit("Gaussian fit","EM", "", minToFit, maxToFit) 
    # "E" stands for Minos, "M" for improving fit results
    # cf. ftp://root.cern.ch/root/doc/5FittingHistograms.pdf    

    # Get Fit Parameters
    mean = fitfunc.GetParameter(1)
    meanErr = fitfunc.GetParError(1)
    sigma = fitfunc.GetParameter(2)
    sigmaErr = fitfunc.GetParError(2)
    chi2 = fitfunc.GetChisquare()
    NDF = fitfunc.GetNDF()
    chi2ndf = chi2/NDF
    # Calculate the uncalibrated Energy peak position and its uncertainty
    Ereco = math.exp(mean)
    Err = abs(Ereco*meanErr)

    # Make a pull distribution    
#    hPull = h.Clone("Pull")
#    for ibin in range(1, hFit.GetNbinsX()+1):
#        if hFit.GetBinCenter(ibin) > minToFit and hFit.GetBinCenter(ibin) <= maxToFit:
#            binCont = hFit.GetBinContent(ibin)
#            binErr = hFit.GetBinError(ibin)
#            valIntegral = fitfunc.Eval(hFit.GetBinCenter(ibin))
#            if binErr !=0:
#              pull = (binCont-valIntegral)/binErr
#              hPull.SetBinContent(ibin, pull)
#              hPull.SetBinError(ibin, 1)
#        else:      
#            hPull.SetBinContent(ibin, 0.)
#            hPull.SetBinError(ibin, 0.)
#    hPull.SetMarkerStyle(8)
#    hPull.GetYaxis().SetNdivisions(504)
#    hPull.GetYaxis().SetTitleSize(0.140)
#    hPull.GetYaxis().SetLabelSize(0.140)
#    hPull.GetYaxis().SetTitleOffset(0.27)
#    hPull.GetYaxis().SetTitle("#frac{Data-Fit}{Uncertainty}")
#    hPull.GetXaxis().SetTitleSize(0.160)
#    hPull.GetXaxis().SetLabelSize(0.150)
#    hPull.GetXaxis().SetTitleOffset(0.8)
#    hPull.GetXaxis().SetTitle("log(E)")
#    hPull.SetLineColor(kBlack)
#    hPull.SetMarkerColor(kBlack)

    # Plot the result
    ## Create a canvas with two pads for plotting your histograms
#    c = TCanvas('c','c')
#    p1 = ROOT.TPad('p1','p1',0.,0.3,1.0,1.0)
#    p1.SetBorderMode(0)
#    p1.SetBorderSize(2)
#    p1.SetTickx(1)
#    p1.SetTicky(1)
#    p1.SetTopMargin(0.13)
#    p1.SetBottomMargin(0.02)
#    p1.Draw()    
#    p2 = ROOT.TPad('p2','p2',0.,0.,1.0,0.3)
#    p2.SetGridy()
#    p2.SetBorderMode(0)
#    p2.SetBorderSize(2)
#    p2.SetTickx(1)
#    p2.SetTicky(1)
#    p2.SetTopMargin(0.05)
#    p2.SetBottomMargin(0.3)
#    p2.Draw()
#    ## Draw in the pad of the fit
#    p1.cd()
#    hFit.GetXaxis().SetRangeUser(minToFit,maxToFit)     
#    hFit.Draw()
#    ##Create some labels about the statistics
#    caption1 = TLatex()
#    caption1.SetTextSize(0.045)
#    caption1.SetTextFont(42)
#    caption1.SetNDC()
#    caption1.DrawLatex(0.75,0.8,'Fit Results')
#    caption1.DrawLatex(0.73,0.76,'#mu = %4.2f #pm %4.2f'%(mean,meanErr))
#    caption1.DrawLatex(0.73,0.72,'#sigma = %4.2f #pm %4.2f'%(sigma,sigmaErr))
#    caption1.DrawLatex(0.74,0.67,'#chi^{2}/ndf = %4.2f'%(chi2ndf))
#    caption2 = TLatex()
#    caption2.SetTextSize(0.05)
#    caption2.SetTextFont(42)
#    caption2.SetNDC()  
#    caption2.DrawLatex(0.35,0.44,'Uncalibrated Measurement')
#    caption2.DrawLatex(0.35,0.39,'<E_{b}> = (%4.2f #pm %4.2f) GeV'%(Ereco,Err))
#    ## CMS labels
#    label1 = TLatex()
#    label1.SetNDC()
#    label1.SetTextFont(60)
#    label1.SetTextSize(0.09)
#    label1.SetTextAlign(31)
#    label1.DrawLatex(0.19, 0.9, "CMS")
#    label2 = TLatex()
#    label2.SetNDC()
#    label2.SetTextFont(42)
#    label2.SetTextSize(0.0765)
#    label2.SetTextAlign(11)
#    if isData is True:
#        label2.DrawLatex(0.2, 0.9, "#it{Preliminary}")
#    else:
#        label2.DrawLatex(0.2, 0.9, "#it{Simulation preliminary}")
#    label3 = TLatex()
#    label3.SetNDC()
#    label3.SetTextFont(42)
#    label3.SetTextSize(0.0765)
#    label3.SetTextAlign(31)
#    label3.DrawLatex(0.90, 0.9, "%d pb^{-1} (13 TeV)" % lumi)
#    ## Edit the pad for the pull
#    p2.cd()
#    hPull.GetXaxis().SetRangeUser(minToFit,maxToFit)
#    hPull.Draw("e")

#    #save and delete
#    sName = inDir+"/fit_";
#    if isData is True:
#        sName = sName+"Data";
#    else: 
#        sName = sName+"MC";
#    c.SaveAs(sName+".pdf");
#    c.SaveAs(sName+".png");
#    del c
#    fitfunc.IsA().Destructor(fitfunc)
#    del caption1,caption2

#    #all done here ;)
    return Ereco,Err


def plotter(h=None,name=None):
    c1 = TCanvas("c1","")
    c1.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    fitfunc_gaus = TF1("Gaussian", myFitFunc, 63.0, 67.0, 3)
    ## Set normalization
    fitfunc_gaus.SetParameter(0, h.Integral());
    fitfunc_gaus.SetParLimits(0, 0.1*h.Integral(), 2.5*h.Integral());
    ## Set gaussian mean starting value and limits
    fitfunc_gaus.SetParameter(1, 65.5);
    fitfunc_gaus.SetParLimits(1, 63.0, 67.0);
    ## Set gaussian width starting value and limits
    fitfunc_gaus.SetParameter(2, 0.05);
    fitfunc_gaus.SetParLimits(2, 0.1, 2.0);

    h.Fit("Gaussian","EM","",63.0,67.0)
    h.Draw()

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

    c1.Update()
    stats = c1.GetPrimitive("stats")
    stats.__class__ = ROOT.TPaveStats
    stats.SetY1NDC(0.6)
    stats.SetY2NDC(0.9)
    stats.SetX1NDC(0.6)
    stats.SetX2NDC(0.9)
    c1.RedrawAxis()
    c1.Update()

    c1.SaveAs(name)
    c1.Close()
    del c1



def plotter_cal(h=None,name=None):
    c1 = TCanvas("c1","")
    c1.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    fitfunc_gaus = TF1("Gaussian", myFitFunc, 66.0, 72.0, 3)
    ## Set normalization
    fitfunc_gaus.SetParameter(0, h.Integral());
    fitfunc_gaus.SetParLimits(0, 0.1*h.Integral(), 2.0*h.Integral());
    ## Set gaussian mean starting value and limits
    fitfunc_gaus.SetParameter(1, 67.5);
    fitfunc_gaus.SetParLimits(1, 66.0, 72.0);
    ## Set gaussian width starting value and limits
    fitfunc_gaus.SetParameter(2, 0.05);
    fitfunc_gaus.SetParLimits(2, 0.1, 2.0);

    h.Fit("Gaussian","EM","",66.0,72.0)
    h.Draw()

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

    c1.Update()
    stats = c1.GetPrimitive("stats")
    stats.__class__ = ROOT.TPaveStats
    stats.SetY1NDC(0.6)
    stats.SetY2NDC(0.9)
    stats.SetX1NDC(0.6)
    stats.SetX2NDC(0.9)
    c1.RedrawAxis()
    c1.Update()

    c1.SaveAs(name)
    c1.Close()
    del c1



def plotter_err(h=None,name=None):
    c1 = TCanvas("c1","")
    c1.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    h.Fit("gaus")
    h.Draw()

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

    c1.Update()
    stats = c1.GetPrimitive("stats")
    stats.__class__ = ROOT.TPaveStats
    stats.SetY1NDC(0.6)
    stats.SetY2NDC(0.9)
    stats.SetX1NDC(0.6)
    stats.SetX2NDC(0.9)
    c1.RedrawAxis()
    c1.Update()

    c1.SaveAs(name)
    c1.Close()
    del c1



def plotter_cal_err(h=None,name=None):
    c1 = TCanvas("c1","")
    c1.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    h.Fit("gaus","","",0.5,0.7)
    h.Draw()

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

    c1.Update()
    stats = c1.GetPrimitive("stats")
    stats.__class__ = ROOT.TPaveStats
    stats.SetY1NDC(0.6)
    stats.SetY2NDC(0.9)
    stats.SetX1NDC(0.6)
    stats.SetX2NDC(0.9)
    c1.RedrawAxis()
    c1.Update()

    c1.SaveAs(name)
    c1.Close()
    del c1





def main():

    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
    parser.add_option('-d', '--isData',  action = 'store_true',   dest='isData')
    parser.add_option('-i', '--inDir',   dest='inDir',   help='input directory',          default='nominal',    type='string')
    parser.add_option('-j', '--json',    dest='json',    help='json with list of files',  default="../analyzeNplot/data/samples_Run2015_25ns.json", type='string')
    parser.add_option('-l', '--lumi',    dest='lumi' ,   help='lumi to print out',        default=2444.,        type=float)
    (opt, args) = parser.parse_args()
           
    # Read list of MC samples
    if opt.isData is not True:
        samplesList=[]
        jsonFile = open(opt.json,'r')
        jsonList=json.load(jsonFile,encoding='utf-8').items()
        jsonFile.close()
        for tag,sample in jsonList: 
            if not sample[3] in samplesList and not "Data" in sample[3]:
                samplesList.append(sample[3])

    # Open the root file
    fiName = "../analyzeNplot/"+opt.inDir+"/plots/plotter.root"
    print "... processing", fiName
    if not os.path.isfile(fiName):
        print "Help, file doesn't exist"
        exit(-1)
    res = ROOT.TFile(fiName, "read")

    #Get the histogram 
    hName = "bjetenls/"   
    if opt.isData is True:
        hName = hName + "bjetenls"
    else:
        hName = hName + "bjetenls_" + samplesList[0]
    histo = res.Get(str(hName))
    histo.SetDirectory(0)
    if opt.isData is not True:
        for sampleInfo in samplesList:
            if sampleInfo is not samplesList[0]: 
                histo.Add(res.Get(str("bjetenls/bjetenls_"+sampleInfo)).Clone());

    # Create the output directory
    if not os.path.isdir(opt.inDir):
        os.mkdir(opt.inDir)

    # Calculate the energy peak position in the big MC sample
    Eb,DEb = gPeak(h=histo,inDir=opt.inDir,isData=opt.isData,lumi=opt.lumi)
    print "<E_{b}> = (%3.2f #pm %3.2f) GeV" % (Eb,DEb)


    #Generate pseudo-exp
    r3 = TRandom3()
    r3.SetSeed(0)
    Npe = 2000
    #E_peak = TH1F("E_peak", "", 50,61,68) # 169v5
    E_peak = TH1F("E_peak", "", 100,62,72) # 172v5
    #E_peak = TH1F("E_peak", "", 50,64,70) # 175v5

    #Eb_calibrated = TH1F("Eb_calibrated", "", 100,62,72) # 169v5
    Eb_calibrated = TH1F("Eb_calibrated", "", 100,64,74) # 172v5
    #Eb_calibrated = TH1F("Eb_calibrated", "", 100,66,76) # 175v5



    #E_peak_err = TH1F("E_peak_err", "", 30,0.09,0.2) # 169v5
    E_peak_err = TH1F("E_peak_err", "", 400,0.01,0.15) # 172v5
    #E_peak_err = TH1F("E_peak_err", "", 30,0.08,0.2) # 175v5

    #delEb_calibrated = TH1F("delEb_calibrated", "", 240,0.2,1.0) # 169v5
    delEb_calibrated = TH1F("delEb_calibrated", "", 80,0.2,1.0) # 172v5
    #delEb_calibrated = TH1F("delEb_calibrated", "", 240,0.2,1.0) # 175v5




    hpull = TH1F("hpull", "",100,-100,100)
    hpullcal = TH1F("hpullcal", "",100,-10,10)

    #pred = 65.740 #169v5
    pred = 67.57 #172v5
    #pred = 69.39 #175v5

    p0 = 28.7773
    p1 = 0.550953
    delp0 = 8.92937
    delp1 = 0.131019
    covar = 1.169712118
    DEb_uncal = 0.25677

    for i in range(0,Npe):
        hpe = histo.Clone()
        for ibin in range(0,histo.GetNbinsX()):
            y = histo.GetBinContent(ibin)
            x = histo.GetXaxis().GetBinCenter(ibin)
            fluct = r3.PoissonD(y*math.exp(x))/math.exp(x)
            hpe.SetBinContent(ibin,fluct)
            err = math.sqrt(fluct)/math.exp(x)
            hpe.SetBinError(ibin,err)
        # Calculate the energy peak position in the big MC sample

        Eb,DEb = gPeak(h=hpe,inDir=opt.inDir,isData=opt.isData,lumi=opt.lumi)
        E_peak.Fill(Eb)
        print "Eb = ", Eb
        E_peak_err.Fill(DEb)
        print "DEb = ", DEb

        #apply the calibration
        Eb_cal=(Eb-p0)/p1
        Eb_calibrated.Fill(Eb_cal)

        DEb_cal = Eb_cal*( ( (DEb_uncal**2.0+delp0**2.0)/(Eb-p0)**2.0 ) + (delp1/p1)**2.0 - ((2.0*covar)/((Eb-p0)*p1))  )**(0.5)    
        delEb_calibrated.Fill(DEb_cal)
#        print DEb_cal

        #calculating the calibrated pull
        pullcal=(Eb_cal-pred)/DEb_cal
        if abs(pullcal)<2.0:
            hpullcal.Fill(pullcal)



#        pull=(Eb_calibrated-pred)/DEb
#        hpull.Fill(pull)
#        print Eb, DEb, "in loop"
#    print Eb, DEb, "out loop"


#   Ebcal=(Eb-29.6)/0.5312
#   DEbcal=DEb/0.5312
    # print "Eb:", Eb, "  DEb:", DEb, "  Pull:", pull, "Delta:", abs(Eb-pred)
#   pullcal=(Ebcal-pred)/DEbcal
#   hpullcal.Fill(pullcal)

#    plotter(E_peak,"Eb_m172p5.pdf")
#    plotter_cal(Eb_calibrated,"Eb_cal_m172p5.pdf")

#    plotter_err(E_peak_err,"Eb__m172p5_err.pdf")
    plotter_cal_err(delEb_calibrated,"delEb_m172p5.pdf")



#   plotter_err(hpull,"Pull_m172p5.pdf")
    plotter_err(hpullcal,"Pull_corr_m172p5.pdf")



    res.Close()
               
if __name__ == "__main__":
    sys.exit(main())


