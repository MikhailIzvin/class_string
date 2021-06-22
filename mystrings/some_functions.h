//
// Created by Sveto Copy on 22.06.2021.
//

#ifndef STRINGS_SOME_FUNCTIONS_H
#define STRINGS_SOME_FUNCTIONS_H
#include "line.h"

struct chars{
    char space = ' ';
    char comma = ',';
    char point = '.';
    char tab = '\t';
    char left_parenthesis = '(';
    char right_parenthesis = ')';
    char left_square_bracket = '[';
    char right_square_bracket = ']';
    char left_curly_brace = '{';
    char right_curly_brace = '}';
    char colon = ':';
    char vertex = '"';
    char bole = '\'';
    char equal = '=';
    char minus = '-';
};

bool check(char a){
    chars exception;
    if (a == exception.bole ||
        a == exception.colon ||
        a == exception.equal ||
        a == exception.left_curly_brace ||
        a == exception.right_curly_brace ||
        a == exception.left_parenthesis ||
        a == exception.right_parenthesis ||
        a == exception.left_square_bracket ||
        a == exception.right_square_bracket ||
        a == exception.minus ||
        a == exception.point ||
        a == exception.tab ||
        a == exception.vertex ||
        a == exception.space ||
        a == exception.comma)
        return true;
    else
        return false;
}

my::line min(my::line &object_1, my::line &object_2){
    int length_1 = object_1.get_length();
    int length_2 = object_2.get_length();
    if (length_1 > length_2)
        return object_1;
    if (length_1 < length_2)
        return object_2;
    return object_2;
}

bool compare(my::line &object_1, my::line &object_2){
    my::line min_object = min(object_1, object_2);
    for (int i = 0; i < min_object.get_length(); i++){
        if (object_1[i] > object_2[i])
            return true;
        if (object_1[i] == object_2[i])
            continue;
        return false;
    }
    return false;
}

void token(my::line &lin, std::vector<my::line> &vector){
    my::line line = lin + " ";
    my::line string;
    char *str = new char[line.get_length()];
    int star_value = -1;
    int j = 0;
    int i = 0;
    for (; i < line.get_length();){
        str[j] = line[i];
        i++;
        if (check(line[i])){
            string = str;
            vector.emplace_back(string);
            memset(str, 0, line.get_length());
            j = star_value;
            i++;
        }
        j++;
    }
}

#endif //STRINGS_SOME_FUNCTIONS_H