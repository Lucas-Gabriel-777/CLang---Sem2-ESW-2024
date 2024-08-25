/*Autor: Lucas Gbriel dos Santos Lima
Data: 17-08-2002
Turma: ESW 2A
Objetivo: Escrever um programa em Linguagem C que leia 5 conjuntos de 2 valores, o primeiro 
representando o numero de um aluno, e o segundo representando a sua altura em centimetros. 
Encontre o aluno mais alto e o mais baixo. Mostre o numero do aluno mais alto e do mais baixo, 
junto com suas alturas*/

#include <stdio.h>
 int main() {

  /*Definicao de variaveis     malt = maior altura   mealt = menor altura    num = numero     numen  = numero menor    numai = numero maior
    c = contador    
    mealt tem valor definido como 2000 por acaso, para facilitar a comparacao e definicao do menor valor no momento de comparacao com outros valores*/
   float altura, malt = 0, mealt = 20000;
   int num, numen = 0, numai = 0,c;

   //Obtendo valores para as variaveis
   for (c=1;c<6;c++){//laco de repeticao configurado para obter as mesmas informacoes 6 vezes, (cadastrar 6 pessoas)
      printf("Numero do aluno %d: ",c);
      scanf("%d", &num);

      printf("Altura do aluno: ");
      scanf("%f", &altura);
      
      //Condicionamento
      if (altura > malt){
        malt = altura;
        numai = num;
      } 
       if (altura < mealt) {
        mealt = altura;
        numen = num;
      }
      }
    
    //Mostrando os valores na tela
    printf("O maior aluno e o de numero %d, que mede %.0f cm\n",numai,malt);
    printf("O menor aluno e o de numero %d, que mede %.0f cm",numen,mealt);
    return 0;
      } 