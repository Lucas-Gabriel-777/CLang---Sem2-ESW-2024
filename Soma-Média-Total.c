/*Autor: Lucas Gbriel dos Santos Lima
  Data: 18-08-2002
  Turma: ESW 2A
  Objetivo: Elaborar um programa que efetue a leitura sucessiva de valores numericos e apresente no final
  o total do somatorio, a media e o total de valores lidos.
  O programa devera fazer as leituras dos valores enquanto o usuario estiver fornecendo valores
  positivos, ou seja, o programa devera parar quando o usuario fornece um valor negativo (menor que zero).*/

#include <stdio.h>
int main () { //Definicao de variaveis    n = numero   s = soma   m = media   t = total
  float n =0,s = 0,m = 0,t = 0;
    
  
  while (1) { //While iniciado com valor (1) = (true), laco de repeticao infinito que e encerrado pela insercao de um valor negativo 
    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n<0) break; //Condicao de parada
    
    s+=n; //Soma = soma + numero digitado, o valor de soma e automaticamente atualizado
    t+=1; //Incremento da variavel "Total"
  }

  m = s/t; //media = soma/total

  //Exibicao de valores finais
  printf("\nA soma obtida foi de %.1f\n", s);
  printf("A media obtida foi de %.1f\n", m);
  printf("Foram lidos %.1f numeros no total", t);
  return 0;
}