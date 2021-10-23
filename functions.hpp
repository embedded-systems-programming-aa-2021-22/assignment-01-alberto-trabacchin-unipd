#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>


namespace pse {
    
    void print(std::vector<std::string> v);
    void print(std::vector<int> v);
    std::vector<int> string_lengths(std::vector<std::string> v);
    std::string longest_string(std::vector<std::string> v);
    std::string shortest_string(std::vector<std::string> v);
    std::string alpha_first_string(std::vector<std::string> v);
    std::string alpha_last_string(std::vector<std::string> v);

}

#endif