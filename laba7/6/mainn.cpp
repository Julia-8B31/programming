#include <iostream>
#include <string>

bool test1(char c){
    for(int i = 0; i < 10; i++){
        if(c == char(i + '0')){
            return 1;
        }
    }
    return 0;
}

int def6(std::string equation){
    int sig = 1;
    int n = 0;
    std::string k = "0";
    for(int i = 0; i < (int)equation.size(); i++){
        if(equation[i] == '-') {
            n += std::stoi(k) * sig;
            sig = -1;
            k = "0";
        }
        else if(equation[i] == '+'){
            n += std::stoi(k) * sig;
            sig = 1;
            k = "0";
        }
        else if(test1(equation[i])){
            k += equation[i]; 
        }
        else if((equation[i] == '(')){
            int a = 1, z = 0;
            for(int ii = i + 1; a != 0; ii++){
                if(equation[ii] == '('){
                    a++;
                }
                else if(equation[ii] == ')'){
                    a--;
                }
                z++;
            }
            n += def6(equation.substr(i + 1, z - 1)) * sig;
            i += z + 1;
        }
    }
    n += std::stoi(k) * sig;
    return n;
}

/*int main(int, char**){
    std::string c = "-(3+(4+5))";
    int t = def6(c);
    std::cout << t;
    return 0;
}*/