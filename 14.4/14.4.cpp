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

    char a;
    char b;
    int num = word.length();

    a = word[0];
    b = word[num - 1];


    std::cout << a << " " << b;
    std::cout << std::endl;

    return 0;

}
