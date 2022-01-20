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
	//tirei a pergunta inicial para a funcao main para poder utilizar esta funcao na funcao de mistura de vetores (Gabriel)
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

void devolvenumero(int v[N]) //funcao que devolve numero maior que 2 e que seja divisivel por 5
{
    printf("Os números que são maiores que 2 e divisiveis por 5 são:");
    int i;
    for (i = 0; i < N; i++)
    {
        if (v[i] > 2)
        {
            if (v[i] % 5 == 0)
            {

                printf("%d\t", v[i]);
            }
        }
    }
}

void minimodovetor(int v[N]) //funçao que revela o valor minimo do vetor
{
    
    int i = 0;
    int minimo = v[0];

    for (i = 1; i < N; i++)
    {
        if (v[i] < minimo)
            minimo = v[i];
    }
    printf("O valor minimo do vetor é: %d\n", minimo);
    
}

void vetorsin(int v[N]){
	for (int i=0; i<20; i++){
		printf("Posicao %d, valor %d: %f\n",(i+1),v[i],sin((v[i])));};
}

void matriz(int v[N]){
	//1 linha
	for(int i=0;i<20;i++) printf("%i  ",v[i]);
	printf("\n");
	//proximas linhas
	for(int l=1;l<20;l++){
		//colunas
		for(int c=0; c<20;c++){	
				printf("%i  ",v[rand() % 20]);
		}
		printf("\n");
	}
	}
	
void mixvetor(int v[N]){
	int arr2[N], confirmararray2;
	ler (arr2);
	//Processo de validação do vetor
    printf("\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Tem a certeza que quer este vetor? \n1 - Sim\n2 - Não\n");
    printf("\n");
    scanf("%d", &confirmararray2);
    printf("\n");
    while (confirmararray2 == 0 || confirmararray2 > 2)
    {
        printf("Valor desconhecido, insira 1 para continuar ou 2 para escrever outro vetor!\n");
    printf("\n");
    scanf("%d", &confirmararray2);
    printf("\n");
    }
    if (confirmararray2 == 1)
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
            ler(arr2);
            printf("\n");
            escreve(arr2);
            printf("\n");
            printf("Tem a certeza que quer este vetor? \n1 - Sim\n2 - Não\n");
            printf("\n");
            scanf("%d", &confirmararray2);
            printf("\n");

        } while (confirmararray2 == 2);
    }
	escreve (arr2);
	int vw[20];
	for (int p=0;p<10;p++){
		vw[p]=v[p]; //primeiro vetor na primeira metade
		}
	for (int s=10;s<20;s++){
		vw[s]=arr2[s];
		}
		//segunda vetor na segunda metade
	printf("\nMistura dos vetores\n");
	for (int c=0;c<20;c++){
		printf("posicao %i = %i\n",(c+1),vw[c]); //escreve o vetor
		}
		}
		
void minimomultiplo(int v[N]){
	int nv[20];
	for(int c=0; c<19; c++){
		int v1=v[c];
		int v2=v[c+1];
		int mmc;
		if (v1>v2) mmc=v1; else mmc=v2; //verificacao qual e o maior valor para nao dar um valor menor que um na divisao
		while(1){ //while(1) vai ser sempre verdade, ou seja, vai fazer o loop ate a condicao seguinte do if ser verdade e seguir para o break
			if (mmc%v1==0 && mmc%v2==0) {nv[c]=mmc; break;} 
			else mmc++; //adiciona um valor a mmc ate encontrar um valor que seja divisivel tanto por v1 tanto por v2
		}
		nv[c]=mmc;
	}
	int a=0;
	for(int nc=0; nc<18; nc++){
		printf("O minimo multiplo comum entre %d e %d vai ser %d.\n", v[a], v[a+1], nv[nc]);
		a++;
		};
	}
	
void matrizproduto(int v[]){
	int m[20][20];
	int cres[20];
	for (int cond=0;cond<20;cond++){cres[cond]=v[cond];} //cria o um novo vetor com os mesmos valores do vetor original, mais tarde vai ser usado para ficar na ordem crescente
	for (int i = 0; i < 20; i++){
		for (int j = i + 1; j < 20; j++){
			if (cres[i] > cres[j]) {
                		int aux = cres[i];
                		cres[i] = cres[j];
                		cres[j] = aux;
               	} //ambos os for sao da mesma funcao da funcao crescente do programa original, coloca o vetor cres em ordem crescente
		}
    	}
	for(int l=0;l<20;l++){
		for (int c=0;c<20;c++){
			m[l][c]=v[c]*cres[l];
			printf("%d ",m[l][c]);
			}
		printf("\n");
	} //cria a matriz criada atravez do produto do vetor original com o mesmo vetor em ordem crescente
	printf("Quer ver a matriz transposta?\n 1 - Sim\n 2 - Voltar ao Menu\n"); //check para verificar se quer a transposta
	int check;
	scanf("%d",&check);
	//verificao da opcao
	while (check != 1 && check !=2){
		printf("Opcao desconhecida, pressione 1 para ver a transposta ou 2 para voltar ao menu\n");
		scanf("%d",&check);
		}
	if (check==1){
	int nm[20][20];
	for(int l=0;l<20;l++){
		for (int c=0;c<20;c++){
			nm[c][l]=m[l][c]; //copia a matriz original para uma nova matriz com os valores das linhas e colunas trocadas
			}
			}
	int li, co;
	for(int li=0;li<20;li++){
		for (int co=0;co<20;co++){
			printf("%d ",nm[li][co]); //mostra a matriz transposta no ecra
			}
			printf("\n");
			}
			}
		else {printf("voltando ao menu");};
}
