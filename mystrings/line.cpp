//
// Created by Sveto Copy on 16.06.2021.
//

#include "line.h"
static int size(const char *a){
    const char *ptr = a;
    while(*ptr)
        ptr++;
    return ptr - a;
}

void my::line::get_string() {
    std::cout << str;
}

int my::line::get_length() {
    return length;
}

my::line::line(const char *string) {
    length = size(string);
    str = new char[length + 1];
    for (int i = 0; i < length; i++)
        str[i] = string[i];
    str[length] = '\0';
}

my::line::~line() {
    delete[] str;
    str = nullptr;
}

my::line &my::line::operator= (const my::line &assignment) {
    if (str)
        delete[] str;
    length = assignment.length;
    str = new char[length + 1];
    for (int i = 0; i < length; i++)
        str[i] = assignment.str[i];
    str[length] = '\0';
    return *this;
}

my::line my::line::operator+ (const my::line &assignment) {
    line newLine;
    newLine.length = size(str) + size(assignment.str);
    newLine.str = new char[newLine.length + 1];
    int i = 0;
    for (; i < size(str); i++)
        newLine.str[i] = str[i];
    for (int j = 0; j < size(assignment.str); j++, i++)
        newLine.str[i] = assignment.str[j];
    newLine.str[newLine.length] = '\0';
    return newLine;
}

my::line::line(const my::line &assignment) {
    length = size(assignment.str);
    str = new char[length + 1];
    for (int i = 0; i < length; i++)
        str[i] = assignment.str[i];
    str[length] = '\0';
}

my::line::line(my::line &&assignment) {
    str = assignment.str;
    length = assignment.length;
    assignment.str = nullptr;
    assignment.length = 0;
}

char &my::line::operator[](int i) {
    return str[i];
}

my::line my::line::get() {
    std::cin >> str;
}
