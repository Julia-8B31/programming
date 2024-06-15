#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int hex(std::string surname){
    int res = 0;
    for(int i = 0; i < surname.size(); i++){
        res += i * int(surname[i]);
    }
    return res;
}

std::vector<int> enrolled(std::string path){
    std::vector<int> surnames; 
    std::ifstream file(path);
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::string surname = line.substr(0, line.size() - 2);
            surnames.push_back(hex(surname));
            std::cout << hex(surname) << std::endl;
        }
    }
    file.close();
    return surnames; 
}

bool unenrolled(std::string surname){
    std::vector<int> surnames = enrolled("D:/Programming/lab_4/programming/laba_8/3/text.txt");
    for(int i = 0; i < surnames.size(); i++){
        if(hex(surname) == surnames[i]){                
            std::vector<std::string> surnames1; 
            std::ifstream file("D:/Programming/lab_4/programming/laba_8/3/text.txt");
            if (file.is_open()) {
                std::string line;
                while (getline(file, line)) {
                    std::string surname1 = line.substr(0, line.size() - 2);
                    if(surname1 == surname){
                        surname1 += " 1";
                        surnames1.push_back(surname1);
                    }
                    else{
                    surnames1.push_back(line);
                    }
                }
            }
            file.close();
            std::ofstream ofs;
            ofs.open("D:/Programming/lab_4/programming/laba_8/3/text.txt", std::ofstream::out | std::ofstream::trunc);
            for(int ii = 0 ; ii < surnames1.size() - 1; ii++){
                ofs << surnames1[ii] <<  std::endl;
            }
            ofs << surnames1[surnames1.size() - 1];
            ofs.close();
            return true;
        }
    }
    std::ofstream out("D:/Programming/lab_4/programming/laba_8/3/text.txt", std::ios::app);
    if (out.is_open()){
        surname += " 1";
        out << std::endl << surname;
    }
    out.close();
    return false;
}