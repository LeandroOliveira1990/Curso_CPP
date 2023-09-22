#include <stdio.h>
#include <stdlib.h>
//Definindo que a função existe e está no final após o main
int retornaDez();
float retornaquebrado();

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a;

    //Passando o retorno de uma função para uma variavel
    a = retornaDez();

    //Imprimindo o valor de a
    printf("O valor de a = %d", a);

    //Definindo um float
    float b;
    b = retornaquebrado();
    printf("\n\nValor de b e =  %.2f", b);


    return 0;
}

//Função que retorna 10
int retornaDez(){
    printf("\nretorno de 10\n");
    return 10;
}

//retorna um número quebrado
float retornaquebrado(){
    return 5.5;
}