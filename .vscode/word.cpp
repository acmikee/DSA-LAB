#include <iostream>
#include <string>

int main(){
    std::string input;
    std::cout << "Enter a word: ";
    std::cin >> input;  // Reads input until whitespace is encountered
    std::cout << "You entered: " << input << std::endl;
    return 0;
}
