#include <iostream>
#include <algorithm>
#include <vector>
#include "mystrings/line.h"
#include "mystrings/some_functions.h"

int main(){
    std::cout << "enter 0 for exit!" << std::endl;
    std::vector<my::line> vector;
    my::line string;
    while (true){
        my::line line;
        std::cout << "enter string: ";
        std::cin >> line;
        string = line;
        if (string == "0") break;
        token(string, vector);
    }
    std::sort(vector.begin(), vector.end(), compare);
    for (auto iter = vector.begin(); iter != vector.end(); iter++){
        std::cout << *iter << std::endl;
    }
    return 0;
}
