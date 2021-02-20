#include "defs.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << H_THREADS_NUM << std::endl;

    Printer* printer0 = new Printer(0);
    Printer* printer1 = new Printer(1);
//std::cout << "W: " << printer->get_console_size()._W << std::endl;
//std::cout << "H: " << printer->get_console_size()._H << std::endl;

    printer0->print();
    printer1->print();
    return 0;
}

