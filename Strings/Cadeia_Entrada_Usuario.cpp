// Inclui a biblioteca para entrada e saída padrão
#include <iostream>
// Inclui a biblioteca para manipulação de strings
#include <string>



// Permite usar os elementos do namespace std sem precisar do prefixo 'std::'
using namespace std;

int main(int argc, char** argv[]) {
  // Declara uma variável do tipo string para armazenar o nome completo do usuário
  string fullName;

  // Solicita ao usuário que digite seu nome completo
  cout << "Type your full name: ";

  // Lê a linha inteira digitada pelo usuário e armazena em fullName
  getline (cin, fullName);

  //É por isso que, ao trabalhar com strings, frequentemente usamos a getline() função para ler uma linha de texto. Ela recebe cincomo primeiro parâmetro e a variável string como segundo:

  // Exibe o nome digitado pelo usuário
  cout << "Your name is: " << fullName;

  // Retorna 0 indicando que o programa terminou com sucesso
  return 0;
}
