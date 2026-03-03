#include <iostream>  // Biblioteca para entrada e saída padrão (cout, endl)
#include <string>    // Biblioteca para manipulação de strings

using namespace std; // Evita a necessidade de usar std:: antes de cout, string, etc.

int main(int argc, char** argv[]){
    // Declara uma string contendo todas as letras maiúsculas do alfabeto
    string Alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Declara uma string contendo todos os dígitos numéricos
    string Numeros = "0123456789";
    
    // Exibe o tamanho da string Alfabeto usando o método size()
    std::cout << "Alfabeto: " << Alfabeto.size() << " letras." << std::endl;
    // Exibe o tamanho da string Numeros usando o método length()
    std::cout << "Números: " << Numeros.length() << " dígitos." << std::endl;

    // Ambos os métodos size() e length() retornam o número de caracteres da string

    return 0; // Indica que o programa terminou com sucesso
}
