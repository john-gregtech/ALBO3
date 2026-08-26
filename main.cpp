//create a compile config for multiple main functions for TEST, CLIENT and SERVER
#include <iostream>

#if defined(TEST)

int main() {
    std::cout << "test idk\n";
}

// void initialization() { //pre run and warm up of linux specific utilities

// }
// void _main_function_caller() { //idk what to call this but calls the main function of respected program

// }  

#else

int main() {
    std::cout << "chimp" << std::endl;
    return 0;
}

#endif
