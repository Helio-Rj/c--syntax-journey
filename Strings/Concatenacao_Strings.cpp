
// Inclusão das bibliotecas necessárias
#include <iostream> // Permite usar cout e cin para entrada e saída de dados
#include <string>   // Permite usar o tipo string para manipulação de textos


using namespace std; // Facilita o uso dos objetos da biblioteca padrão


// Função principal do programa
// argc: quantidade de argumentos, argv: lista de argumentos (não usados aqui)
int main(int argc, char** argv[]){

    // Declara duas variáveis do tipo string para armazenar o primeiro nome e o sobrenome
    string primeiroNome, sobreNome;

    // Solicita ao usuário que digite o primeiro nome
    std::cout << "Digite seu primeiro nome: " << std::endl;
    std::cin >> primeiroNome; // Lê o primeiro nome

    // Solicita ao usuário que digite o sobrenome
    std::cout << "Digite seu sobrenome: " << std::endl;
    std::cin >> sobreNome; // Lê o sobrenome

    // Concatena o primeiro nome, um espaço e o sobrenome em uma nova string
    string nomeTodo = primeiroNome + " " + sobreNome;

    // Exibe o nome completo do usuário
    std::cout << "Seu nome Completo é: " << nomeTodo << std::endl;

    // Retorna 0 indicando que o programa terminou corretamente
    return 0;
}