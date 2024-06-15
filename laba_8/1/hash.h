#ifndef HASH_H
#define HASH_H
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


class HashTable{
    std::unordered_map<std::string, int> hashTable;
    int size;
    std::vector<std::string> names;
    std::vector<int> prices;
    
public:
    HashTable(int s = 10);
    bool add(std::string name, int price);
    bool del(std::string name);
    int find(std::string name);
    bool test();
    int len();
};

#endif