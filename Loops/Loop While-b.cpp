#include <iostream>   // Biblioteca padrão para entrada e saída (cout, cin, etc.)

using namespace std;  // Permite usar 'cout' e 'cin' sem precisar escrever 'std::' sempre

int main(int argc, char** argv[]) {  // Função principal do programa
                                     // argc = número de argumentos da linha de comando
                                     // argv = vetor com os argumentos (não usado aqui)

    int i = 3;   // Declara uma variável inteira 'i' e inicializa com o valor 3

    while (i > 0) {   // Enquanto 'i' for maior que 0, executa o bloco abaixo
        std::cout << i << std::endl;  // Imprime o valor atual de 'i' seguido de uma quebra de linha
        i--;                          // Decrementa 'i' em 1 (mesmo que i = i - 1)

        if (i == 0) {   // Quando 'i' chegar a 0
            cout << "Happy New Year!!\n";  // Imprime a mensagem de Feliz Ano Novo
            break;  // Sai imediatamente do loop 'while'
        }
    }

    return 0;   // Indica que o programa terminou com sucesso
}
