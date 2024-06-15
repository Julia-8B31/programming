#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#ifndef DEF_H
#define DEF_H

int hex(std::string surname);
std::vector<int> enrolled(std::string path);
bool unenrolled(std::string surname);

#endif