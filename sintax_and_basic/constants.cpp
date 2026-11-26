#include <iostream>
//constantes funcionam basicamente do mesmo jeito que em toda linguagem
//só a sintaxe que muda
int main () {
    const double pi = 3.14;


    //sera exibido 3.14 e sempre sera se alterar de alguma forma dara erro
    std::cout << "o valor de pi:  "<< pi << std::endl;
    return 0;
}