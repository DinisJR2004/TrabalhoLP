#include <stdio.h>
#include <math.h>
// Para colocar o comando system("cls");
//
#include <stdlib.h>
#include <unistd.h>




/*Este programa consiste em pedir 20 numeros ao utilizador.
 *Os valores pedidos devem estar compreendidos entre -5 e 11.


*/


// Função Menu
//

void menu ()
{
    
    printf("*----------------------------------------------------------------------------------------------------*\n");
    printf("| 1  - Devolução dos valores em posições múltiplas de três do vetor;                           |\n");
    printf("| 2  - Valor do seno de todos os elementos do vetor;                                                 |\n");
    printf("| 3  - Divisão de todos os elementos do vetor por 2;                                                |\n");
    printf("| 4  - Valor mais próximo de 15;                                                                    |\n");
    printf("| 5  - Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor                |\n");
    printf("|      lido (primeira linha) e por permutações dos seus valores (outras linhas);                   |\n");
    printf("| 6  - Devolução do vetor ordenado por ordem decrescente;                                          |\n");  
    printf("| 7  - Ajuda;                                                                                        |\n");
    printf("| 8  - Produto do vetor atual com outro;                                                             |\n");
    printf("| 9  - Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor;                  |\n");
    printf("| 10  - Leitura  de  um novo vetor  1x20,  cálculo  e  devolução  da  matriz 20x20                |\n");
    printf("|      resultante do produto do vetor inicial com o novo vetor gerado;                               |\n");
    printf("| 11 - Matriz transposta referida no ponto anterior;                                                 |\n");
    printf("| 12 - Sair do programa;                                                                             |\n");
    printf("*----------------------------------------------------------------------------------------------------*\n");
    
}

// Funçao help
//

void help ()
{
    
    printf("*----------------------------------------Menu Help----------------------------------------*\n");
    printf("Este menu serve para esclarecer algumas duvidas as utilizador.\n");
    printf("O programa vai pedir 20 numeros inteiros, para depois serem utilizados em algumas operaçoes.\n");
    printf("Para que tudo corra bem, tem que introduzir 20 numeros entre -5 e 11.\n");
    printf("Apos isso vai aparecer um menu com inumeras funcionalidades.\n");
    printf("Se quiser usar uma dessas funcionalidades basta introduzir o numero da funcionalidade, que pretende utilizar.\n");
    printf("Apos introduzir o numero da funcionalidade, o programa vai executar a funçao com os numeros inteiros dados pelo utilizador.\n");
    printf("De seguida, o programa vai mostrar os valores finais da operacao, retornando para o menu principal de novo.\n");  
    printf("Se pretender utilizar outra funcionalidade apenas tem de introduzir o numero da funcionalidade que prentende usar.\n");
    printf("Para utilizar a funcionalidade 11 terá de realizar primeiro a funcionalidade 10.");
    printf("Se pretende sair basta introduzir o falar que agrega a frase Sair do programa, neste caso e o numero 12.\n");
    printf("Espero que tenha ajudado.\n");
    printf("____________________________________________________________________________________________________________\n");
    printf("____________________________________________________________________________________________________________\n");
    printf("____________________________________________________________________________________________________________\n");
    printf("____________________________________________________________________________________________________________\n");
    printf("____________________________________________________________________________________________________________\n");
    
}

// Função de escrever o array
//

void escreverArray (int A[], int N)
{
  int k;
  
  for (k = 0; k < N; k++){
  	printf("%d ", A[k]);
  }
  printf("\n");
}

// Função para verificar os valores introduzidos
//

void verificacao (int A[], int N)
{
    
    int n = 0;
    
    while (n<N)
    {

        printf("- Digite um numero inteiro que se encontre entre -5 e 11.\n");
        scanf("%d", &A[n]);


        if ((A[n]< -5) || (A[n]>11))
        {
            
            printf("- Numero invalido, digite um numero inteiro entre -5 e 11.\n");
            
        }
        else  
        {
            //Se o numero inserido estiver dentro do intervalo, o programa passa para o proximo numero.
            n++;
        }
        
    }
    
}

// Função para colocar um espaço
//

void espaco ()
{

    printf("\n");

}

// Função 1
//

int mult3(int array[], int n)
{
    int i;
    int iniciar = 1;
    for (i = 0; i < n; i++)
    {
            if (array[i] % 3 == 0)
            {   
                iniciar = 0;
                printf("Array[%d] = %d. \n", i, array[i]);
            }
    }
    if(iniciar == 1)
    {
        printf("Não existem multiplos de 3 no array.\n");
    }
}

// Função 2
//

float senodoarray(int A[], int N)
{
   
    for (int i = 0; i < N; i++) 
    {
        printf("\n");
        printf("- O valor do seno do valor %d, e %f.\n", A[i], sin(A[i])); 
    }

}


// Função 3
//

