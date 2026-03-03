#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // Declaração de uma variável inteira para armazenar o número digitado pelo usuário
    int numero;

    // Solicita ao usuário que digite um número
    std::cout << "Digite um número: ";
    // Lê o número digitado pelo usuário e armazena na variável 'numero'
    std::cin >> numero;

    // Utiliza um loop 'for' para imprimir os números de 0 até o número digitado
    for (int i = 0; i <= numero; i++) {
        // Imprime o valor atual de 'i' seguido de um espaço
        std::cout << i << " ";
    }
    
    // Imprime uma nova linha após o loop para melhor formatação
    std::cout << std::endl;

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}