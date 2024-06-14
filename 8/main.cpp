#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> def8(std::vector<std::vector<int>>& bushes){
    std::vector<std::vector<int>> fense;
    int xmax = -2147483647, ymax = -2147483647, xmin = 2147483647, ymin = 2147483647;
    for(int i = 0; i < (int)bushes.size(); i++){
        if(bushes[i][0] > xmax){
            xmax = bushes[i][0];
        }
        else if(bushes[i][0] < xmin){
            xmin = bushes[i][0];
        }
        if(bushes[i][1] > ymax){
            ymax = bushes[i][1];
        }
        else if(bushes[i][1] < ymin){
            ymin = bushes[i][1];
        }
    }
    for(int i = 0; i < (int)bushes.size(); i++){
        if((bushes[i][0] == xmax) || (bushes[i][1] == ymax) || (bushes[i][0] == xmin) || (bushes[i][1] == ymin)){
            fense.push_back(bushes[i]);
        }
    }
    std::sort(fense.begin(), fense.end());
    return fense;
}

/*
int main(int, char**){
    std::vector<std::vector<int>> bushes{{0,0}, {1,1}, {1, -2}, {3, 3}, {-2, -2}, {-1, 1}, {2, 1}};
    std::vector<std::vector<int>> res = def8(bushes);
    for(int i = 0; i < res.size(); i++){
        for(int ii = 0; ii < res[i].size(); ii++){
            std::cout << res[i][ii] << " ";
        }
        std::cout << std::endl;
    }
    return 0; 
}*/