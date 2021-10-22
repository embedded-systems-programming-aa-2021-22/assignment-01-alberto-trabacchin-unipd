#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>


namespace pse {
    
    void print(std::vector<int> v);
    std::vector<int> string_lengths(std::vector<std::string>);
    std::string longest_string(std::vector<std::string>);
    std::string shortest_string(std::vector<std::string>);
    std::string alpha_first_string(std::vector<std::string>);
    std::string alpha_last_string(std::vector<std::string>);

}

#endif