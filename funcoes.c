/** As we said in main.c, we had to create a cleaning function (limpaInput)
 * Also if you go to the function "multiplicação" you will see some things modified!
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

/*Existe a necessidade de criar uma função para limpar o input c
caso o utilizador digite uma letra no menu*/
void limpaInput()
{
    while (getchar() != '\n')
        ;
}

//Leitura e escrita do array
void ler(int v[N])
{
    printf("Antes de poder aceder ao menu de funcionalidades, precisamos de saber qual é o seu vetor! \n");
    printf("Indique agora os valores entre 7 e 30 que o seu vetor vai ter nas suas respetivas posições (20 posicões): \n");
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%dº valor - ", i + 1);

        while (scanf("%d", &v[i]) != 1)
        // != 1 faz armazenar o valores no array/vetor
        {
            limpaInput();
            printf("ERRO! Digite um valor entre 7 e 30\n");
        }

        while (v[i] < 7 || v[i] > 30)
        {

            limpaInput();
            printf("ERRO! Digite um valor entre 7 e 30\n");
            while (scanf("%d", &v[i]) != 1)
            // != 1 faz armazenar o valores no array/vetor
            {
                limpaInput();
            }
        }
    }
    printf("\n");
}

void escreve(int v[N])
{
    printf("O vetor é: ");
    for (int i = 0; i < N; i++)
    {

        printf("%d ", v[i]);
    }

    printf("\n");
}

//Funções com o obejtivo de executar os programas

void multiplicacao(int v[N]) //multiplicação de todos os valores no vetor
{
    long total = 1;
    for (int i = 0; i < N; i++)
    {

        total *= v[i];
    }
    printf("A multiplicação dos valores do vetor é %ld\n", total);
}

void ordemcrescente(int v[N]) //ordenação do vetor por ordem crescente
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("O vetor na ordem crescente fica: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
}
