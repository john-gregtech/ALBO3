//create a compile config for multiple main functions for TEST, CLIENT and SERVER
#include <iostream>

#if defined(WEE_TEST) 
int main() {
    std::cout << "those damn monkeys should be sent to the zoo!!\n";
    return 0;
}

#else 

int main() {
    std::cout << "chimp" << std::endl;
    return 0;
}
#endif