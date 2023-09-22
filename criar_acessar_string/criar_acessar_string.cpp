#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

//usando este termo não é necessário usar std:: antes de chamar um metodo
using namespace std;

int main(int argc, char const *argv[])
{
    //Definindo uma string
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra: ";

    //Lendo uma String
    cin >> palavra;

    //Imprimindo uma variavel
    cout << "\nA palavra e: " << palavra;
    return 0;
}
