#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d", numero, numero + 1);
    
}

int retornaAntecessor(int numero){
    return numero - 1;
}



int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a;
    printf("Digite um valor: ");

    //passa um valor para 'a'
    scanf("%d", &a);

    //chama a função
    mostraSucessor(a);

    //Exibe o antecessor
    printf("\nO antecessor de %d eh %d", a, retornaAntecessor(a));

    return 0;
}
