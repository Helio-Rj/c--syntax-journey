
// Inclui a biblioteca padrão de entrada e saída do C++
#include <iostream>


// Permite o uso dos elementos do namespace std sem precisar prefixar com 'std::'
using namespace std;


// Função principal do programa
// argc: quantidade de argumentos passados na linha de comando
// argv: vetor de strings com os argumentos
int main(int argc, char** argv[]){
   // Declaração e inicialização de três variáveis inteiras na mesma linha
   int myInt = 42, myInt2 = 43, myInt3 = 44;

   // Exibe o valor de cada variável na tela
   std::cout << "Valor: " << myInt << std::endl;   // Imprime 42
   std::cout << "Valor: " << myInt2 << std::endl;  // Imprime 43
   std::cout << "Valor: " << myInt3 << std::endl;  // Imprime 44

   // Declaração de múltiplas variáveis sem inicialização
   int myint4, myint5, myint6;
   // Atribuição do valor 50 para todas as variáveis em uma única linha
   myint4 = myint5 = myint6 = 50;

   // Exibe o valor das variáveis recém-atribuídas
   std::cout << "Valor: " << myint4 << std::endl;  // Imprime 50
   std::cout << "Valor: " << myint5 << std::endl;  // Imprime 50
   std::cout << "Valor: " << myint6 << std::endl;  // Imprime 50

   // Retorna 0 para indicar que o programa terminou com sucesso
   return 0;
}