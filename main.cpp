#include <iostream>
#include <vector>
#include "mystrings/line.h"

/*std::vector<std::vector<my::line>()> sort(my::line &line){
    line
}*/

int main(){
    while (true){
        my::line line;
        std::cout << "enter string: ";
        line.get();
        int value;
        std::cout << "1 for continue 0 for exit" << std::endl;
        std::cout << "enter number: ";
        std::cin >> value;
        if (value) break;
        line.get_string();
    }
    return 0;
}