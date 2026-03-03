#include <iostream> // Inclui a biblioteca padrão para entrada e saída de dados

using namespace std; // Permite usar nomes da biblioteca padrão sem o prefixo 'std::'

int main(int argc, char** argv[]){ // Função principal do programa, ponto de entrada

  bool Verdadeiro = true; // Declara uma variável booleana e atribui o valor verdadeiro

  bool Falso = false; // Declara uma variável booleana e atribui o valor falso
  
  std::cout << boolalpha; // Configura o cout para imprimir valores booleanos como 'true' ou 'false' em vez de 1 ou 0

  std::cout << Verdadeiro << "\n" << std::endl; // Imprime o valor da variável 'Verdadeiro' (true = 1) e pula linha

  std::cout << Falso << "\n" << std::endl; // Imprime o valor da variável 'Falso' (false = 0) e pula linha

  return 0; // Retorna 0 indicando que o programa terminou com sucesso

} // Fim da função main