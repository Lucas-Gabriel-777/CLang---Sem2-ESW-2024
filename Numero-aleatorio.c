/*Autor: Lucas Gabriel dos Santos Lima
  Data: 21-08-2024
  Objetivo: Criar um programa que sorteie um numero e peca ao usuario para tentar adivinhar
  qual foi o numero escolhido*/

//inclusao de bibliotecas
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main () {

// definicao de variaveis; hc = Human Choice    mc = Machine Choice
    int hc,mc;

//sorteio de numero
    srand(time(NULL));
    mc = rand() % 10;

// leitura e analise de palpite do usuario
    printf("Eu escolhi um numero entre 0 e 10, voce consegue adivinhar qual e?\n");
    printf("Chute: ");
    scanf("%d", &hc);

    if (hc == mc) {
        printf("Acerto mizeravi");
    } else if (hc > mc) {
        printf("Muito alto, o numero era %d",mc);
    } else if (hc < mc) {
        printf("Muito baixo, o numero era %d",mc);
    }

    return 0;
}