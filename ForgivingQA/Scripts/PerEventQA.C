//Dummy to remind bernie to implement the per run period QA
//For:

//Number of (Anti-)Protons per Period
//Purity of (Anti-)Lambdas per Period
//Purity of (Anti-)Xis per Period
#include "TSystemDirectory.h"
#include "TList.h"
#include "MakeHistosGreat.h"
#include "ForgivingReader.h"
#include "PeriodQA.h"
#include "DecayQA.h"
#include <iostream>

// arguments
// 1: Path to all analysis files for the periods (named: AnalysisResults_LHC16d.root, ...)
// 2: prefix (MB/HM/...)
// 3: addon (0/1/...)
int main(int argc, char* argv[]) {
  const char* prefix = argv[2];
  const char* addon = (argv[3]) ? argv[3] : "";
  MakeHistosGreat::SetStyle(false);

  PeriodQA *qa = new PeriodQA();
  qa->SetDirectory(argv[1]);
  qa->ProcessQA(prefix, addon);
}
