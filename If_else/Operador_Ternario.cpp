// Inclui a biblioteca de entrada/saída padrão do C++
#include <iostream>
// Inclui a biblioteca para trabalhar com strings
#include <string>
// Usa o namespace padrão para não precisar escrever std:: sempre
using namespace std;

// Função principal - ponto de entrada do programa
int main(int argc, char** argv[]) {
  // Declara uma variável inteira chamada "time" para armazenar a hora
  int time;
  // Exibe uma mensagem pedindo para o usuário digitar a hora (0-23)
  std::cout << "Digite a hora atual (0-23): ";
  // Lê a entrada do usuário através do teclado e armazena em "time"
  std::cin >> time;
  // Usa o operador ternário (?) para verificar a condição:
  // Se time < 18 é verdadeiro, exibe "Bom dia!", caso contrário exibe "Boa noite..."
  std::cout << ((time < 18) ? "Bom dia!" : "Boa noite...");
  // Retorna 0 indicando que o programa finalizou sem erros
  return 0;
}