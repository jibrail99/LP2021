#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 20

int main(int argc, char *argv[])
{
	if(argc==2){
  if (strcmp(argv[1],"--help")==0) {printf("\nEste programa serve para realizar estudos com um vetor dado. Depois de pedir um vetor, o programa irá disponibilizar varias funcoes para uso do utilizador. O programa ainda tem uma pequena pagina de ajuda para ver um resumo do que cada funcao faz.\n"); return 0;}} //descricao do programa para a funcionalidade --help
  	//o if inicial serve para verificar o numero de argumentos que a funcao recebeu ao ser executada, se recebeu 1, ira compara-la com a string --help e se for igual, ira escrever a descricao da funcao, se for 2 ou mais (ou 0), a funcao ira ignorar o help e seguir imediatamente para a funcao principal atraves do else que comeca aqui e vai ate ao fim do programa
  	else {
    //Processo de leitura e escrita do array
    int arr[N], confirmararray, escolher=12;
    
    printf("Antes de poder aceder ao menu de funcionalidades, precisamos de saber qual é o seu vetor! \n");
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
        return main(argc,argv);
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
    while(escolher!=11){

    //Processo de construção do menu de opções
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Escolha a função que pretende executar: \n");
    printf("1 - Cálculo da multiplicação de todos os elementos no vetor\n");
    printf("2 - Devolução do vetor ordenado por ordem crescente\n");
    printf("3 - Cálculo do seno (sin) de todos os elementos no vetor\n");
    printf("4 - Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas)\n");
    printf("5 - Devolução dos valores maiores que dois e divisíveis por cinco\n");
    printf("6 - Identificação do mínimo do vetor\n");
    printf("7 - Ajuda\n");
    printf("8 - Leitura de um novo vetor, e devolucao de um vetor que mistura metade do primeiro e metade do segundo.\n");
    printf("9 - Calculo do minimo multiplo comum de cada dois numeros seguidos do vetor.\n");
    printf("10 - Calculo e devolucao da matriz 20x20 resultante do produto do vetor inicial com o mesmo vetor ordenado por ordem crescente e apresentacao da sua transposta se o utilizador o pedir.\n");
    printf("11 - Sair\n");
    printf("\n");
    scanf("%d", &escolher);
    if (escolher == 0 || escolher > 12)
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
                vetorsin(arr);
                break;
            case 4:
                matriz(arr);
                break;
            case 5:
                //função devolução dos valores maisores que 2 e divisiveis por 5
                devolvenumero (arr);
                break;
            case 6:
                minimodovetor (arr);
                
                break;
            case 7:
            //------------------------------------------------------------------------------------------------------------------
            //--------------------------------------INICIO DA FUNCAO HELP ------------------------------------------------------
            //------------------------------------------------------------------------------------------------------------------
            	{
    int choice=12;
	while (choice!=10){
	printf("\nEscolha qual a funcao em que precisa de ajuda:\n");
    printf("1 - Cálculo da multiplicação de todos os elementos no vetor\n");
    printf("2 - Devolução do vetor ordenado por ordem crescente\n");
    printf("3 - Cálculo do seno (sin) de todos os elementos no vetor\n");
    printf("4 - Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas)\n");
    printf("5 - Devolução dos valores maiores que dois e divisíveis por cinco\n");
    printf("6 - Identificação do mínimo do vetor\n");
    printf("7 - Leitura de um novo vetor, e devolucao de um vetor que mistura metade do primeiro e metade do segundo.\n");
    printf("8 - Calculo do minimo multiplo comum de cada dois numeros seguidos do vetor.\n");
    printf("9 - Calculo e devolucao da matriz 20x20 resultante do produto do vetor inicial com o mesmo vetor ordenado por ordem crescente e apresentacao da sua transposta se o utilizador o pedir.\n");
    printf("10 - Sair\n");
    printf("\n");
    scanf("%d", &choice);
	if (choice == 0 || choice > 11)
    {
        printf("Por favor digite um valor entre 1 e 10! \n");
        scanf("%d", &choice);
    }
    else
    {
        //Case que perimite ao utilizador escolher o "programa" a executar
        {
            switch (choice)
            {
            case 1:
            	printf("DESCRICAO:\n");
                printf("A funcao vai multiplicar todos os elementos do vetor e devolver o resultado.\n");
                break;
            case 2:
            	printf("DESCRICAO:\n");
                printf("Esta funcao ira ordernar o vetor do menor valor ao maior e mostrar o vetor resultante no ecra.\n");
                break;
            case 3:
            	printf("DESCRICAO:\n");
                printf("A funcao ira calcular o seno de todos os elementos do vetor um por um e no fim mostrar o vetor resultante.\n");
                break;
            case 4:
            	printf("DESCRICAO:\n");
                printf("A funcao ira criar uma matriz 20 por 20 em que a primeira linha sera o vetor dado pelo utilizador e as linhas seguintes serão variacoes do mesmo vetor.\n");
                break;
            case 5:
            	printf("DESCRICAO:\n");
                printf("A funcao vai devolver todos os valores divisiveis por 5, uma utilidade extra da funcao e mostrar os valores maiores que 2, mas o vetor inicial tem valores compreendidos entre 7 e 30.\n");
                break;
            case 6:
            	printf("DESCRICAO:\n");
                printf("Esta funcao ira verificar qual o valor mais baixo do vetor.\n");
                
                break;
            case 7:
            	printf("DESCRICAO:\n");
            printf("Esta funcao ira pedir um novo vetor ao utilizador e depois de lido, ira misturar os primeiros dez valores do vetor original e os segundos dez valores do segundo vetor pedido.\n");
            	break;
            case 8:
            	printf("DESCRICAO:\n");
            printf("A funcao calcula o minimo multiplo comum entre dois valores seguidos do vetor. No fim ira ser apresentado um vetor com todos os valores obtidos.\n");
            	break;
            case 9:
            	printf("DESCRICAO:\n");
            printf("A funcao vai multiplicar o vetor inicial com vetor ordenado em ordem crescente e mostrar os resultados numa matriz 20 por 20. Se o utilizador quiser, também poderá ver a matriz transposta da mesma.\n");
            	break;
            case 10:
                printf("\n");
                printf("Voltando ao menu inicial! \n");
                printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
            default:
                break;
                }
            }
            }
            }
}
		//------------------------------------------------------------------------------------------------------------------
            //--------------------------------------FIM DA FUNCAO HELP ------------------------------------------------------
            //------------------------------------------------------------------------------------------------------------------
            	break;
            case 8:
            	mixvetor(arr);
            	break;
            case 9:
            	minimomultiplo(arr);
            	break;
            case 10:
            	matrizproduto(arr);
            	break;
            case 11:
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
    }
}
