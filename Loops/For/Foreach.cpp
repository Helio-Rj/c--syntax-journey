// Inclui a biblioteca de entrada/saída padrão do C++
#include <iostream>

// Utiliza o namespace std (não precisa digitar std:: antes dos comandos)
using namespace std;

// Função principal - ponto de entrada do programa
// argc: número de argumentos recebidos
// argv[]: array com os argumentos passados ao programa
int main(int argc, char** argv[]) {
 
  // Declara um array de números inteiros com 5 elementos
  // Inicializa o array com os valores: 10, 20, 30, 40, 50
  int myNumbers[5] = {10, 20, 30, 40, 50};
  
  // Loop foreach (range-based for loop)
  // Para cada elemento do array myNumbers, atribui o valor à variável 'num'
  // Esta sintaxe facilita a iteração sem usar índices
  for (int num : myNumbers) {
    // Imprime o valor da variável 'num' seguido de uma quebra de linha
    cout << num << "\n";
  }
  
  // Retorna 0 indicando que o programa executou com sucesso
  return 0;
}