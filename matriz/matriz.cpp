#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Criando uma matriz
    int matriz[2][2];

    //Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    

    

    //imprimindo valores na tela
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //cout << " \ni = "<<i<<" j= "<<j;
            cout<< matriz[i][j] << " ";
        }
        cout<<"\n";
        
    }


    //Lendo valores para a matriz
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //scanf("%d", &matriz[i][j]);
            cin >> matriz[i][j];
            
        }
        
        
    }

    //imprimindo valores na tela
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //cout << " \ni = "<<i<<" j= "<<j;
            cout<< matriz[i][j] << " ";
        }
        cout<<"\n";
        
    }
    



    return 0;
}
