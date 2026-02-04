#include <iostream>
#include <string>

using namespace std;

// Como as strings devem ser escritas entre aspas, o C++ interpretará essa string incorretamente e gerará um erro
//A solução para evitar esse problema é usar o caractere de escape barra invertida
//O '\' caractere de escape barra invertida (\) transforma caracteres especiais em caracteres de texto:

int main(int argc, char** argv[]){
    // Exemplo de uso de caracteres especiais em strings
    // \" permite usar aspas duplas dentro da string
    string exemplo = "Ele disse: \"Olá, Mundo!\""; // Aspas duplas dentro da string
    // \\ permite usar a barra invertida dentro da string
    string caminho = "C:\\Users\\NomeDoUsuario\\Documentos"; // Barra invertida dentro da string
    // \n insere uma nova linha na string
    string novaLinha = "Primeira linha\nSegunda linha"; // Nova linha dentro da string
    // 	 insere uma tabulação (tab) na string
    string tabulado = "Coluna1\tColuna2"; // Tabulação dentro da string

    // Exibindo as strings com caracteres especiais
    cout << exemplo << endl;
    cout << caminho << endl;
    cout << novaLinha << endl;
    cout << tabulado << endl;

    return 0;
}



    
