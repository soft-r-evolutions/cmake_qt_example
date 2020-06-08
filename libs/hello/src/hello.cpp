#include "hello.h"

#include <iostream>

Hello::Hello() {
    m_attr = 10;
}

void Hello::print() const {
    // don't do this in your projects :)
    std::cout << "Hello";
}
