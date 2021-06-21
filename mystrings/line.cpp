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

std::ostream &my::operator<<(std::ostream &out, const my::line &assingment) {
    out << assingment.str;
    return out;
}

std::istream &my::operator>>(std::istream &in, my::line &assignment) {
    char ch;
    int buff = 1024;
    int i = 0;
    assignment.str = new char[buff];
    while (in.get(ch)) {
        if (i == assignment.length - 1)
            assignment.resize();
        if (ch == '\n'){
            assignment.str[i] = '\0';
            assignment.length = size(assignment.str);
            assignment.str[assignment.length] = '\0';
            return in;
        }
        assignment.str[i] = ch;
        i++;
    }
    return in;
}

void my::line::resize() {
    char* copy_str=new char[length];
    for (int i=0;i<length;i++)
        copy_str[i]=str[i];
    delete [] str;
    length *= 2;
    str=new char[length];
    for (int i=0;i<length/2;i++)
        str[i]=copy_str[i];
    delete [] copy_str;
}

bool my::line::operator==(const my::line &assignment) {
    if (length != assignment.length)
        return false;
    for (int i = 0; i < length; i++){
        if (str[i] != assignment.str[i])
            return false;
    }
    return true;
}

bool my::line::operator!=(const my::line &assignment) {
    return !(operator==(assignment));
}
