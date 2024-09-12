/*Autor: Lucas Gabriel dos Santos Lima
  Data: 30-08-2023
  Objetivo: Elaborar um programa que efetue a leitura sucessiva de valores numericos e apresente no final
  o total do somatorio, a media e o total de valores lidos.
  O programa devera fazer as leituras dos valores enquanto o usuario estiver fornecendo valores
  positivos, ou seja, o programa devera parar quando o usuario fornece um valor negativo (menor
  que zero).*/

#include <stdio.h>
int main () {
    float n =0,s = 0,m = 0,t = 0;
    
    while (1) {
        printf("Digite um numero para somar, ou 0 para encerrar: ");
        scanf("%f", &n);

        if (n==0) break;
        s+=n;
        t+=1;
    }
    m = s/t;

    printf("A soma obtida foi de %.1f\n", s);
    printf("A media obtida foi de %.1f\n", m);
    printf("Foram lidos %.1f numeros no total", t);
    return 0;
}