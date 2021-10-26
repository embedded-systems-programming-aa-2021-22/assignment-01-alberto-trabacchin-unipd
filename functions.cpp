#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

#include "functions.hpp"

namespace pse {
    
    void print(std::vector<std::string> v) {
        for (size_t i = 0; i < v.size(); i++)
            std::cout << v.at(i) << std::endl;
    }

    void print(std::vector<int> v) {
        for (size_t i = 0; i < v.size(); i++)
            std::cout << v.at(i) << std::endl;
    }

    std::vector<int> string_lengths(std::vector<std::string> v) {
        std::vector<int> v_len(v.size(), 0);
        for (size_t i = 0; i < v.size(); i++)
            v_len[i] = static_cast<int> (v.at(i).length());
        return v_len;
    }

    std::string longest_string(std::vector<std::string> v) {
        std::vector<int> str_len = string_lengths(v);
        std::vector<int>::const_iterator max_pos = std::max_element(str_len.cbegin(), str_len.cend());
        size_t max_i = std::distance(str_len.cbegin(), max_pos);
        return v.at(max_i);
    }

    std::string shortest_string(std::vector<std::string> v) {
        std::vector<int> str_len = string_lengths(v);
        std::vector<int>::const_iterator min_pos = std::min_element(str_len.cbegin(), str_len.cend());
        size_t min_i = std::distance(str_len.cbegin(), min_pos);
        return v.at(min_i);
    }

    std::string alpha_first_string(std::vector<std::string> v) {
        std::sort(v.begin(), v.end());
        return v.front();
    }

    std::string alpha_last_string(std::vector<std::string> v) {
        std::sort(v.begin(), v.end());
        return v.back();
    }

}
