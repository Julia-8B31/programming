
#include <iostream>
#include <vector>
#include <algorithm>
#include "returnNumber.h"



std::vector <int> summa(std::vector <int> vec1, std:: vector <int> vec2){
  int sz=std::max(vec1.size(), vec2.size());
  std::vector <int> result; 
  result.push_back(0); 
  result[0]=(vec1[0]+vec2[0])%10; 
  int ost=(vec1[0]+vec2[0])/10; 
    for (int i=1; ost>0 || i<sz; ++i){ 
         vec1.push_back(0); 
         vec2.push_back(0); 
         result.push_back(0); 
         result[i]=(vec1[i]+vec2[i]+ost)%10;
         ost=(vec1[i]+vec2[i]+ost)/10;
    }
     return result;
}
 