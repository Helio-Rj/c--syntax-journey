
// Inclui a biblioteca padrão de entrada e saída de dados em C++
#include <iostream>


// Permite o uso dos elementos do namespace std sem precisar prefixar com 'std::'
using namespace std;


// Função principal do programa
int main(int argc, char** argv[]){
    // Declaração e inicialização da variável inteira x com valor 10
    int x = 10; 
    // Declaração e inicialização da variável inteira y com valor 20
    int y = 20; 

    // Demonstração dos operadores de comparação em C++

    // Operador de igualdade: verifica se x é igual a y (retorna 1 para verdadeiro, 0 para falso)
    std::cout << "x == y: " << (x == y) << std::endl; 
    // Operador de diferença: verifica se x é diferente de y
    std::cout << "x != y: " << (x != y) << std::endl; 
    // Operador de maior: verifica se x é maior que y
    std::cout << "x > y: "  << (x > y)  << std::endl; 
    // Operador de menor: verifica se x é menor que y
    std::cout << "x < y: "  << (x < y)  << std::endl; 
    // Operador de maior ou igual: verifica se x é maior ou igual a y
    std::cout << "x >= y: " << (x >= y) << std::endl; 
    // Operador de menor ou igual: verifica se x é menor ou igual a y
    std::cout << "x <= y: " << (x <= y) << std::endl; 

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}