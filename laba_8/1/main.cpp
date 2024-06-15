#include <iostream>
#include <string>
#include <vector>
#include "hash.h"

int main(int, char**){
    HashTable table;
    std::cout << table.len() << std::endl;
    std::cout << table.test() << std::endl;
    table.add("flower", 100);
    table.add("toy", 150);
    std::cout << table.len() << std::endl;
    std::cout << table.test() << std::endl;
    std::cout << table.find("flower") << std::endl;
    std::cout << table.del("flower") << std::endl;
    std::cout << table.find("flower") << std::endl;
    std::cout << table.find("toy") << std::endl;
};