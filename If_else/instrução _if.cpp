#include <iostream>

using namespace std;

// Utilize a ifinstrução para especificar um bloco de código C++ a ser executado se uma condição for verdadeira true.

// Observe que ifestá escrito em letras minúsculas. Letras maiúsculas ( Ifou IF) gerarão um erro.

int main(int argc, char** argv[]) {
    // Declaração da função principal, ponto de entrada do programa
    int x;
    // Declaração de uma variável inteira 'x' para armazenar o número digitado pelo usuário
    std::cout << "Digite um número: ";
    // Exibe uma mensagem pedindo ao usuário para digitar um número
    std::cin >> x;
    // Lê o número digitado pelo usuário e armazena em 'x'

    if (x % 2 == 0) {
        //Utilize ifpara especificar um bloco de código a ser executado se uma condição for verdadeira.

        // Verifica se o número é par usando o operador módulo (%)
        std::cout << "O número " << x << " é par." << std::endl;
        // Se for par, exibe a mensagem correspondente
        
    } else {
            //Use elsepara especificar um bloco de código a ser executado, caso a mesma condição seja falsa.

        // Caso contrário, executa o bloco abaixo
        std::cout << "O número " << x << " é ímpar." << std::endl;
        // Se for ímpar, exibe a mensagem correspondente
    }

    
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}