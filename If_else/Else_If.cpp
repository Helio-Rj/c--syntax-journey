// Inclui a biblioteca iostream para usar entrada e saída de dados
#include <iostream>

// Permite usar cout e cin sem o prefixo std::
using namespace std;

// Função principal do programa - ponto de entrada
int main(int argc, char** argv) {
    // Declara uma variável inteira para armazenar o número do usuário
    int MeuNumero;
    // Exibe uma mensagem pedindo ao usuário que digite um número
    std::cout << "Digite um número: ";
    // Lê o número digitado pelo usuário e armazena na variável MeuNumero
    std::cin >> MeuNumero;
    // Verifica se o número é maior que zero (positivo)
    if (MeuNumero > 0) {
        // Se for positivo, exibe essa mensagem
        std::cout << "O número é positivo." << std::endl;
    } else if (MeuNumero < 0) {
        // Se não for positivo, verifica se é menor que zero (negativo)
        std::cout << "O número é negativo." << std::endl;
    } else {
        // Se não for positivo nem negativo, então é zero
        std::cout << "O número é zero." << std::endl;
    }    
    
    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
