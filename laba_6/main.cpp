#include <iostream>
#include "matrix.h"
#include "convolution.h"
#include "downsampling.h"

int main(){
    setlocale(LC_ALL, "Ru"); 
    matrix m1 = matrix(5, 5);
    downsampling m2 = downsampling(m1);
    std::cout << m1 << std::endl; 
    std::cout << m2 << std::endl;
    return 0;
}