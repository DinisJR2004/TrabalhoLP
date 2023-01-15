// O objetivo deste trabalho  é  implementar  um programa que peça ao utilizador 20
// números inteiros e os guarde num vetor, para  posteriormente  providenciar forma
// de calcular algumas estatísticas ou fazer operações sobre esses valores.
// Os valores pedidos devem estar compreendidos entre -5 e 11.
// Deve ser feita a VALIDAÇÃO DE ENTRADA!

// Após terem sido pedidos os valores, deve  ser mostrado um menu ao utilizador que
// lhe permita calcular cada  uma  das  estatísticas referidas em baixo, exatamente
// pela  ordem  colocadas  neste  enunciado.  Depois de  se  escolher  uma opção, o
// resultado deve ser mostrado no ecrã, e o menu deve voltar a ser exibido.
// As funcionalidades mínimas a disponibilizar são as seguintes:

//   1 - Devolução dos valores em posições múltiplas de três do vetor;
//   2 - Cálculo do seno (sin) de todos os elementos no vetor;
//   3 - Cálculo da divisão de todos os elementos no vetor por 2;
//   4 - Identificação do valor mais próximo de 15;
//   5 - Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor
//       lido (primeira linha) e por permutações dos seus valores (outras linhas);
//   6 - Devolução do vetor ordenado por ordem decrescente.

// Uma  versão  mais elaborada  do projeto  deve exibir adicionalmente as seguintes
// características e funcionalidades:

//   1 - Leitura de um novo vetor, cálculo  e  devolução  do  produto  interno com o
//       vetor inicial;
//   2 - Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor;
//   3 - Leitura  de  um novo vetor  1x20,  cálculo  e  devolução  da  matriz 20x20
//       resultante do produto do vetor inicial com o novo vetor gerado;
//   4 - Cálculo e apresentação da matriz transposta referida no ponto anterior;
//   5 - O programa apresenta  adicionalmente  uma  página de ajuda, acessível como
//       sendo a entrada 7 no menu.
//   6 - O programa  mostra  alguma  ajuda  quando é executado a partir da linha de
//       comandos com a flag --help.


// O programa deve ser implementado em C, e deve ser entregue no formato de um único
// ficheiro, com o nome arrays.c, que deve ser submetido no Moodle.


#include <stdio.h>
#include <math.h>
// Para colocar o comando system("cls");
//
#include <stdlib.h>
#include <unistd.h>

void menu ()
/**
    @brief Imprime o menu de funcionalidades do programa  
*/
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

void help ()
/**
    
    @brief Imprime ajuda adicional ao utilizador 
    @details Esta função imprime o menu do programa principal, este ajuda na navegação, instrução e utilização do mesmo, este subprograma não porta nenhum argumento de entrada e também não retorna qualquer tipo de valor.
*/
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
    printf("Se pretende sair basta introduzir o falar que agrega a frase Sair do programa, neste caso e o numero 11.\n");
    printf("Espero que tenha ajudado.\n");
    printf("____________________________________________________________________________________________________________\n"); 
}


void escreverArray (int A[], int N)
/**
    
    @brief Imprime os numeros inseridos no vetor pelo utilizador
    @details  Esta função está encarregue de mostrar os elementos que pertencem ao array A composto por números inteiros. 
    @param  A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos

*/
{
  int k; /* Variável utilizada para percorrer o Array A[] */
  
  for (k = 0; k < N; k++){
  	printf("%d ", A[k]);
  }
  printf("\n");
}

