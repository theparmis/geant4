{
  gROOT->Reset();
  
  // Draw histos filled by Geant4 simulation 
  //   
  TFile f = TFile("testem6.root");  
  TCanvas* c1 = new TCanvas("c1", "  ");
  
  TH1D* hist1 = (TH1D*)f.Get("1");
  hist1->Draw("HIST");
  
  TH1D* hist2 = (TH1D*)f.Get("2");
  hist2->Draw("HIST");
  
  TH1D* hist3 = (TH1D*)f.Get("3");
  hist3->Draw("HIST");
  
  TH1D* hist4 = (TH1D*)f.Get("4");
  hist4->Draw("HIST");
  
  TH1D* hist5 = (TH1D*)f.Get("5");
  hist5->Draw("HIST");
  
  TH1D* hist6 = (TH1D*)f.Get("6");
  hist6->Draw("HIST");      
}  
