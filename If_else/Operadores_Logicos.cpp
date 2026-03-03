#include <iostream>   // Inclui a biblioteca padrão de entrada e saída (necessária para usar cout e cin).

using namespace std;  // Permite usar elementos da biblioteca padrão sem precisar escrever "std::" sempre.

int main(int argc, char** argv[]) {   // Função principal do programa. argc e argv permitem receber argumentos da linha de comando.
    int x, y;   // Declara duas variáveis inteiras chamadas x e y.

    std::cout << "Digite dois números: ";
       // Exibe uma mensagem pedindo ao usuário que digite dois números.
    std::cin >> x >> y;
       // Lê dois valores inteiros digitados pelo usuário e armazena em x e y.

    if (x > 0 && y > 0) {  
         // Verifica se ambos os números são maiores que zero (positivos).
        std::cout << "Ambos os números são positivos." << std::endl;   // Se a condição for verdadeira, imprime esta mensagem.
    } else if (x > 0 || y > 0) {
           // Caso contrário, verifica se pelo menos um dos números é positivo.
        std::cout << "Pelo menos um dos números é positivo." << std::endl;  
         // Se essa condição for verdadeira, imprime esta mensagem.
    } else {   
        // Se nenhuma das condições anteriores for satisfeita (ou seja, ambos os números são zero ou negativos).
        std::cout << "Nenhum dos números é positivo." << std::endl; 
          // Imprime esta mensagem.
    }

    return 0; 
      // Indica que o programa terminou com sucesso.
}