#include <stdio.h>
#include <stdlib.h>

void limparTela(){
    system("cls");
}

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a;

    //imprimindo na tela
    printf("Digite um valor para a: ");

    //lendo o valor
    scanf("%d", &a);

    //Limpa a tela
    //system("cls");

    //Chama a função limpa tela
    limparTela();

    printf("O valor digitado foi %d", a);
    return 0;
}
