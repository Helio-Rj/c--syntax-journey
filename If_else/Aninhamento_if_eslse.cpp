#include <iostream> // Inclui a biblioteca padrão para entrada e saída

using namespace std; // Permite usar nomes da biblioteca padrão sem o prefixo 'std::'

int main(int argc, char** argv) { // Função principal do programa
   int a, b, c; // Declara três variáveis inteiras
   std::cout << "Digite o valor de a: "<< std::endl; // Solicita ao usuário o valor de 'a'
   std::cin >> a; // Lê o valor de 'a' digitado pelo usuário
   std::cout << "Digite o valor de b: "<< std::endl; // Solicita ao usuário o valor de 'b'
   std::cin >> b; // Lê o valor de 'b' digitado pelo usuário
   std::cout << "Digite o valor de c: "<< std::endl; // Solicita ao usuário o valor de 'c'
   std::cin >> c; // Lê o valor de 'c' digitado pelo usuário

   if (a > b && a > c) { // Verifica se 'a' é o maior valor
      std::cout << "O maior valor é: " << a << std::endl; // Exibe 'a' como o maior valor
   } else if (b > a && b > c) { // Verifica se 'b' é o maior valor
      std::cout << "O maior valor é: " << b << std::endl; // Exibe 'b' como o maior valor
   } else { // Caso nenhum dos anteriores, 'c' é o maior valor
      std::cout << "O maior valor é: " << c << std::endl; // Exibe 'c' como o maior valor
   }

   return 0; // Retorna 0 indicando que o programa terminou com sucesso
} // Fim da função principal