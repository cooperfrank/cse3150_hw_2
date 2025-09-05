#include <iostream>
#include "greeting_utils.h"

int main() {
    std::cout << "Enter your full name: " << std::endl;

    std::string full_name;
    std::getline(std::cin, full_name);

    std::string greeting = GreetingUtils::create_message(full_name);

    char* buf = GreetingUtils::format_as_c_string(greeting);

    std::cout << buf << std::endl;

    delete[] buf;

    return 0;
}
