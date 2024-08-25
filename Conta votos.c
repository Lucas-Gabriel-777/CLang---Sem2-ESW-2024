/*Autor: Lucas Gbriel dos Santos Lima
Data: 18-08-2002
Turma: ESW 2A
Objetivo: Em uma eleicao presidencial existem quatro candidatos. Os votos sao informados atraves de 
codigos. Os dados utilizados para a contagem dos votos obedecem a seguinte codificacao: 

- 1,2,3,4 = voto para os respectivos candidatos; 
- 5 = voto nulo; 
- 6 = voto em branco;

Elabore um algoritmo que leia o codigo do candidado em um voto. Calcule e escreva: 
- total de votos para cada candidato; 
- total de votos nulos; 
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.
*/

#include <stdio.h>
int main () { //definicao de variaveis para contagem de votos
    int voto,v1,v2,v3,v4,v5,v6;
    v1=v2=v3=v4=v5=v6=0; //todas as variaveis sao iniciadas com o valor zero

    //Exibindo opcoes de voto (numeros dos candidatos)
    printf("Cadastro de Votos \n(0)Encerrar \n(1)Candidato 1 \n(2)Candidato 2 \n(3)Candidato 3 \n(4)Candidato 4 \n(5)Voto Nulo \n(6)Voto em Branco\n");
    printf("\n");

    //Obtendo valores da variavel "voto"
    /*While (1) = While (true) _ esse comando faz com que o laco seja repetido infinitamente ate que o comando (flag) de parada "0" seja recebido*/
    while (1) {
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto == 0) break; //flag de parada, encerramento do laco de repeticao

        //Condicoes para contagem de votos
        if (voto == 1){
            v1+=1;
        } else if(voto == 2){
            v2+=1;
        } else if (voto == 3){
            v3+=1;
        } else if (voto == 4){
            v4+=1;
        } else if (voto == 5){
            v5+=1;
        } else if (voto == 6){
            v6+=1;
        } else if (voto<0 || voto >6){ /*Barreira, essa condicao impede que sejam fornecidos valores diferentes dos permitidos*/
            printf("Voto invalido, os digitos aceitos sao os numeros de 1 a 6, Digite 0 para encerrar a contagem.\n");
        } 
    }

    //Exibindo resultado da contagem de votos
    printf("\nTotal de votos: \nCandidato 1: %d \nCandidato 2: %d \nCandidato 3: %d \nCandidato 4: %d\n",v1,v2,v3,v4);
    printf("Votos Nulos: %d \nVotos em Branco: %d",v5,v6);
    return 0;
}