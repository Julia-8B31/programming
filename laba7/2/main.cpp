#include <iostream>

bool def2(int sx, int sy, int fx, int fy, int t) {
    
    int vx = std::abs(fx - sx);
    int vy = std::abs(fy - sy);
    if ((vx > t) || (vy > t)) {  // Если разница по оси x или по оси y больше t, функция возвращает false 0
        return 0;
    }
    return 1;
}

/*int main(int, char**) {
    bool res = def2(0, 0, 2, -3, 4);
    std::cout << res;
    return 0;
}*/