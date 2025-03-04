#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <limits.h>
#include <iostream>

class Serializer {
    public:
        static unsigned long serialize(Data* ptr);
        static Data* deserialize(unsigned long raw);

    private:
        Serializer();
};

#endif