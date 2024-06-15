#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "def.h"

int main(int, char**){
    std::vector<int> surnames = enrolled("D:/Programming/lab_4/programming/laba_8/3/text.txt");
    unenrolled("Жужиков");
    return 0; 
}