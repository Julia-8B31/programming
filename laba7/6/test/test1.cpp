#include <cassert >
#include "mainn.h"
#include <string>

void test() {
//    std::string c = "-(3+(4+5))";
    assert(def6("-(3+(4+5))")== -12);
}

int main() {
test();
 }