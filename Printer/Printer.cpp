#include "Printer.h"

Printer::Printer() : _column_num(0) {
    _c_size.init();
};

Printer::Printer(short aNum) : _column_num(aNum) {
    _c_size.init();
    if( _c_size._W/ALIGNE < aNum ) {
        std::cout << "ERROR:: num is too large " << aNum << std::endl;
    }
};

console_size Printer::get_console_size() {
    return _c_size;
};

short Printer::get_column_num() {
    return _column_num;
};

void Printer::print() {
    for (int i = 0; i < _c_size._W; i++) {
        if ( i % ALIGNE == 0 && i / ALIGNE == _column_num ) {
            print_aligne();
            std::cout << "x" << std::endl;
            break;
        } else {
            std::cout << " ";
        }
    }
};

void Printer::print_aligne() {
    for (int i = 0; i < ALIGNE - 1; i++) {
        std::cout << " ";
    }
};