#!/usr/bin/env python
import ROOT
from ROOT import * #TFile, TCanvas
gROOT.SetBatch(True)

## Run by calling in the shell:
## python controlPlots.py

## Plot b-tagged jet transverse momentum for data
# Open the file
fiData = TFile.Open(" root://cmseos.fnal.gov///store/user/cmsdas/2020/long_exercises/TopMass/MuonEG_2016Hv2.root", "READ")
# Get the tree
treeData = fiData.Get("data")

# Make a new TCanvas
c1 = TCanvas("canvas 1", "c1", 600, 600)
c1.cd()

# Draw the variable
treeData.Draw("Jet_pt", "Jet_CombIVF>0.605")
gPad.SetLogy(1)

# Save the plot
c1.SaveAs("plotData.png")

## Plot b jet generated transverse momentumm for MC
# Open the file
fiMC = TFile.Open(" root://cmseos.fnal.gov///store/user/cmsdas/2020/long_exercises/TopMass/TTJets.root", "READ")
# Get the tree
treeMC = fiMC.Get("data")

# Make a new TCanvas
c2 = TCanvas("canvas 2", "c2", 600, 600)
c2.cd()

# Draw the variable
treeMC.Draw("Jet_genpt", "abs(Jet_flavour)==5")

# Save the plot
c2.SaveAs("plotMC.png")


#Resolution

# Make a new TCanvas
c3 = TCanvas("canvas 3", "c3", 600, 600)
c3.cd()

# Draw the variable
treeMC.Draw("(Jet_pt-Jet_genpt)/Jet_genpt","abs(Jet_flavour)==5 && Jet_genpt > 0")

# Save the plot
c3.SaveAs("plotMC_res.png")



# Gen and reco pt

# Make a new TCanvas
c4 = TCanvas("canvas 4", "c4", 600, 600)
c4.cd()

# Draw the variable
treeMC.Draw("Lepton_pt","abs(Lepton_id)==11 && Lepton_pt < 200")
treeMC.Draw("Lepton_pt","abs(Lepton_gid)==11 && Lepton_pt < 200", "e1same")


# Save the plot
c4.SaveAs("plotMC_e_mu.png")
