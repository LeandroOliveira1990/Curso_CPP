#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int matriz[2][2], aux1, aux2;

    //Lendo dados com o usuario
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Digite para Matriz " << i <<" "<< j << " = ";
            cin >> matriz[i][j];
             
        }

    }


    //Mostra na tela os valores atuais das matrizes
    cout <<"\nVALORES ATUAIS DAS MATRIZES\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Matriz " << i <<" "<< j << " = " << matriz[i][j] << "\n";
         
        }
        
               
    }

    //Invertendo os valores das matrizes
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][1] = aux1;
    matriz[1][0] = aux2;

    


    

    //Mostra na tela os valores invertido das matrizes
    cout <<"\nVALORES INVERTIDOS DAS MATRIZES\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Matriz " << i <<" "<< j << " = " << matriz[i][j] << "\n";
         
        }
        
               
    }

    
    
    return 0;
}
