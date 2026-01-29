
// Inclusão das bibliotecas necessárias
#include <iostream> // Para entrada e saída padrão
#include <string>   // Para utilizar o tipo string


using namespace std; // Evita a necessidade de usar std:: antes dos objetos padrão


// Função principal do programa
int main(int argc, char** argv[]){


    // Declaração de uma variável do tipo string
    string x;

    // Solicita ao usuário que digite um número
    std::cout << "Digite um N°: " << std::endl;

    // Lê a entrada do usuário e armazena em x
    std::cin >> x;

    // Exibe o valor digitado pelo usuário
    std::cout << "Você digitou: " << x << std::endl;

    // Retorna 0 indicando que o programa terminou com sucesso
    return 0;
}