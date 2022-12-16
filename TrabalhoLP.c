#include <stdio.h>
#include <math.h>
#include <stdlib.h>




/*Este programa consiste em pedir 20 numeros ao utilizador.
 *Os valores pedidos devem estar compreendidos entre -5 e 11.





*/


// Função 1
//

// Função 2
//

// Função 3
//

void divisaode1arraypor2(int a[], int tam) {
  for (int i = 0; i < tam; i++) {
    a[i] /= 2;
  }
}

// Função 4
//

// Função 5
//

// Função 6
//
int main(){

    int n=0, x, i, menu;
    int num[20]; // numd -> numero dado
    //
    int tamanho=20;  
    //
    float seno[20];
    //
        
    // Verificacao dos valores introduzidos.
    //

    

    while (n<20)
    {

        printf("- Digite um numero que se encontre entre -5 e 11.\n");
        scanf("%d", &num[n]);


        if ((num[n]<= -5) || (num[n]>=11))
        {
            
            printf("- Numero invalido, digite um numero entre -5 e 11.\n");
            
        }
        else  
        {
            //Se o numero inserido estiver dentro do intervalo, o programa passa para o proximo numero.
            n++;
        }
        
    }
    

    // Menu
    //    

    printf("*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*\n");
    printf("| 1 - Devolução dos valores em posições múltiplas de três do vetor;                                                                                             |\n");
    printf("| 2 - Cálculo do seno (sin) de todos os elementos no vetor;                                                                                                          |\n");
    printf("| 3 - Cálculo da divisão de todos os elementos no vetor por 2;                                                                                                      |\n");
    printf("| 4 - Identificação do valor mais próximo de 15;                                                                                                                   |\n");
    printf("| 5 - Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas);      |\n");
    printf("| 6 - Devolução do vetor ordenado por ordem decrescente;                                                                                                            |\n");
    printf("| 7 - Pretende sair do programa;                                                                                                                                      |\n");
    printf("*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*\n");

    scanf("%d", &menu);

    //Este comando faz com que a tela da consola seja apagada, só aparecendo a case do número inserido em cima.
    // 
    system("cls"); 

        
    
    // Ainda em testes
    //    
    switch (menu)
    {
    case 1:
        //Teste
        //Devolução dos valores em posições múltiplas de três do vetor;
        //
        printf("| 1 |\n");
        break;

    case 2:
        //Teste
        //Cálculo do seno (sin) de todos os elementos no vetor;
        //
        
        for (int x = 0; x < 20; x++)
        {
            seno[x]=sin(num[x]);
        }

        for (int i = 0; i < 20; i++) 
        {
            printf("\n");
            printf("- O valor do seno do valor %d, e %f.\n", num[i], seno[i]);
        }

        break;
        
    case 3:
        //Cálculo da divisão de todos os elementos no vetor por 2;
        //
        
        divisaode1arraypor2(num, tamanho);

        for (int i = 0; i < 20; i++) 
        {
            printf("%d\n", num[i]);
        } 
    
        break;

    case 4:
        //Teste
        //Identificação do valor mais próximo de 15;  
        //          
        printf("| 4 |\n");
        break;
        
    case 5:
        //Teste
        //Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas);  
        //          
        printf("| 5 |\n");
        break;

    case 6:
        //Teste
        //Devolução do vetor ordenado por ordem decrescente;    
        //        
        printf("| 6 |\n");
        break;
    case 7:
        // Teste
        // Sair do programa;
        //


        break;

    default:
        break;
    }

    







    return 0;
}