void verificacao (int A[], int N)
/**
    
    @brief Verifica os  valores introduzidos
    @details Esta é uma função em C que lê um vetor de inteiros da entrada padrão e verifica se os elementos estão dentro de um determinado intervalo. A função recebe como parâmetros um vetor de inteiros e o tamanho desse vetor. O loop na linha 127 percorre o vetor elemento por elemento e solicita a entrada de um elemento na linha 131. Se o elemento estiver fora do intervalo [-5,11], uma mensagem é exibida na tela e o usuário é solicitado a inserir outro elemento. Se o elemento estiver dentro do intervalo, o loop passa para o próximo elemento.  
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos
*/
{
    
    int n = 0; /* Variável utilizada para percorrer o Array A[] */
    
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


void espaco ()
/**
    
    @brief Função para colocar uma quebra de linha
    @details  Esta função quando é invocada faz uma quebra de linha, esta não tem parâmetros de entrada, e também não retorna valores
*/
{

    printf("\n");

}


int mult3(int A[], int n)
/**
    
    @brief Imprime as posições do vetor que são multiplas de 3
    @details  Este é um programa em C que tem como função imprimir os valores de um vetor que são múltiplos de 3. A função recebe como parâmetros um vetor de inteiros e o tamanho desse vetor. O loop na linha 167 percorre o vetor elemento por elemento e verifica se o elemento é múltiplo de 3 na linha 169. Se o elemento for múltiplo de 3, ele é impresso na tela na linha 172. Se nenhum elemento for múltiplo de 3, uma mensagem de erro é exibida na tela na linha 177.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos
*/
{
    int i; /* Variável utilizada para percorrer o Array A[], bem como para imprimir as posições multiplas de 3 */
    for (i = 0; i < n; i++)
    {
            if (i % 3 == 0)
            {   
                printf("Array[%d] = %d. \n", i, A[i]);
            }
    }
}

// Função 2
//

float senodoarray(int A[], int N)
/**
    
    @brief Calcula o seno de todos os elementos do vetor
    @details  Esta é uma função em C que exibe o seno de cada elemento de um vetor. A função recebe como parâmetros um vetor de inteiros e o tamanho desse vetor. O loop na linha 187 percorre o vetor elemento por elemento e calcula o seno do elemento atual na linha 190. O seno é exibido no ecrã juntamente com elemento do vetor.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos
*/
{
    int i; /* Variável utilizada para percorrer o Array A[] */
    for (i = 0; i < N; i++) 
    {
        printf("\n");
        printf("- O valor do seno do valor %d, e %f.\n", A[i], sin(A[i])); 
    }

}


void ordenararray(int A[], int N) 
/**
    
    @brief Coloca o vetor por ordem decrescente 
    @details Esta é uma função em C que ordena os elementos de um vetor em ordem decrescente. A função recebe como parâmetros um vetor de inteiros e o tamanho desse vetor. Os elementos do vetor A são copiados para um novo vetor “Array” na linha 207. Em seguida, o algoritmo de ordenação por seleção é aplicado no vetor “Array” na linha 212. O vetor “Array” é exibido na tela na linha 224 após ser ordenado.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos
*/
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


void matrizT(int A[][20], int N, int inicar11)
/**
    
    @brief Tranpõe a matriz introduzida na funcionalidade 10
    @details A função Matriz T() é utilizada para transpor uma matriz ou seja trocar as linhas pelas colunas da mesma, a função recebe como argumentos de entrada a própria matriz com elementos inteiros, o tamanho da matriz(N), e um inteiro “iniciar11”, se  a variável “iniciar11” for igual a 1 a função automaticamente transpõe a matriz e armazena o resultado na matriz “z”, de seguida a matriz “z” é impressa,  caso contrario a função imprime uma mensagem  que comunica ao usuário que a matriz não foi inicializada. 
    @param A[][20] - Array mencionado no main()
    @param N - Quantidade de numeros inseridos
    @param iniciar11 - Variável utilizada para iniciar a funcionalidade 11
*/
            {
                if (inicar11 == 1)
                {
                int i , j, z[20][20];

                //Transposição da matriz anterior
                //Troca de linhas com colunas

                for( i=0 ; i < N; i++){
                    for( j=0; j < N; j++){
                         z[i][j] = A[j][i]; 
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

void multVetores(int A[], int N)
/**
    
    @brief Multiplica dois vetores
    @details Esta é uma função em C que multiplica os elementos de dois vetores e armazena o resultado em um terceiro vetor. A função recebe como parâmetros um vetor de inteiros e o tamanho desse vetor. O vetor A é lido na entrada padrão na linha 273. Em seguida, os elementos dos vetores x e A são multiplicados um a um e o resultado é armazenado no vetor B na linha 283. Por fim, os elementos do vetor B são exibidos na tela na linha 286.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos 
*/
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


int pertode15(int A[], int N)
/**
    
    @brief Imprime o número mais próximo de 15 
    @details  Esta é uma função em C que encontra o elemento de um vetor mais próximo de 15 e exibe-o na tela. A função recebe como parâmetros um vetor de inteiros e o tamanho desse vetor. O loop na linha 301 percorre o vetor elemento por elemento e calcula a diferença entre o elemento atual e 15 na linha 304. Se a diferença atual for menor que a diferença armazenada anteriormente, o índice do elemento atual é armazenado como o índice do elemento mais próximo de 15 e a diferença atual é armazenada como a diferença mínima. Após o loop, o elemento mais próximo de 15 é exibido na tela na linha 312.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos 
*/
{
    int k;
    int proximo = 0;  
    int alphadif = abs(A[0] - 15);  
    for (k = 1; k < N; k++)
    {
       
        int difactual = abs(A[k] - 15);
        if (difactual < alphadif)
        {
            proximo = k;
            alphadif = difactual;
        }
    }

    printf("O numero mais proximo de 15 e o %d.\n", A[proximo]);
}

void divisaoArray(int A[], int N) 
/**
    
    @brief Divide os elementos da matriz por 2
    @details  Esta função faz a divisão de cada elemento de um array de elementos inteiros A por 2. O quociente desta operação é depois armazenado em outro array de elementos do tipo inteiro B, que de seguida é impresso pela função.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos
*/
{
  int i, B[20];
    for (i = 0; i < N; i++) 
        {
            B[i] = A[i] / 2;
        }

    for (i = 0; i < N; i++) 
        {
            printf("Array[%d] = %d.\n", i, B[i]);
        }
}


// Função 8
//

void mdc(int A[], int N)
/**
    
    @brief Calcula o minimo multiplo comum entre duas posições do vetor
    @details  Esta função tem como objetivo calcular o mínimo múltiplo comum entre dois elementos consecutivos de um array de inteiros. Dentro da função, são declaradas três variáveis do tipo inteiro: i, j e k. De seguida, inicia-se um loop que percorre todo o array, exceto o último elemento (i < n - 1).
    @details  A cada iteração do loop, a variável k é atribuída o valor do produto dos elementos consecutivos (array[i] * array[i + 1]). Em seguida, o valor de k é exibido na tela juntamente com os índices e os valores dos elementos do array.
    @details Após o fim do loop, a função é finalizada.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos
*/
{
    int i;
    for (i = 0; i < N-1; i++) {
        int mdc = 0, a = A[i], b = A[i+1];
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        mdc = a;
        int mmc = (A[i] * A[i+1]) / mdc;
        if(mmc<0)
            mmc=-mmc;
        printf("O minimo multiplo comum entre Array[%d] (%d) e Array[%d] (%d) = %d. \n", i, A[i], i+1, A[i+1], mmc);
    }
}



int novamatriz(int A[], int N, int B[][20], int iniciar11)
/**
    
    @brief Multiplica dois vetores originando um vetor de duas dimensões
    @details  Esta é uma função em C que lê um vetor de inteiros, multiplica esse vetor por outro lido da entrada padrão e armazena o resultado em uma matriz. A função recebe como parâmetros um vetor de inteiros e o tamanho desse vetor, uma matriz de inteiros e um inteiro inicial. O vetor array2 é lido da entrada padrão na linha 363. Em seguida, os elementos dos vetores A e array2 são multiplicados elemento a elemento e o resultado é armazenado na matriz array3 na linha 370. A matriz array3 é impressa na tela na linha 377. Por fim, os elementos da matriz array3 são copiados para a matriz B e o inteiro inicial é alterado para 1 antes de ser retornado pela função
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos 
    @param iniciar11 - Variável utilizada para iniciar a funcionalidade 11
    @param B[][20] - Array de duas dimensões 
    @return  retorna o valor da variável iniciar11
*/
{
    int i;
    int j;
    int array2[20];
    int array3[20][20];

    for (i = 0; i < N; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            array3[i][j] = A[i] * array2[j];
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d ", array3[i][j]);
        }
        printf("\n");
    }
        for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            B[i][j]  = array3[i][j];
        }
    }
    iniciar11 = 1;
    return iniciar11;
}


int matriz(int A[], int N)
/**
    
    @brief Transforma uma matriz de 1 dimensão em uma matriz de 2 dimensões
    @details Esta funcao cria uma matriz de 20x20 e preenche cada linha da matriz com o vetor lido e a seguida a mesma matriz é impressa.
    @details A primeira linha do Array de 2 dimensoes é lida e as outras linhas são permutações dos seus valores, a funcao cria e imprime a matriz feita pela funcao através de dois loops.
    @details O primeiro loop percorre as linhas da matriz e o segundo as colunas da mesma.
    @param A[] - Array introduzido pelo utilizador
    @param N - Quantidade de numeros inseridos 
*/
{
    int i;
    int j;
    int matriz[20][20];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            matriz[i][j] = A[j];
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}


int main(int argc, char *argv[])
{
    int c;

    while((c = getopt(argc, argv, "--help")) != -1)
    /**
    @brief Imprime no terminal o menu de ajuda
    @details Função que imprime um menu de ajuda quando são introduzidos os seguintes comandos no terminal "cc ProjetoLP.c -lm -o Ajuda" , "./Ajuda --help"  
    */
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
                printf("Ao introduzir a matriz ira ser impresso no seu ecra um menu com varias funcionalidade\n");
                printf("Para utilizar uma dessas funcionalidade apenas tem de introduzir o numero da funcionalidade\n");
                printf("que pretende utilizar.\n");
                printf("\n");
                printf("Por exemplo:\n");
                printf("6 - Devolucao do vetor ordenado por ordem decrescente.\n");
                printf("- Digite um numero inteiro que se encontre entre -5 e 11.:\n");
                printf("6\n");
                printf("De seguida o programa ira realizar a funcionalidade que foi pedida pelo utilizador.\n");
                printf("Por exemplo:\n");
                printf("4\n5\n6\n");
                printf("5\n7\n8\n");
                printf("Se pretender utilizar outra funcionalidade apenas tem de introduzir o numero da funcionalidade\n");
                printf("que pretende utilizar.\n");
                printf("\n");
                printf("Por exemplo:\n");
                printf("4 - Identificação do valor mais proximo de 15.\n");
                printf("- Digite um numero inteiro que se encontre entre -5 e 11.:\n");
                printf("4\n");
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

    /**
    
    @brief Função principal do programa 
    @details Está funcão cria o menu de funcionalidade que podem ser utilizador pelo usuário.
    */

    int n=0, x, i, opcao;
    int num[20];
    int num2[20][20];
    int iniciar11 = 0;
    // numd -> numero dado
    //
    int tamanho=20;  
    //
    
    //
        
    /* Verificacao dos valores introduzidos. */
    //

    verificacao (num, tamanho);

    
    /* Este comando faz com que a tela da consola seja apagada, só aparecendo a case do número inserido em cima. */
    // 
    system("cls"); 

    espaco();
    printf("<------------------------------Vetor------------------------------>\n");
    espaco();

    escreverArray(num, 20);
    
    espaco();
    printf("<----------------------------------------------------------------->\n");
    espaco();
    
    /* goto menu */
    //
    menu:

    espaco();
    espaco();

    /* Menu */
    /*Função para escrever o menu*/
    //   

    menu();
    
    espaco();
    espaco();

    
    /* O valor introduzido a baixo ser rederecionado para a case com o numero introduzido */
    //

    printf("Digite o numero da opcao pretendida: ");
    scanf("%d", &opcao);
    espaco();    



    switch (opcao)
    {
    case 1:
        /* Devolução dos valores em posições múltiplas de três do vetor */
        //
        
        espaco();
        mult3(num, tamanho);
        espaco();
       
        goto menu;

    case 2:
        /* Cálculo do seno (sin) de todos os elementos no vetor */
        //
        
        espaco();
        senodoarray(num, tamanho);
        espaco();

        goto menu;
        
    case 3:
        /* Cálculo da divisão de todos os elementos no vetor por 2 */
        //
        
        espaco();
        divisaoArray(num, tamanho);
        espaco();

        goto menu;

    case 4:
        /* Identificação do valor mais próximo de 15 */
        //          
        printf("| 4 |\n");
               
        espaco();
        pertode15(num, tamanho);
        espaco();
        
        goto menu;
        
    case 5:
        /* Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas) */
        //          
        
        espaco();
        matriz(num, tamanho);
        espaco();

        
        
        goto menu;

    case 6:
        /* Devolução do vetor ordenado por ordem decrescente */
        //        
        
        espaco();
        ordenararray(num, tamanho);
        espaco();
        
        goto menu;
    
    case 7:
        /* Ajuda */
        //
        
        espaco();
        help();
        espaco();
        
        
        goto menu;

    case 8:
        /* Leitura de um novo vetor, cálculo  e  devolução  do  produto  interno com o vetor inicial */
        //
        
        espaco();
        multVetores(num, tamanho);
        espaco();
        

        goto menu;

    case 9:
        /* Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor */
        //
        
        espaco();
        mdc(num, tamanho);
        espaco();
        
        goto menu;

    case 10:
        /* Leitura  de  um novo vetor  1x20,  cálculo  e  devolução  da  matriz 20x20 resultante do produto do vetor inicial com o novo vetor gerado */
        //
        
        espaco();
        iniciar11 = novamatriz(num, tamanho, num2, iniciar11);
        espaco();

        
        
        goto menu;

    case 11:
        /* Cálculo e apresentação da matriz transposta referida no ponto anterior */
        //
        
        espaco();
        matrizT(num2, tamanho, iniciar11);
        espaco();
        
        goto menu;
    
    case 12:
        /* Sair do programa */
        //
        system("cls"); 
        printf("--> Saiu do programa <--\n");
        
        
        break;

    default:
        
        break;
    }



    return 0;
}
