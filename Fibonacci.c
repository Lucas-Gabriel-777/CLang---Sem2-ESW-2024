/*Autor: Lucas Gbriel dos Santos Lima
Data: 17-08-2002
Turma: ESW 2A
Objetivo: Escreva um programa que apresente a serie de Fibonacci ate o decimo quinto termo. A serie de 
Fibonacci e formada pela sequencia: 1, 1, 2,3,5,8,13,21,34...etc. Esta serie se caracteriza pela 
soma de um termo posterior com o seu anterior subsequente.*/

#include <stdio.h>
int main () {
    /*Declaracao de variaveis      nan = numero anterior 1 e 2     nat = numero atual   c = contador  
      A sequencia de fibonacci se da pelo calculoda seguinte expressa Fn = Fn-2 + Fn-1*/
    int nan1 = 1;
    int nat = 1;
    int nan2 = 0;
    int c = 0;

    
    for (c=0;c<15;c++) { //Laco de repeticao para 15 vezes, o contador mostra e repete o calculo de fibonacci ate o decimo quinto termo

        printf("%d ", nat);
        nat = nan1 + nan2;
        nan2 = nan1;
        nan1 = nat;
    }

    return 0;
}