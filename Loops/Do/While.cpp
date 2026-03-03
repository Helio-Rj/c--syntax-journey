#include <iostream>   
  // Inclui a biblioteca padrão de entrada e saída

using namespace std;  
  // Permite usar elementos da biblioteca padrão sem precisar escrever "std::" sempre

int main() {  
  // Função principal do programa, ponto de entrada
  int i = 0;                        
  // Declara uma variável inteira 'i' e inicializa com 0
  
  // Estrutura de repetição "do...while"
  // Executa o bloco pelo menos uma vez e continua enquanto a condição for verdadeira
  do {
    std::cout << i << std::endl;    
  // Imprime o valor atual de 'i' seguido de uma quebra de linha
    i++;                            
  // Incrementa 'i' em 1
  }
  while (i < 5);                    
  // Condição: repete enquanto 'i' for menor que 5
  
  return 0;                         
  // Indica que o programa terminou com sucesso
}