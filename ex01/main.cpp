#include "Serializer.hpp"
#include <iostream>

int main() {
    Data data;
    data.info = "Hello, Serialization!";
    
    unsigned long raw = Serializer::serialize(&data);
    Data* restored = Serializer::deserialize(raw);
    
    std::cout << "Original address: " << &data << "\n";
    std::cout << "Restored address: " << restored << "\n";
    std::cout << "Restored info: " << restored->info << "\n";
    return 0;
}