
// Inclui a biblioteca padrão de entrada e saída de dados em C++
#include <iostream>

// Ordem das Operações (Precedência de Operadores)
// Abaixo estão alguns operadores comuns em C++, listados da maior para a menor prioridade:
// 1. () - Parênteses: usados para alterar a ordem natural das operações
// 2. *, /, % - Multiplicação, Divisão, Módulo
// 3. +, - - Adição, Subtração
// 4. >, <, >=, <= - Operadores de comparação
// 5. ==, != - Operadores de igualdade
// 6. && - Operador lógico E
// 7. || - Operador lógico OU
// 8. = - Operador de atribuição






// Permite o uso dos elementos do namespace std sem precisar prefixar com 'std::'
using namespace std;


// Função principal do programa
int main(int argc, char** argv[]){
    // Exemplo 1: sem parênteses
    // A multiplicação (4 * 2) é realizada antes da adição, pois tem maior precedência
    auto result = 3 + 4 * 2; 
    std::cout << "3 + 4 * 2 = " << result << std::endl; // Saída: 11

    // Exemplo 2: com parênteses
    // Os parênteses forçam a adição (3 + 4) a ser realizada antes da multiplicação
    auto result2 = (3 + 4) * 2; 
    std::cout << "(3 + 4) * 2 = " << result2 << std::endl; // Saída: 14

    // O uso de parênteses é fundamental para garantir que as operações sejam realizadas na ordem desejada

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}