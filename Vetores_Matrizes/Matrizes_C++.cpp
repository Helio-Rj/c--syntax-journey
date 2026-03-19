#include <iostream>  // Inclui a biblioteca iostream para entrada e saída de dados (cout, cin)
using namespace std;  // Permite usar elementos do namespace std sem prefixo (ex: cout ao invés de std::cout)

int main(int argc, char** argv){  // Função principal do programa. argc e argv são parâmetros para argumentos de linha de comando
    // Declaração de um array (vetor) de strings com 4 elementos
    // Em C++, arrays são estruturas de dados que armazenam múltiplos valores do mesmo tipo
    // Sintaxe: tipo nome[tamanho] = {valor1, valor2, ...};
    string carros[4] = {"BMW", "Mercedes", "Audi", "Ferrari"};

    // Loop for para percorrer o array
    // i começa em 0, vai até i < 4 (tamanho do array), incrementa i a cada iteração
    for(int i = 0; i < 4; i++){
        // Imprime o elemento na posição i do array carros, seguido de uma nova linha
        std::cout << carros[i] << std::endl;  // std:: é usado aqui mesmo com using namespace std, para clareza
    }

    // Espaços em branco para organização (não afetam o código)

    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}