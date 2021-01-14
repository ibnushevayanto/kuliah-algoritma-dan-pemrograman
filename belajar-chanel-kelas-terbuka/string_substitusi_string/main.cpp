#include <iostream>
#include <string>

int main()
{
    std::string kalimat_1("aku suka kamu suka, siapa? dia!");
    std::string kalimat_2("wakanda forevah!!!");

    std::cout << "\n1. " << kalimat_1 << std::endl;
    std::cout << "2. " << kalimat_2 << std::endl;

    // ! swap string
    std::cout << "\nswap string" << std::endl;
    kalimat_1.swap(kalimat_2);
    std::cout << "\n1. " << kalimat_1 << std::endl;
    std::cout << "2. " << kalimat_2 << std::endl;

    // ! replace, mengganti string
    std::cout << "\nReplace string" << std::endl;
    kalimat_2.replace(27, 3, "otong");
    kalimat_1.replace(kalimat_1.find("ah"), 2, "er");

    std::cout << "\n1. " << kalimat_1 << std::endl;
    std::cout << "2. " << kalimat_2 << std::endl;

    // ! insert string
    std::cout << "\nInsert string" << std::endl;
    kalimat_1.insert(7, " dan kamu");
    std::cout << "\n1. " << kalimat_1 << std::endl;

    return 0;
}