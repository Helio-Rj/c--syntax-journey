// Inclui a biblioteca padrão para entrada e saída de dados
#include <iostream>
// Permite usar os elementos do namespace std sem precisar prefixar
using namespace std;

// Função principal do programa
int main(int argc, char** argv[]){
    // Declaração e inicialização das variáveis inteiras
    int a = 10; // a recebe 10
    int b = 5;  // b recebe 5
    int c = 20; // c recebe 20

    // Operadores de atribuição
    a = b;    // Atribui o valor de b para a
    std::cout << "a = b: " << a << std::endl; // Exibe o valor de a

    a += b;   // Soma b ao valor de a e atribui o resultado a a
    std::cout << "a += b: " << a << std::endl; // Exibe o valor de a

    c -= a;   // Subtrai a de c e atribui o resultado a c
    std::cout << "c -= a: " << c << std::endl; // Exibe o valor de c

    c *= 2;   // Multiplica c por 2 e atribui o resultado a c
    std::cout << "c *= 2: " << c << std::endl; // Exibe o valor de c

    c /= 5;   // Divide c por 5 e atribui o resultado a c
    std::cout << "c /= 5: " << c << std::endl; // Exibe o valor de c

    c %= 3;   // Calcula o resto da divisão de c por 3 e atribui a c
    std::cout << "c %= 3: " << c << std::endl; // Exibe o valor de c

    a <<= 1;  // Desloca os bits de a para a esquerda em 1 posição
    std::cout << "a <<= 1: " << a << std::endl; // Exibe o valor de a

    b >>= 1;  // Desloca os bits de b para a direita em 1 posição
    std::cout << "b >>= 1: " << b << std::endl; // Exibe o valor de b

    a &= 3;   // Realiza operação AND bit a bit entre a e 3
    std::cout << "a &= 3: " << a << std::endl; // Exibe o valor de a

    a |= 2;   // Realiza operação OR bit a bit entre a e 2
    std::cout << "a |= 2: " << a << std::endl; // Exibe o valor de a

    a ^= 1;   // Realiza operação XOR bit a bit entre a e 1
    std::cout << "a ^= 1: " << a << std::endl;


    return 0;
}