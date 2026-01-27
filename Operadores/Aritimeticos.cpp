
// Inclui a biblioteca padrão de entrada e saída
#include <iostream>


// Permite usar os elementos do namespace std sem precisar do prefixo 'std::'
using namespace std;


// Função principal do programa
int main(int argc, char** argv[]){
    // Declaração e inicialização das variáveis inteiras 'a' e 'b'
    int a = 15;
    int b = 4;


    // Operadores aritméticos básicos
    int sum = a + b;          // Soma de 'a' e 'b' (adição)
    int difference = a - b;   // Diferença entre 'a' e 'b' (subtração)
    int product = a * b;      // Produto de 'a' e 'b' (multiplicação)
    int quotient = a / b;     // Quociente da divisão inteira de 'a' por 'b'
    int remainder = a % b;    // Resto da divisão inteira de 'a' por 'b' (módulo)


    // Exibe os resultados das operações aritméticas
    std::cout << "Soma: " << sum << std::endl;           // Exibe a soma
    std::cout << "Diferença: " << difference << std::endl; // Exibe a diferença
    std::cout << "Produto: " << product << std::endl;     // Exibe o produto
    std::cout << "Quociente: " << quotient << std::endl;   // Exibe o quociente
    std::cout << "Resto: " << remainder << std::endl;      // Exibe o resto
    
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}