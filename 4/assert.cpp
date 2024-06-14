#include <cassert>
#include "main.h"
#include <iostream>
#include <vector>
#include <string>

void test_correct() {
    std::vector<std::string> t = {"02:21", "23:21"};
    assert(def4( t ) == 1260);
}

void test_incorrect() {
        std::vector<std::string> t = {"02:21", "23:21"};
    assert(def4( t) != 5);
}

void test_skip_spaces() {
        std::vector<std::string> t = {"02:21", "23:21"};
    assert(def4( t) != 8);
}

int main() {
std::cout << "test_correct..." << std::flush;
test_correct();
std::cout << "OK" << std::endl;

std::cout << "test_incorrect..." << std::flush;
test_incorrect();
std::cout << "OK" << std::endl;

std::cout << "test_skip_spaces..." << std::flush;
test_skip_spaces();
std::cout << "OK" << std::endl;
}