#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleana(){
    return true;
}

int main(int argc, char const *argv[])
{

    //Definindo variaveis
    bool booleana;

    booleana = retornaBooleana();

    //imprimindo na tela
    printf("Booleana e = %d ", booleana);

    // Se for verdadeiro executa o primeiro bloco
    if (booleana)
    {
        printf("Verdadeiro");
    } else{ //Se não executa o segundo bloco

        printf("Falso");


    }
    
    
    return 0;
}
