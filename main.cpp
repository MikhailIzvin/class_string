#include <iostream>
#include <vector>
#include "mystrings/line.h"

void sort(my::line &line, std::vector<my::line> &vector){
    char *str = new char[line.get_length()];
    my::line string;
    int j = 0;
    for (int i = 0; i < line.get_length(); i++){
        str[j] = line[i];
        j++;
        if (line[i] == ' ' || i == line.get_length() - 1){
            string = str;
            vector.push_back(string);
            memset(str, 0, line.get_length());
            j = 0;
        }
    }
}

int main(){
    my::line line;
    std::cin >> line;
    std::vector<my::line> vector;
    sort(line, vector);
    for (auto &item : vector)
        std::cout << item << std::endl;
   /* while (true){
        my::line line;
        std::cout << "enter string: ";
        std::cin >> line;
        int value;

        std::cout << "1 for continue 0 for exit" << std::endl;
        std::cout << "enter number: ";
        std::cin >> value;
        if (!value) break;
        std::cout << line;
    }*/
    return 0;
}
