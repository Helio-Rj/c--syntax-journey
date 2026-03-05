// Incluir a biblioteca de entrada e saída padrão do C++
#include <iostream>

// Usar o namespace padrão para não precisar escrever std:: a cada vez
using namespace std;

// Função principal do programa
int main(int argc, char** argv[]) {
  
  // Inicia um loop 'for' que itera de 0 até 9 (i < 10)
  for (int i = 0; i < 10; i++) {
    
    // Verifica se o valor de i é igual a 4
    if (i == 4) {
      // O comando 'break' interrompe completamente o loop
      // Quando i chegar a 4, o loop será finalizado imediatamente
      break;
    }
    
    // Imprime o valor de i seguido de uma quebra de linha
    // Este comando só será executado enquanto i < 4
    cout << i << "\n";
  } 
  
  // Retorna 0 indicando que o programa foi executado com sucesso
  return 0;
}