void ordenararray(int A[], int N) 
{
    int i;
    int j;
    int temp;
    int Array[20];
    for (i = 0; i < N; i++)
    {
        Array[i] = A[i];
    }

    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (Array[i] < Array[j])
            {
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("Array[%d] = %d. \n", i, Array[i]);
    }
}

// Função 4
//

void matrizT(int y[][20], int N, int inicar11)
            {
                if (inicar11 == 1)
                {
                int i , j, z[20][20];

                //Transposição da matriz anterior
                //Troca de linhas com colunas

                for( i=0 ; i < N; i++){
                    for( j=0; j < N; j++){
                         z[i][j] = y[j][i]; 
                    }
                }

                //Apresentação da matriz transposta

                for(j = 0; j < N; j++)
                {
                    for(i = 0; i < N; i++){
                        printf("%3d ", z[j][i]);
                    }   
                    printf("\n");
                }
                }

                else
                {
                    printf("A matriz nao foi inicializada. Realize primeiro a funcionalidade 10.\n");
                }
            }

// Função 5
//

void multVetores(int x[], int a)
{
    int A[20], B[20], i;
    
//Introdução de um novo vetor
    printf("Introduza os valores do novo veotr: ");

    for(i=0; i < 20; i++){
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

//Multiplicação dos elementos do vetor inicial 
//pelo introduzido anteriormente

    for(i=0; i < 20; i++)
    {
        B[i]= A[i] * x[i];
    }
//Apresentação da multiplicação de vetores
    for(i=0; i < 20; i++){
        printf("%3d ", B[i]);
    }
    printf("\n");
}


// Função 6
//

int pertode15(int a[], int N)
{
    int k;
    int proximo = 0;  
    int alphadif = abs(a[0] - 15);  
    for (k = 1; k < N; k++)
    {
       
        int difactual = abs(a[k] - 15);
        if (difactual < alphadif)
        {
            proximo = k;
            alphadif = difactual;
        }
    }

    printf("O numero mais proximo de 15 e o %d.\n", a[proximo]);
}

// Função 7
//

void divisaoArray(int A[], int tamanho) 
{
  int i, B[20];
    for (i = 0; i < tamanho; i++) 
        {
            B[i] = A[i] / 2;
        }

    for (i = 0; i < tamanho; i++) 
        {
            printf("Array[%d] = %d.\n", i, B[i]);
        }
}


// Função 8
//

void mdc(int array[], int n)
{
    int i;
    int j;
    int k;
    for (i=0; i < n - 1; i++)
    {
        k = array[i] * array[i+1];

        if (k < 0)
        {
            k = k * -1;
        }

        printf("O minimo multiplo comum entre Array[%d] (%d) e Array[%d] (%d) = %d. \n", i, array[i], i+1, array[i+1], k);
    
    }
}


// Função 9
//

int novamatriz(int A[], int n, int B[][20], int iniciar11)
{
    int i;
    int j;
    int array2[20];
    int array3[20][20];

    for (i = 0; i < 20; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            array3[i][j] = A[i] * array2[j];
        }
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            printf("%4d ", array3[i][j]);
        }
        printf("\n");
    }
        for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            B[i][j]  = array3[i][j];
        }
    }
    iniciar11 = 1;
    return iniciar11;
}


// Função 10
//

int matriz(int array[], int n)
{
    int i;
    int j;
    int matriz[20][20];
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            matriz[i][j] = array[j];
        }
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}


// Função 11
//



// Função 12
//



// Main
//

