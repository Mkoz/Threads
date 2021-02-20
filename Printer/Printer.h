#pragma once

#include "ConsoleSize.hpp"
#include <iostream>


#define ALIGNE 4

class Printer{
public:
    Printer();
    Printer(short);

    void print();
    short get_column_num();
    console_size get_console_size();

private:
    void print_aligne();
    console_size _c_size;
    short _column_num;
};
