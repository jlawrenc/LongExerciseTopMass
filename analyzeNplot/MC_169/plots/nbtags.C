void nbtags()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 16 10:09:26 2020) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(-0.7228916,-16136.4,5.301205,118334.5);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__11 = new TH1F("frame__11","t#bar{t}",5,0,5);
   frame__11->SetMinimum(0.1);
   frame__11->SetMaximum(116989.8);
   frame__11->SetEntries(32767);
   frame__11->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__11->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__11->SetMarkerColor(ci);
   frame__11->GetXaxis()->SetTitle("b-tag multiplicity");
   frame__11->GetXaxis()->SetLabelFont(42);
   frame__11->GetXaxis()->SetLabelSize(0.035);
   frame__11->GetXaxis()->SetTitleSize(0.035);
   frame__11->GetXaxis()->SetTitleFont(42);
   frame__11->GetYaxis()->SetTitle(" Events");
   frame__11->GetYaxis()->SetNoExponent();
   frame__11->GetYaxis()->SetLabelFont(42);
   frame__11->GetYaxis()->SetTitleSize(0.045);
   frame__11->GetYaxis()->SetTitleOffset(1.3);
   frame__11->GetYaxis()->SetTitleFont(42);
   frame__11->GetZaxis()->SetLabelFont(42);
   frame__11->GetZaxis()->SetLabelSize(0.035);
   frame__11->GetZaxis()->SetTitleSize(0.035);
   frame__11->GetZaxis()->SetTitleFont(42);
   frame__11->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_6 = new TH1F("mc_stack_6","mc",5,0,5);
   mc_stack_6->SetMinimum(0);
   mc_stack_6->SetMaximum(94491.72);
   mc_stack_6->SetDirectory(0);
   mc_stack_6->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_6->SetLineColor(ci);
   mc_stack_6->GetXaxis()->SetLabelFont(42);
   mc_stack_6->GetXaxis()->SetLabelSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleFont(42);
   mc_stack_6->GetYaxis()->SetLabelFont(42);
   mc_stack_6->GetYaxis()->SetLabelSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleOffset(0);
   mc_stack_6->GetYaxis()->SetTitleFont(42);
   mc_stack_6->GetZaxis()->SetLabelFont(42);
   mc_stack_6->GetZaxis()->SetLabelSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_6);
   
   
   TH1F *nbtags_t#bar{t}_stack_1 = new TH1F("nbtags_t#bar{t}_stack_1","t#bar{t}",5,0,5);
   nbtags_t#bar{t}_stack_1->SetBinContent(2,84591.68);
   nbtags_t#bar{t}_stack_1->SetBinContent(3,50729.68);
   nbtags_t#bar{t}_stack_1->SetBinError(2,672.2542);
   nbtags_t#bar{t}_stack_1->SetBinError(3,520.221);
   nbtags_t#bar{t}_stack_1->SetEntries(27079);
   nbtags_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}_stack_1->SetMarkerColor(ci);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_t#bar{t}_stack_1,"hist");
   
   TH1F *nbtags_Diboson_stack_2 = new TH1F("nbtags_Diboson_stack_2","Diboson",5,0,5);
   nbtags_Diboson_stack_2->SetBinContent(2,171.6413);
   nbtags_Diboson_stack_2->SetBinContent(3,10.50985);
   nbtags_Diboson_stack_2->SetBinError(2,8.188742);
   nbtags_Diboson_stack_2->SetBinError(3,1.991931);
   nbtags_Diboson_stack_2->SetEntries(511);
   nbtags_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson_stack_2->SetMarkerColor(ci);
   nbtags_Diboson_stack_2->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   nbtags_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   nbtags_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   nbtags_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   nbtags_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   nbtags_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   nbtags_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   nbtags_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   nbtags_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   nbtags_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Diboson_stack_2,"hist");
   
   TH1F *nbtags_DY_stack_3 = new TH1F("nbtags_DY_stack_3","DY",5,0,5);
   nbtags_DY_stack_3->SetBinContent(2,283.7373);
   nbtags_DY_stack_3->SetBinContent(3,55.57008);
   nbtags_DY_stack_3->SetBinError(2,69.35243);
   nbtags_DY_stack_3->SetBinError(3,32.2111);
   nbtags_DY_stack_3->SetEntries(21);
   nbtags_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY_stack_3->SetMarkerColor(ci);
   nbtags_DY_stack_3->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nbtags_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   nbtags_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   nbtags_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nbtags_DY_stack_3->GetYaxis()->SetTitle(" Events");
   nbtags_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nbtags_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   nbtags_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   nbtags_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   nbtags_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nbtags_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nbtags_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   nbtags_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   nbtags_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_DY_stack_3,"hist");
   
   TH1F *nbtags_W_stack_4 = new TH1F("nbtags_W_stack_4","W",5,0,5);
   nbtags_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nbtags_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nbtags_W_stack_4->SetMarkerColor(ci);
   nbtags_W_stack_4->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_W_stack_4->GetXaxis()->SetLabelFont(42);
   nbtags_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   nbtags_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   nbtags_W_stack_4->GetXaxis()->SetTitleFont(42);
   nbtags_W_stack_4->GetYaxis()->SetTitle(" Events");
   nbtags_W_stack_4->GetYaxis()->SetLabelFont(42);
   nbtags_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   nbtags_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   nbtags_W_stack_4->GetYaxis()->SetTitleOffset(0);
   nbtags_W_stack_4->GetYaxis()->SetTitleFont(42);
   nbtags_W_stack_4->GetZaxis()->SetLabelFont(42);
   nbtags_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   nbtags_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   nbtags_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_W_stack_4,"hist");
   
   TH1F *nbtags_SinglesPtop_stack_5 = new TH1F("nbtags_SinglesPtop_stack_5","Single top",5,0,5);
   nbtags_SinglesPtop_stack_5->SetBinContent(2,4945.064);
   nbtags_SinglesPtop_stack_5->SetBinContent(3,1493.305);
   nbtags_SinglesPtop_stack_5->SetBinError(2,81.32827);
   nbtags_SinglesPtop_stack_5->SetBinError(3,44.71368);
   nbtags_SinglesPtop_stack_5->SetEntries(5156);
   nbtags_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop_stack_5->SetMarkerColor(ci);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nbtags_fx3011[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   0};
   Double_t Graph_from_nbtags_fy3011[6] = {
   0,
   83737,
   47383,
   0,
   0,
   0};
   Double_t Graph_from_nbtags_felx3011[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fely3011[6] = {
   0,
   289.3735,
   217.6764,
   0,
   0,
   0};
   Double_t Graph_from_nbtags_fehx3011[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fehy3011[6] = {
   1.841055,
   289.3735,
   217.6764,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_nbtags_fx3011,Graph_from_nbtags_fy3011,Graph_from_nbtags_felx3011,Graph_from_nbtags_fehx3011,Graph_from_nbtags_fely3011,Graph_from_nbtags_fehy3011);
   grae->SetName("Graph_from_nbtags");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nbtags3011 = new TH1F("Graph_Graph_from_nbtags3011","Data",100,0,5.5);
   Graph_Graph_from_nbtags3011->SetMinimum(0);
   Graph_Graph_from_nbtags3011->SetMaximum(92429.01);
   Graph_Graph_from_nbtags3011->SetDirectory(0);
   Graph_Graph_from_nbtags3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nbtags3011->SetLineColor(ci);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nbtags3011);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_nbtags","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nbtags_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nbtags_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nbtags_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nbtags_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nbtags_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(-0.7228916,0.4485106,5.301205,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__12 = new TH1F("ratioframe__12","t#bar{t}",5,0,5);
   ratioframe__12->SetMinimum(0.46);
   ratioframe__12->SetMaximum(1.54);
   ratioframe__12->SetEntries(32767);

   ci = TColor::GetColor("#cc0000");
   ratioframe__12->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__12->SetMarkerColor(ci);
   ratioframe__12->GetXaxis()->SetTitle("b-tag multiplicity");
   ratioframe__12->GetXaxis()->SetLabelFont(42);
   ratioframe__12->GetXaxis()->SetLabelSize(0);
   ratioframe__12->GetXaxis()->SetTitleSize(0);
   ratioframe__12->GetXaxis()->SetTitleOffset(0);
   ratioframe__12->GetXaxis()->SetTitleFont(42);
   ratioframe__12->GetYaxis()->SetTitle("Data/MC");
   ratioframe__12->GetYaxis()->SetNoExponent();
   ratioframe__12->GetYaxis()->SetNdivisions(5);
   ratioframe__12->GetYaxis()->SetLabelFont(42);
   ratioframe__12->GetYaxis()->SetLabelSize(0.18);
   ratioframe__12->GetYaxis()->SetTitleSize(0.2);
   ratioframe__12->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__12->GetYaxis()->SetTitleFont(42);
   ratioframe__12->GetZaxis()->SetLabelFont(42);
   ratioframe__12->GetZaxis()->SetLabelSize(0.035);
   ratioframe__12->GetZaxis()->SetTitleSize(0.035);
   ratioframe__12->GetZaxis()->SetTitleFont(42);
   ratioframe__12->Draw("");
   
   Double_t Graph_from_ratio_fx3012[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_ratio_fy3012[5] = {
   0,
   0.9304926,
   0.9061741,
   0,
   0};
   Double_t Graph_from_ratio_felx3012[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3012[5] = {
   0,
   0.007738439,
   0.00997608,
   0,
   0};
   Double_t Graph_from_ratio_fehx3012[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3012[5] = {
   0,
   0.007738439,
   0.00997608,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph_from_ratio_fx3012,Graph_from_ratio_fy3012,Graph_from_ratio_felx3012,Graph_from_ratio_fehx3012,Graph_from_ratio_fely3012,Graph_from_ratio_fehy3012);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3012 = new TH1F("Graph_Graph_from_ratio3012","Data",100,0,5.5);
   Graph_Graph_from_ratio3012->SetMinimum(0);
   Graph_Graph_from_ratio3012->SetMaximum(1.032054);
   Graph_Graph_from_ratio3012->SetDirectory(0);
   Graph_Graph_from_ratio3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3012->SetLineColor(ci);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3012);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
