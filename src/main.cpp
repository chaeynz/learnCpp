#include <iostream>
#include <string>
#include <stdexcept>

void printArgument(std::string parameter, bool arg) {
    if(arg) {
    std::cout << "You entered: " << parameter << std::endl;
    } else {
        std::cout << "You entered " << parameter << std::endl;
    }
}

int main(int argc, char *argv[]) {

    bool arg_exists = false;
    std::string argument;

    if (argc > 1) {
        argument = argv[1];
        arg_exists = true;
    } else {
        argument = "nothing";
    }

    printArgument(argument, arg_exists);
    return 0;
}
