#include <stdio.h>
#define N 20

void ler (int v[N])
{
    for (int i = 0; i < N ; i++)
   {
    
  
    printf("Indique o valor entre 7 e 30: \n");

    while (scanf ("%d", &v[i]) != 1) 
    // != -1 faz armazenar o valores no array/vetor
    {
       
        printf("ERRO! Digite um valor entre 7 e 30\n");
    }
    

    while (v[i] < 7 || v[i]> 30) 
    {
        printf("ERRO! Digite um valor entre 7 e 30\n");
        while (scanf ("%d", &v[i])!= 1) // != -1 faz armazenar o valores no array/vetor
        {}

    }
   }
}


void escreve(int v[N])
{
    for(int i = 0; i < N; i++)
    {
            printf("%d ",v[i]);
        
    }
    printf("\n");
}