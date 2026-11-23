#include <iostream>
#include <string>

int main() {

    std::cout << "Hello, C++!" << std::endl;

    std::cout <<"----------------------\n" << std::endl;

    //aqui é um scanner simples em c++
    std::string name;

    std::cout << "Digite seu nome: ";
    std::cin >> name;

    std::cout << "Ola, " << name << std::endl;
    return 0;
}
