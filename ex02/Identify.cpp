#include "Identify.hpp"

Base* generate() {
    int choice = rand() % 3;
    if (choice == 0) return new A();
    if (choice == 1) return new B();
    return new C();
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p)) std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p)) std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (...) {}
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (...) {}
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (...) {}
}