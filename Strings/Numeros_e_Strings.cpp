#include <iostream> // Biblioteca para entrada e saída padrão (cout, cin)
#include <string>   // Biblioteca para manipulação de strings

// Em C++, o operador + é usado tanto para adição quanto para concatenação.
// Os números são somados. As sequências de caracteres (strings) são concatenadas.

using namespace std; // Evita a necessidade de usar std:: antes de cout, cin, string, etc.

int main(int argc, char** argv[]){
    // Declara duas variáveis do tipo string para armazenar os números digitados pelo usuário
    string numeroString_1, numeroString_2;

    // Solicita ao usuário que digite o primeiro número (como texto)
    cout << "Digite um número: " << endl;
    cin >> numeroString_1; // Lê o valor digitado e armazena em numeroString_1

    // Solicita ao usuário que digite o segundo número (como texto)
    cout << "Digite outro número: " << endl;
    cin >> numeroString_2; // Lê o valor digitado e armazena em numeroString_2

    // Concatena as duas strings usando o operador +
    string resultadoConcatenacao = numeroString_1 + numeroString_2;

    // Exibe o resultado da concatenação na tela
    std::cout << "Resultado da concatenação: " << resultadoConcatenacao << std::endl;

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}
