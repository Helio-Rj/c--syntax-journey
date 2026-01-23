// Inclui a biblioteca padrão de entrada e saída, necessária para usar std::cout
#include <iostream>
// Permite o uso dos elementos do namespace std sem precisar prefixar com 'std::'
using namespace std;
// Função principal do programa, ponto de entrada. Recebe argumentos da linha de comando.
int main(int argc, char** argv()){
    // Declara uma constante inteira chamada 'myConst' e atribui o valor 100
    const int myConst = 100; // Declaração de uma constante inteira

    // Exibe na tela o texto seguido do valor da constante e finaliza a linha
    std::cout << "Valor da constante: " << myConst << std::endl; // Imprime 100

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}