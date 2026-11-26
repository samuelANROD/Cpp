#include <iostream>

//calculador simples para resolver coisas em C++
int main() {
    double num1, num2;

    std::cout << "digite os valore de x e y:" << std::endl;
    std::cin >> num1;
    std::cin >> num2;

    double soma = (num1 + num2);
    double sub = (num1 - num2);
    double mult = (num1 * num2);

    std::cout << "soma: " << soma << std::endl;
    std::cout << "subtração: " << sub << std::endl;
    std::cout << "multiplicação: " << mult << std::endl;

    //if e else simples mesma sintax que C
    if (num2 == 0) {
        std::cout << "erro digite valor mair que zero";
    } else {
        double div = (num1 / num2);
        std::cout << "divisão: " << div << std::endl;
    }

    return 0;
}