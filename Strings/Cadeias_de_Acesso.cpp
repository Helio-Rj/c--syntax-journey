
// Inclui a biblioteca para entrada e saída padrão
#include <iostream>
// Inclui a biblioteca para manipulação de strings
#include <string>



// Permite usar os elementos do namespace std sem precisar do prefixo 'std::'
using namespace std;


int main(int argc, char** argv[]) {
  // Declara uma variável do tipo string
  string myString;

  // Solicita ao usuário que digite uma string
  std::cout << "Digite uma string: " << std::endl;

  // Lê a string digitada pelo usuário (até o primeiro espaço)
  std::cin >> myString;

  // Exibe o terceiro caractere da string digitada (índice 2)
  std::cout << "Você digitou: " << myString[2] << std::endl;

  // Retorna 0 para indicar que o programa terminou com sucesso
  return 0;
}