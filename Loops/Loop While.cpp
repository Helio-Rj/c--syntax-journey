#include <iostream>   
// Inclui a biblioteca padrão para entrada e saída (cin, cout, etc.)

using namespace std; 
 // Permite usar nomes da biblioteca padrão sem precisar escrever "std::" sempre

int main(int argc, char** argv[]) {  
    // Função principal do programa, ponto de entrada
                                     
    // argc = número de argumentos passados pela linha de comando
                                     
    // argv = vetor com os argumentos (não usado aqui)

  int i = 0;         
   // Declara uma variável inteira 'i' e inicializa com 0

  while (i < 10) {    
    // Estrutura de repetição: enquanto 'i' for menor que 10, executa o bloco
    std::cout << i << endl;  
    // Imprime o valor atual de 'i' seguido de uma quebra de linha
    i++;                     
    // Incrementa 'i' em 1 (mesmo que i = i + 1)
  }

  return 0;           
  // Indica que o programa terminou com sucesso
}
