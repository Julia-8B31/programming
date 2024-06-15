#include <iostream>
#include <vector>
#include <algorithm>

 
 /**
 * @brief создаём число-вектор result с результатом и добавляем в него 0, суммируем столбиком два вектора vec1 vec2, 
 * с помощью for, учитвая остаток ost 
 * @param vec1 суммируемый вектор, в который вводим число
 * @param vec2 суммируемый вектор, в который вводим число
 * @return vector <int> result вектор, в который сохраняем сумму векторов
 */



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

int main()
{
   setlocale(LC_ALL, "RUS");
   int n;
   std::cout << "Введите n: ";
   std::cin >> n;
   std::vector<int> res={1};
    for(int i=2; i<=n; i++){
        std::vector<int> vec=res;   
        for (int j=0; j<i-1; j++){
            res = summa(res, vec);
        } 
    }
    for (int i=0; i<res.size(); i++){
        std::cout << res[res.size()-i-1];
    }
    std::cout << '\n';
}
