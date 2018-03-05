#ifndef ResultsMetaData_ResultsMetaData_H
#define ResultsMetaData_ResultsMetaData_H

#include <map>
#include "TString.h"

class ResultsMetaData
{
 public:
  ResultsMetaData();
  ~ResultsMetaData(){}

 private:
  std::map<TString,TString> m_metaStrings;
  
};

#endif // ResultsMetaData_ResultsMetaData_H