int main(int argc, char *argv[])
{
    int c;

    while((c = getopt(argc, argv, "--help")) != -1)
    {
        switch(c)
        {
            case 'h':
                // Exibe a ajuda aqui
                printf("\n \n \n Menu de ajuda: \n");
                printf("Este menu pode ser utilizado para esclarecer algumas duvidas do utilizador.\n");
                printf("\n");
                printf("O objetivo deste programa e pedir ao utilizador 20\n");
                printf("numeros inteiros que seram guardados num vetor. Posteriormente seram utilizados para \n");
                printf("calcular algumas estatisticas ou fazer operacoes sobre esses valores.\n");
                printf("\n");
                printf("Para utilizar este programa deve de introduzida uma matriz de 1 dimensão com \n");
                printf("vinte elementos com um intervalo de -5 a 11");
                printf("\n");
                printf("Por exemplo:\n");
                printf("- Digite um numero inteiro que se encontre entre -5 e 11.:\n");
                printf("4\n");
                printf("- Digite um numero inteiro que se encontre entre -5 e 11.:\n");
                printf("7\n");
                printf("\n");
                printf("Ao introduzir a matriz, ira ser impresso no seu ecra um menu com varias funcionalidade\n");
                printf("Para utilizar uma dessas funcionalidade apenas tem de introduzir o numero da funcionalidade\n");
                printf("que pretende utilizar.\n");
                printf("\n");
                printf("Por exemplo:\n");
                printf("6 - Devolucao do vetor ordenado por ordem decrescente.\n");
                printf("Digite o numero da opcao pretendida: 6 \n");
                printf("De seguida o programa ira realizar a funcionalidade que foi pedida pelo utilizador.\n");
                printf("Por exemplo:\n");
                printf("4\n5\n6\n");
                printf("5\n7\n8\n");
                printf("Se pretender utilizar outra funcionalidade apenas tem de introduzir o numero da funcionalidade\n");
                printf("que pretende utilizar.\n");
                printf("\n");
                printf("Por exemplo:\n");
                printf("4 - Identificação do valor mais proximo de 15.\n");
                printf("Digite o numero da opcao pretendida: 4\n");
                printf("\n");
                printf("Se pretender utlizar a funcionalidade 11 terá de realizar primeiro a funcionalidade 10.\n");
                printf("\n");
                printf("Se nao pretender utilizar mais o programa apenas pressione 12.\n");
                printf("O programa ira terminar automaticamente\n");
                printf("\n");
                printf("Por exemplo:\n");
                printf("12 - Sair do programa.\n");
                printf("Introduza um numero: 12\n");
                printf("\n");
                printf("Espero que tenha ajudado. Se pretender pedir ajuda outra vez pressione no menu principal 7.");
                return 0;
            case '?':
                // opção inválida
                return 1;
        }
    }

    int n=0, x, i, opcao;
    int num[20];
    int num2[20][20];
    int iniciar11 = 0;
     // numd -> numero dado
    //
    int tamanho=20;  
    //
    
    //
        
    // Verificacao dos valores introduzidos.
    //

    verificacao (num, tamanho);

    
    //Este comando faz com que a tela da consola seja apagada, só aparecendo a case do número inserido em cima.
    // 
    system("cls"); 

    espaco();
    printf("<------------------------------Vetor------------------------------>\n");
    espaco();

    escreverArray(num, 20);
    
    espaco();
    printf("<----------------------------------------------------------------->\n");
    espaco();
    
    // goto menu; vai ser redirecionado para aqui
    //
    menu:

    espaco();
    espaco();

    // Menu
    // Função para escrever o menu
    //   

    menu();
    
    espaco();
    espaco();

    
    // O valor introduzido a baixo ser rederecionado para a case com o numero introduzido
    //

    printf("Digite o numero da opcao pretendida: ");
    scanf("%d", &opcao);
    espaco();    



    switch (opcao)
    {
    case 1:
        //Devolução dos valores em posições múltiplas de três do vetor;
        //
        
        espaco();
        mult3(num, tamanho);
        espaco();
       
        goto menu;

    case 2:
        //Cálculo do seno (sin) de todos os elementos no vetor;
        //
        
        espaco();
        senodoarray(num, tamanho);
        espaco();

        goto menu;
        
    case 3:
        //Cálculo da divisão de todos os elementos no vetor por 2;
        //
        
        espaco();
        divisaoArray(num, tamanho);
        espaco();

        goto menu;

    case 4:
        //Identificação do valor mais próximo de 15;  
        //          
        printf("| 4 |\n");
               
        espaco();
        pertode15(num, tamanho);
        espaco();
        
        goto menu;
        
    case 5:
        //Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas);  
        //          
        
        espaco();
        matriz(num, tamanho);
        espaco();

        
        
        goto menu;

    case 6:
        //Devolução do vetor ordenado por ordem decrescente;    
        //        
        
        espaco();
        ordenararray(num, tamanho);
        espaco();
        
        goto menu;
    
    case 7:
        // Ajuda;
        //
        
        espaco();
        help();
        espaco();
        
        
        goto menu;

    case 8:
        // Leitura de um novo vetor, cálculo  e  devolução  do  produto  interno com o vetor inicial;
        //
        
        espaco();
        multVetores(num, tamanho);
        espaco();
        

        goto menu;

    case 9:
        // Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor;
        //
        
        espaco();
        mdc(num, tamanho);
        espaco();
        
        goto menu;

    case 10:
        // Leitura  de  um novo vetor  1x20,  cálculo  e  devolução  da  matriz 20x20 resultante do produto do vetor inicial com o novo vetor gerado;
        //
        
        espaco();
        iniciar11 = novamatriz(num, tamanho, num2, iniciar11);
        espaco();

        
        
        goto menu;

    case 11:
        // Cálculo e apresentação da matriz transposta referida no ponto anterior;
        //
        
        espaco();
        matrizT(num2, tamanho, iniciar11);
        espaco();
        
        goto menu;
    
    case 12:
        // Sair do programa;
        //
        system("cls"); 
        printf("--> Saiu do programa <--\n");
        
        
        break;

    default:
        
        break;
    }



    return 0;
}
