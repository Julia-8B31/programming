#include <iostream>

int def7(int n){
    int r = n + 1;
    for(int i = 0; i <= n; i++){
        int t = 0;
        for(int ii = 0; ii < 32; ii++){
            std::cout << (i & (1 << ii));
            if(i & (1 << ii)){
                t++;
            }
            else{
                t = 0;
            }
            if(t == 2){
                r--;
            }
        }
        std::cout << std::endl;
    }
    return r;
}

/*
int main(int, char**){
    std::cout << def7(9);
    return 0;
}*/