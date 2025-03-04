#include "Serializer.hpp"

Serializer::Serializer() {
    std::cout << "Serializer Default Constructor called\n";
}

unsigned long Serializer::serialize(Data* ptr) {
    return reinterpret_cast<unsigned long>(ptr);
}

Data* Serializer::deserialize(unsigned long raw) {
    return reinterpret_cast<Data*>(raw);
}
