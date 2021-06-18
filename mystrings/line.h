//
// Created by Sveto Copy on 16.06.2021.
//

#ifndef STRINGS_LINE_H
#define STRINGS_LINE_H
#include <iostream>

namespace my {
    class line {
    private:
        int length;
        char *str;
    public:
        line() {str = nullptr; length = 0;}
        line &operator = (const line &assignment);
        line operator + (const line &assignment);
        line(const char *string);
        line(const line &assignment);
        line(line &&assignment);
        line get();
        char &operator [](int i);
        void get_string();
        int get_length();
        ~line();
    };
}


#endif //STRINGS_LINE_H
