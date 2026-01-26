
// Inclui a biblioteca padrão de entrada e saída
#include <iostream>


// Permite usar elementos do namespace std sem precisar do prefixo 'std::'
using namespace std;


// Função principal do programa
int main(int argc, char** arg[]){
    // Declara e inicializa a variável sum1 com a soma de 100 + 50
    int sum1 = 100 + 50;
    // Soma o valor de sum1 com 250 e armazena em sum2
    int sum2 = sum1 + 250;
    // Soma sum2 com ele mesmo e armazena em sum3
    int sum3 = sum2 + sum2;

    // Exibe o valor de sum1 no console
    std::cout << "Valor: " << sum1 << std::endl;
    // Exibe o valor de sum2 no console
    std::cout << "Valor: " << sum2 << std::endl;
    // Exibe o valor de sum3 no console
    std::cout << "Valor: " << sum3 << std::endl;

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}
