#include <iostream>
#include "functions.hpp"

namespace pse {
    
    void print(std::vector<std::string> v) {
        for (size_t i = 0; i < v.size(); i++)
            std::cout << v.at(i) << std::endl;
    }

    void print(std::vector<int> v) {
        for(size_t i = 0; i < v.size(); i++)
            std::cout << v.at(i) << std::endl;
    }

    std::vector<int> string_lengths(std::vector<std::string> v) {
        std::vector<int> v_len(v.size(), 0);
        for (size_t i = 0; i < v.size(); i++)
            v_len[i] = static_cast<int> (v.at(i).length());
        return v_len;
    }

}
