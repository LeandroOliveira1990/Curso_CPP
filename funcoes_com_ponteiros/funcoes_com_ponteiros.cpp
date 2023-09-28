#include <stdio.h>
#include <stdlib.h>

int retornaComMaisDez(int n1){
    return n1 + 10;
}

void aumentaDez(int *n1){
    *n1 = *n1 + 10;
}

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a =5;

    //Mostrando o valor
    printf("%d",a);

    //aumenta 10
    a = retornaComMaisDez(a);

    //Mostrando o valor
    printf("\n%d",a);

    //função que aumenta 10 diretamente
    aumentaDez(&a);

    //Mostrando o valor
    printf("\n%d",a);



    return 0;
}
