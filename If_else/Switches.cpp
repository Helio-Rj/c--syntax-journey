#include <iostream>   // Biblioteca padrão para entrada e saída
using namespace std;  // Permite usar nomes da biblioteca padrão sem precisar do prefixo "std::"

int main(int argc, char** argv[]) {  
    // argc: número de argumentos passados pela linha de comando
    // argv: vetor de strings contendo os argumentos

    const string question = "Qual é a resposta correta para a pergunta: Qual é a capital da França?";
    // Declara uma string constante com a pergunta (não será modificada)

    int opcao;  // Variável para armazenar a escolha do usuário

    cout << "Digite um número de 1 a 3: ";  // Exibe instrução na tela
    cin >> opcao;  // Lê a entrada do usuário e armazena em 'opcao'

    // Estrutura switch para verificar qual opção foi escolhida
    switch (opcao) {
        case 1:  // Se o usuário digitar 1
            cout << "Você escolheu a opção 1 Buenos Aires\n";
            break;  // Encerra este caso e evita executar os próximos

        case 2:  // Se o usuário digitar 2
            cout << "Você escolheu a opção 2 Brasília\n";
            break;

        case 3:  // Se o usuário digitar 3
            cout << "Você escolheu a opção 3 Paris\n";
            break;

        default:  // Se o usuário digitar qualquer número diferente de 1, 2 ou 3
            cout << "Opção inválida\n";
    }

    return 0;  // Indica que o programa terminou com sucesso
}