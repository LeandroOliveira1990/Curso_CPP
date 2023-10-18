#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int tam;

    //Lendo o tamanho
    printf("Digite o tamanho: ");
    scanf("%d", &tam);

    //Criando um ponteiro que recebe um novo vetor vazio
    int *vetor = new int[tam];

    //modificando e imprimindo valores
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = i;
        printf("%d\n",vetor[i]);
    }
    
    free(vetor);
    return 0;
}
