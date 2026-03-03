
// Inclui a biblioteca padrão de entrada e saída de dados em C++
#include <iostream>


// Permite o uso dos elementos do namespace std sem precisar prefixar com 'std::'
using namespace std;


// Função principal do programa
int main(int argc, char** argv[]){
    // Declaração e inicialização das variáveis inteiras x e y
    int x = 10; // x recebe o valor 10
    int y = 20; // y recebe o valor 20

    // Demonstração dos operadores lógicos em C++

    // Operador lógico E (&&): retorna verdadeiro (1) se ambas as condições forem verdadeiras
    // Aqui, x é menor que y E x é igual a 10
    std::cout << "(x < y) && (x == 10): " << ((x < y) && (x == 10)) << std::endl;

    // Operador lógico OU (||): retorna verdadeiro (1) se pelo menos uma das condições for verdadeira
    // Aqui, x é maior que y OU y é igual a 20
    std::cout << "(x > y) || (y == 20): " << ((x > y) || (y == 20)) << std::endl;
    // Operador lógico NÃO (!): inverte o valor lógico da expressão
    // Aqui, verifica se NÃO é verdade que x é igual a y
    std::cout << "!(x == y): " << (!(x == y)) << std::endl;

    // Exemplo mais complexo: combinação de operadores lógicos
    // Aqui, verifica se x é igual a 10 E (y é igual a 20 OU x é maior que y)
    std::cout << "(x == 10) && ((y == 20) || (x > y)): " << ((x == 10) && ((y == 20) || (x > y))) << std::endl;
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}