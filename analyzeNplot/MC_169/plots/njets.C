void njets()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 15 14:33:23 2020) by ROOT version 6.14/09
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
   p1->Range(-4.337349,-4.159973e+08,31.80723,3.050647e+09);
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
   
   TH1F *frame__3 = new TH1F("frame__3","t#bar{t}",30,0,30);
   frame__3->SetMinimum(0.1);
   frame__3->SetMaximum(3.015981e+09);
   frame__3->SetEntries(141762);
   frame__3->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__3->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__3->SetMarkerColor(ci);
   frame__3->GetXaxis()->SetTitle(" Events");
   frame__3->GetXaxis()->SetLabelFont(42);
   frame__3->GetXaxis()->SetLabelSize(0.035);
   frame__3->GetXaxis()->SetTitleSize(0.035);
   frame__3->GetXaxis()->SetTitleFont(42);
   frame__3->GetYaxis()->SetNoExponent();
   frame__3->GetYaxis()->SetLabelFont(42);
   frame__3->GetYaxis()->SetTitleSize(0.045);
   frame__3->GetYaxis()->SetTitleOffset(1.3);
   frame__3->GetYaxis()->SetTitleFont(42);
   frame__3->GetZaxis()->SetLabelFont(42);
   frame__3->GetZaxis()->SetLabelSize(0.035);
   frame__3->GetZaxis()->SetTitleSize(0.035);
   frame__3->GetZaxis()->SetTitleFont(42);
   frame__3->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_2 = new TH1F("mc_stack_2","mc",30,0,30);
   mc_stack_2->SetMinimum(0);
   mc_stack_2->SetMaximum(2.435984e+09);
   mc_stack_2->SetDirectory(0);
   mc_stack_2->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_2->SetLineColor(ci);
   mc_stack_2->GetXaxis()->SetLabelFont(42);
   mc_stack_2->GetXaxis()->SetLabelSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleFont(42);
   mc_stack_2->GetYaxis()->SetLabelFont(42);
   mc_stack_2->GetYaxis()->SetLabelSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleOffset(0);
   mc_stack_2->GetYaxis()->SetTitleFont(42);
   mc_stack_2->GetZaxis()->SetLabelFont(42);
   mc_stack_2->GetZaxis()->SetLabelSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_2);
   
   
   TH1F *njets_t#bar{t}_stack_1 = new TH1F("njets_t#bar{t}_stack_1","t#bar{t}",30,0,30);
   njets_t#bar{t}_stack_1->SetBinContent(2,1.455662e+09);
   njets_t#bar{t}_stack_1->SetBinContent(3,1.219155e+09);
   njets_t#bar{t}_stack_1->SetBinContent(4,5.381843e+08);
   njets_t#bar{t}_stack_1->SetBinContent(5,1.918884e+08);
   njets_t#bar{t}_stack_1->SetBinContent(6,5.842734e+07);
   njets_t#bar{t}_stack_1->SetBinContent(7,1.592495e+07);
   njets_t#bar{t}_stack_1->SetBinContent(8,4268173);
   njets_t#bar{t}_stack_1->SetBinContent(9,1040143);
   njets_t#bar{t}_stack_1->SetBinContent(10,286936);
   njets_t#bar{t}_stack_1->SetBinContent(11,107601);
   njets_t#bar{t}_stack_1->SetBinContent(12,35867);
   njets_t#bar{t}_stack_1->SetBinError(2,7225665);
   njets_t#bar{t}_stack_1->SetBinError(3,6612673);
   njets_t#bar{t}_stack_1->SetBinError(4,4393525);
   njets_t#bar{t}_stack_1->SetBinError(5,2623445);
   njets_t#bar{t}_stack_1->SetBinError(6,1447623);
   njets_t#bar{t}_stack_1->SetBinError(7,755764.6);
   njets_t#bar{t}_stack_1->SetBinError(8,391262.8);
   njets_t#bar{t}_stack_1->SetBinError(9,193149.7);
   njets_t#bar{t}_stack_1->SetBinError(10,101447.2);
   njets_t#bar{t}_stack_1->SetBinError(11,62123.47);
   njets_t#bar{t}_stack_1->SetBinError(12,35867);
   njets_t#bar{t}_stack_1->SetEntries(97164);
   njets_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   njets_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   njets_t#bar{t}_stack_1->SetMarkerColor(ci);
   njets_t#bar{t}_stack_1->GetXaxis()->SetTitle(" Events");
   njets_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   njets_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   njets_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   njets_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   njets_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   njets_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   njets_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   njets_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   njets_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   njets_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   njets_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   njets_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   njets_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_t#bar{t}_stack_1,"hist");
   
   TH1F *njets_Diboson_stack_2 = new TH1F("njets_Diboson_stack_2","Diboson",30,0,30);
   njets_Diboson_stack_2->SetBinContent(2,4.675622e+08);
   njets_Diboson_stack_2->SetBinContent(3,2.594619e+08);
   njets_Diboson_stack_2->SetBinContent(4,6.280312e+07);
   njets_Diboson_stack_2->SetBinContent(5,1.43468e+07);
   njets_Diboson_stack_2->SetBinContent(6,3156296);
   njets_Diboson_stack_2->SetBinContent(7,466271);
   njets_Diboson_stack_2->SetBinContent(8,143468);
   njets_Diboson_stack_2->SetBinContent(9,71734);
   njets_Diboson_stack_2->SetBinError(2,4095126);
   njets_Diboson_stack_2->SetBinError(3,3050593);
   njets_Diboson_stack_2->SetBinError(4,1500853);
   njets_Diboson_stack_2->SetBinError(5,717340);
   njets_Diboson_stack_2->SetBinError(6,336462.3);
   njets_Diboson_stack_2->SetBinError(7,129320.3);
   njets_Diboson_stack_2->SetBinError(8,71734);
   njets_Diboson_stack_2->SetBinError(9,50723.6);
   njets_Diboson_stack_2->SetEntries(22528);
   njets_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   njets_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   njets_Diboson_stack_2->SetMarkerColor(ci);
   njets_Diboson_stack_2->GetXaxis()->SetTitle(" Events");
   njets_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   njets_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   njets_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   njets_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   njets_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   njets_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   njets_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   njets_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   njets_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   njets_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   njets_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   njets_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   njets_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_Diboson_stack_2,"hist");
   
   TH1F *njets_DY_stack_3 = new TH1F("njets_DY_stack_3","DY",30,0,30);
   njets_DY_stack_3->SetBinContent(2,1.309146e+07);
   njets_DY_stack_3->SetBinContent(3,6850597);
   njets_DY_stack_3->SetBinContent(4,1685749);
   njets_DY_stack_3->SetBinContent(5,286936);
   njets_DY_stack_3->SetBinContent(6,107601);
   njets_DY_stack_3->SetBinContent(7,35867);
   njets_DY_stack_3->SetBinError(2,685238.1);
   njets_DY_stack_3->SetBinError(3,495691.8);
   njets_DY_stack_3->SetBinError(4,245891.8);
   njets_DY_stack_3->SetBinError(5,101447.2);
   njets_DY_stack_3->SetBinError(6,62123.47);
   njets_DY_stack_3->SetBinError(7,35867);
   njets_DY_stack_3->SetEntries(615);
   njets_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   njets_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   njets_DY_stack_3->SetMarkerColor(ci);
   njets_DY_stack_3->GetXaxis()->SetTitle(" Events");
   njets_DY_stack_3->GetXaxis()->SetLabelFont(42);
   njets_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   njets_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   njets_DY_stack_3->GetXaxis()->SetTitleFont(42);
   njets_DY_stack_3->GetYaxis()->SetLabelFont(42);
   njets_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   njets_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   njets_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   njets_DY_stack_3->GetYaxis()->SetTitleFont(42);
   njets_DY_stack_3->GetZaxis()->SetLabelFont(42);
   njets_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   njets_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   njets_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_DY_stack_3,"hist");
   
   TH1F *njets_W_stack_4 = new TH1F("njets_W_stack_4","W",30,0,30);
   njets_W_stack_4->SetBinContent(2,466271);
   njets_W_stack_4->SetBinContent(3,286936);
   njets_W_stack_4->SetBinContent(4,179335);
   njets_W_stack_4->SetBinContent(5,107601);
   njets_W_stack_4->SetBinError(2,129320.3);
   njets_W_stack_4->SetBinError(3,101447.2);
   njets_W_stack_4->SetBinError(4,80201.05);
   njets_W_stack_4->SetBinError(5,62123.47);
   njets_W_stack_4->SetEntries(29);
   njets_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   njets_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   njets_W_stack_4->SetMarkerColor(ci);
   njets_W_stack_4->GetXaxis()->SetTitle(" Events");
   njets_W_stack_4->GetXaxis()->SetLabelFont(42);
   njets_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   njets_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   njets_W_stack_4->GetXaxis()->SetTitleFont(42);
   njets_W_stack_4->GetYaxis()->SetLabelFont(42);
   njets_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   njets_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   njets_W_stack_4->GetYaxis()->SetTitleOffset(0);
   njets_W_stack_4->GetYaxis()->SetTitleFont(42);
   njets_W_stack_4->GetZaxis()->SetLabelFont(42);
   njets_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   njets_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   njets_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_W_stack_4,"hist");
   
   TH1F *njets_SinglesPtop_stack_5 = new TH1F("njets_SinglesPtop_stack_5","Single top",30,0,30);
   njets_SinglesPtop_stack_5->SetBinContent(2,3.83203e+08);
   njets_SinglesPtop_stack_5->SetBinContent(3,2.628334e+08);
   njets_SinglesPtop_stack_5->SetBinContent(4,9.05283e+07);
   njets_SinglesPtop_stack_5->SetBinContent(5,2.377982e+07);
   njets_SinglesPtop_stack_5->SetBinContent(6,6348459);
   njets_SinglesPtop_stack_5->SetBinContent(7,1362946);
   njets_SinglesPtop_stack_5->SetBinContent(8,358670);
   njets_SinglesPtop_stack_5->SetBinContent(9,71734);
   njets_SinglesPtop_stack_5->SetBinError(2,3707336);
   njets_SinglesPtop_stack_5->SetBinError(3,3070349);
   njets_SinglesPtop_stack_5->SetBinError(4,1801938);
   njets_SinglesPtop_stack_5->SetBinError(5,923531.7);
   njets_SinglesPtop_stack_5->SetBinError(6,477179.4);
   njets_SinglesPtop_stack_5->SetBinError(7,221099);
   njets_SinglesPtop_stack_5->SetBinError(8,113421.4);
   njets_SinglesPtop_stack_5->SetBinError(9,50723.6);
   njets_SinglesPtop_stack_5->SetEntries(21426);
   njets_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   njets_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   njets_SinglesPtop_stack_5->SetMarkerColor(ci);
   njets_SinglesPtop_stack_5->GetXaxis()->SetTitle(" Events");
   njets_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   njets_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   njets_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   njets_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   njets_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   njets_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   njets_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   njets_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   njets_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   njets_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   njets_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   njets_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   njets_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_njets_fx3003[31] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   0};
   Double_t Graph_from_njets_fy3003[31] = {
   0,
   216907,
   176629,
   76176,
   26052,
   7816,
   2090,
   523,
   140,
   38,
   7,
   2,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_njets_felx3003[31] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_njets_fely3003[31] = {
   0,
   465.7328,
   420.2725,
   276,
   161.4063,
   88.40814,
   45.71652,
   22.86919,
   11.81826,
   6.137282,
   2.581513,
   1.29183,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_njets_fehx3003[31] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_njets_fehy3003[31] = {
   1.841055,
   465.7328,
   420.2725,
   276,
   161.4063,
   88.40814,
   45.71652,
   22.86919,
   12.86063,
   7.218633,
   3.770356,
   2.63791,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_njets_fx3003,Graph_from_njets_fy3003,Graph_from_njets_felx3003,Graph_from_njets_fehx3003,Graph_from_njets_fely3003,Graph_from_njets_fehy3003);
   grae->SetName("Graph_from_njets");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_njets3003 = new TH1F("Graph_Graph_from_njets3003","Data",100,0,33);
   Graph_Graph_from_njets3003->SetMinimum(0);
   Graph_Graph_from_njets3003->SetMaximum(239110);
   Graph_Graph_from_njets3003->SetDirectory(0);
   Graph_Graph_from_njets3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_njets3003->SetLineColor(ci);
   Graph_Graph_from_njets3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_njets3003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_njets3003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_njets3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_njets3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_njets3003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_njets3003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_njets3003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_njets3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_njets3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_njets3003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_njets3003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_njets3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_njets3003);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_njets","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("njets_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("njets_Diboson","Diboson","f");

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
   entry=leg->AddEntry("njets_DY","DY","f");

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
   entry=leg->AddEntry("njets_W","W","f");

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
   entry=leg->AddEntry("njets_Single top","Single top","f");

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
   p2->Range(-4.337349,0.4485106,31.80723,1.597447);
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
   
   TH1F *ratioframe__4 = new TH1F("ratioframe__4","t#bar{t}",30,0,30);
   ratioframe__4->SetMinimum(0.46);
   ratioframe__4->SetMaximum(1.54);
   ratioframe__4->SetEntries(141762);

   ci = TColor::GetColor("#cc0000");
   ratioframe__4->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__4->SetMarkerColor(ci);
   ratioframe__4->GetXaxis()->SetTitle(" Events");
   ratioframe__4->GetXaxis()->SetLabelFont(42);
   ratioframe__4->GetXaxis()->SetLabelSize(0);
   ratioframe__4->GetXaxis()->SetTitleSize(0);
   ratioframe__4->GetXaxis()->SetTitleOffset(0);
   ratioframe__4->GetXaxis()->SetTitleFont(42);
   ratioframe__4->GetYaxis()->SetTitle("Data/MC");
   ratioframe__4->GetYaxis()->SetNoExponent();
   ratioframe__4->GetYaxis()->SetNdivisions(5);
   ratioframe__4->GetYaxis()->SetLabelFont(42);
   ratioframe__4->GetYaxis()->SetLabelSize(0.18);
   ratioframe__4->GetYaxis()->SetTitleSize(0.2);
   ratioframe__4->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__4->GetYaxis()->SetTitleFont(42);
   ratioframe__4->GetZaxis()->SetLabelFont(42);
   ratioframe__4->GetZaxis()->SetLabelSize(0.035);
   ratioframe__4->GetZaxis()->SetTitleSize(0.035);
   ratioframe__4->GetZaxis()->SetTitleFont(42);
   ratioframe__4->Draw("");
   
   Double_t Graph_from_ratio_fx3004[30] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5};
   Double_t Graph_from_ratio_fy3004[30] = {
   0,
   9.349499e-05,
   0.0001010124,
   0.0001098617,
   0.0001130682,
   0.0001148741,
   0.0001174815,
   0.0001096365,
   0.0001182821,
   0.0001324337,
   6.505516e-05,
   5.576156e-05,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3004[30] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3004[30] = {
   0,
   4.188564e-07,
   5.167803e-07,
   8.847462e-07,
   1.575065e-06,
   2.940173e-06,
   5.867726e-06,
   1.064707e-05,
   2.28887e-05,
   5.151583e-05,
   4.489232e-05,
   6.829369e-05,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3004[30] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3004[30] = {
   0,
   4.188564e-07,
   5.167803e-07,
   8.847462e-07,
   1.575065e-06,
   2.940173e-06,
   5.867726e-06,
   1.064707e-05,
   2.28887e-05,
   5.151583e-05,
   4.489232e-05,
   6.829369e-05,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3004,Graph_from_ratio_fy3004,Graph_from_ratio_felx3004,Graph_from_ratio_fehx3004,Graph_from_ratio_fely3004,Graph_from_ratio_fehy3004);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3004 = new TH1F("Graph_Graph_from_ratio3004","Data",100,0,33);
   Graph_Graph_from_ratio3004->SetMinimum(-3.218029e-05);
   Graph_Graph_from_ratio3004->SetMaximum(0.0002035977);
   Graph_Graph_from_ratio3004->SetDirectory(0);
   Graph_Graph_from_ratio3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3004->SetLineColor(ci);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3004);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
