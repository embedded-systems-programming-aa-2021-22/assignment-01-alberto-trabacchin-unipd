#include <iostream>
#include "functions.hpp"

namespace pse {
    
    void print(std::vector<std::string> v) {
        for (size_t i = 0; i < v.size(); i++)
            std::cout << v.at(i) << std::endl;
    }

}
