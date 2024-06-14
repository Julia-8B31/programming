#include <cassert>
#include "main.h"
#include <iostream>


void test_correct() {
    assert(def2(0,0,2,-3,4) == 1);
}

void test_incorrect() {
    assert(def2(0,0,2,-3,4) != 5);
}

void test_skip_spaces() {
    assert(def2(0,0,2,-3,4) != 8);
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