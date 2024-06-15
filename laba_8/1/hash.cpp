#include <iostream>
#include <string>
#include <vector>
#include "hash.h"

HashTable::HashTable(int s) {
    size = s;
}

bool HashTable::add(std::string name, int price) {
    if(hashTable.count(name) > 0) {
        return 0;
    }
    hashTable[name] = price;
    return 1;
}

bool HashTable::del(std::string name) {
    if(hashTable.erase(name)) {
        return 1;
    }
    return 0; 
}

int HashTable::find(std::string name) {
    if(hashTable.count(name) > 0) {
        return hashTable[name];
    }
    return -1; 
}

bool HashTable::test() {
    
    return 1;
}

int HashTable::len() {
    return hashTable.size();
}
