
// Inclui a biblioteca padrão de entrada e saída
#include <iostream>


// Permite o uso dos elementos do namespace std sem precisar prefixar
using namespace std;


// Utilize a instrução 'if' para especificar um bloco de código a ser executado se uma condição for verdadeira.

// Atenção: 'if' deve ser escrito em minúsculo. Letras maiúsculas (If ou IF) causarão erro.


int main(int argc, char** argv[]) {
    // Declaração das variáveis para armazenar as notas e a média
    float nota1, nota2, media;

    // Solicita ao usuário a primeira nota
    std::cout << "Digite a primeira nota: ";
    // Lê a primeira nota digitada pelo usuário
    std::cin >> nota1;

    // Solicita ao usuário a segunda nota
    std::cout << "Digite a segunda nota: ";
    // Lê a segunda nota digitada pelo usuário
    std::cin >> nota2;

    // Calcula a média das duas notas
    media = (nota1 + nota2) / 2;

    // Exibe a média calculada
    std::cout << "A média é: " << media << std::endl;

    // Verifica se a média é maior ou igual a 7.0
    if (media >= 7.0) {
        // Se verdadeiro, exibe mensagem de aprovação
        std::cout << "Aluno aprovado!" << std::endl;
    } else {
        // Se falso, exibe mensagem de reprovação
        std::cout << "Aluno reprovado!" << std::endl;
    }

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}