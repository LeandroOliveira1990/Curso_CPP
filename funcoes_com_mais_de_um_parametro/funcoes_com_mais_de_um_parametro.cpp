#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int n1, int n2){
printf("\nA soma entre %d e %d = %d", n1, n2, n1 + n2);
}

int retornaSoma(int n1, int n2){
    return n1 + n2;
}

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a = 5, b= 7;

    //Função que mostra a soma
    mostraSoma(a,b);

    //Exibe o resultado da soma retornado pela função
    printf("\nA soma de %d + %d = %d", a, b, retornaSoma(a,b));
    return 0;
}
