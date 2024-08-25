/*Autor: Lucas Gbriel dos Santos Lima
  Data: 18-08-2002
  Turma: ESW 2A
  Objetivo: A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o 
  salario e numero de filhos. A prefeitura deseja saber: 

  a) media do salario da populacao; 
  b) media do numero de filhos; 
  c) maior salario; 
  d) percentual de pessoas com salario ate R$100,00. 
  O final da leitura de dados se dara com a entrada de um salario negativo.*/

#include <stdio.h>
int main() {
/*meds = media de salario | medf = media de filhos | mas = maior salario |pes = percentual de salario
  sal = salario  |  qf = Quantidade de filhos  |  c = contador*/

    float meds,medf,mas,pes,sal;
    int c = 0,qf;
    meds=medf=mas=pes=sal=0;

    while (sal>=0) { //While iniciado de modo a se repetir infinitamente ate que a condicao de parada (salario = 0) seja adicionada pelo input do usuario
        printf("Salario do cidadao: ");
        scanf("%f", &sal);
        
        /*A condicao de parada e adicionada logo no inicio do bloco de repeticao, desse modo, caso seja dado o comando de parada
        o codigo deixa de receber outros valores que seriam somados antes do fim das acoes do laco de repeticao mesmo apos o comando de parada*/
        if (sal<0){ 
            break;
        }
        meds = meds + sal; //Calculo da media de salario
        
        printf("Quantidade de filhos do cidadao: ");
        scanf("%d", &qf);

        medf= medf + qf; //Calculo da media de filhos
        c+=1; //Contador, variavel de controle

        //Condicoes de comparacao de salario contagem da media de salarios maiores que 100R$
        if (sal>mas) {
            mas = sal;
        }
        if (sal>0 && sal<=100){
            pes+=1;
        }
    }
    //Calculos de valores finais
    meds = meds/c;
    medf = medf/c;
    pes = (pes/c)*100;

    //Exibindo valores
    printf("Media de salario da cidade: %.2f\n", meds);
    printf("Media de filhos da cidade: %.0f\n", medf);
    printf("O maior salario registrado na pesquisa foi o de %.2f R$\n",mas);
    printf("A porcentagem de pessoas com salario menor que 100 R$ e de %.2f%%", pes);

    return 0;
}