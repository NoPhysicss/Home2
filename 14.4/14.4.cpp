#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "Enter Word/Num: ";
    std::getline(std::cin, word);
    std::cout << std::endl;

    std::cout << word << " | lenght: " << word.length() << std::endl;
    std::cout << std::endl;

    char a = word.front();
    char b = word.back();

    std::cout << a << " " << b;
    std::cout << std::endl;

    return 0;

}
