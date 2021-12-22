/** 
 * version 0.3
 * This versions contains some improvements on the main menu and at some functions 
 * Added a clean function to avoid what i call "bitcoin mining" 
 * (infinite loop of text)
 * That functions cleans the stdin when the user press a letter instead a number 
 * Also the function "multiplicacao" has been fixed. It was showing 0  all the time (example 8^20 = 0, which is false)
 */

#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 20

int main()
{

    //Processo de leitura e escrita do array
    int arr[N], confirmararray, escolher;
    int enter;
    ler(arr);
    escreve(arr);
    //Processo de validação do vetor
    printf("\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Tem a certeza que quer este vetor? \n1 - Sim\n2 - Não\n");
    printf("\n");
    scanf("%d", &confirmararray);
    printf("\n");
    if (confirmararray == 0 || confirmararray > 2)
    {
        printf("Erro, o programa vai voltar ao inicio!\n");
        return main();
    }
    else if (confirmararray == 1)
    {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Vetor validado com sucesso! \n");
        printf("\n");
    }
    else
    {
        do
        {
            printf("\n");
            ler(arr);
            printf("\n");
            escreve(arr);
            printf("\n");
            printf("Tem a certeza que quer este vetor? \n1 - Sim\n2 - Não\n");
            printf("\n");
            scanf("%d", &confirmararray);
            printf("\n");

        } while (confirmararray == 2);
    }

    //Processo de construção do menu de opções
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Escolha a função que pretende executar: \n");
    printf("1 - Cálculo da multiplicação de todos os elementos no vetor\n");
    printf("2 - Devolução do vetor ordenado por ordem crescente\n");
    printf("3 - Cálculo do seno (sin) de todos os elementos no vetor\n");
    printf("4 - Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas)\n");
    printf("5 - Devolução dos valores maiores que dois e divisíveis por cinco\n");
    printf("6 - Identificação do mínimo do vetor\n");
    printf("7 - Sair\n");
    printf("\n");
    scanf("%d", &escolher);
    if (escolher == 0 || escolher > 7)
    {
        printf("Por favor digite um valor entre 1 e 6! \n");
        scanf("%d", &escolher);
    }
    else
    {
        //Case que perimite ao utilizador escolher o "programa" a executar
        {
            switch (escolher)
            {
            case 1:
                multiplicacao(arr);
                break;
            case 2:
                ordemcrescente(arr);
                break;
            case 3:
                //funcão calculo seno
                break;
            case 4:
                //função construção matriz
                break;
            case 5:
                //função devolução dos valores maisores que 2 e divisiveis por 5
                break;
            case 6:
                //função minimo
                break;
            case 7:
                printf("\n");
                printf("Obrigado por usar o nosso programa! \n");
                printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
                return 0;
            default:
                break;
            }
        }
    }
}
