#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variavel
    int a = 20;

    //Imprimindo o endereço de uma variavel
    printf("Endereco de a = %d", &a);

    //PONTEIROS ARMAZENAM POSIÇÕES DA MEMÓRIA

    int b = 10;

    // iniciando o ponteiro.
    int *ponteiro;

    //ponteiro recebendo a posição na memória da variavel b
    ponteiro= &b;

    //Imprimindo valor da variavel
    printf("\n\nValor de b: %d", b);

    //* pode ser lido como "CONTEUDO APONTADO POR"
    *ponteiro = 40;
    //Imprimindo valor da variavel
    printf("\n\nValor de b: %d", b);
    return 0;
}
