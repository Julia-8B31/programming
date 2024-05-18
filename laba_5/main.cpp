#include <iostream>
#include <vector>
#include <algorithm>
#include "returnNumber.h"
#include "returnDel.h"
#include "returnFun.h"

int main(int,char**)
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

    int h = 13, d = -4, p;
    p = returnDel(h, d);
    std::cout << p << std::endl;
    int a = -2;
    double b = 0;
    try{
        a = fun1(a, b);
    }
    catch(double code){
        std::cout << "Исключение типа double в функции №" << code << std::endl;
    }
    catch(int code){
        std::cout << "Исключение типа int в функции №"<< code << std::endl;
    }
    catch(...){
        std::cout << "Error";
    }
    return 0;
}





