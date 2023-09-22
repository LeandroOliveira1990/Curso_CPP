#include <stdio.h>
#include <stdlib.h>
char retornaLetra(){
    return 'x';
}
int main(int argc, char const *argv[])
{
    //Definindo variaveis
    char letra;

    //Letra recebendo valor de uma função
    letra = retornaLetra();

    //Imprimindo na tela
    printf("A letra e = %c", letra);
    return 0;
}
