#include <stdio.h>
#include <stdlib.h>

void imprimiVetor(int *vetor, int tamanho){
    //Percorrendo vetor
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

void modificaVetor(int *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
       vetor[i] = vetor[i] + 1;
    }
}
    


int main(int argc, char const *argv[])
{
    //Definindo vetor
    int v[5] ={1,2,3,4,5};

    //mostrando vetor
    imprimiVetor(v, 5);

    //Modifica Vetor
    modificaVetor(v,5);

    //mostrando vetor
    imprimiVetor(v, 5);
    return 0;
}
