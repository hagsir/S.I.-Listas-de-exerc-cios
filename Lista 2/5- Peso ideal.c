#include<stdio.h>
#include<locale.h>

/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule seu peso ideal, utilizando as seguintes f�rmulas:
 para homens: (72.7 * h) � 58
 para mulheres: (62.1 * h) � 44.7
*/

main(){
float altura=0, pesoideal=0;
char sexo;
setlocale(LC_ALL, "Portuguese");

printf("Voc� � homem ou mulher? h/m\n");
scanf("%c", &sexo);
printf("Digite a sua altura: ");
scanf("%f", &altura);

    if(sexo == 'h'){
       pesoideal = (altura * 72.7) - 58;
       printf("O peso ideal para voc� � de %.1f kg.", pesoideal);
    }
        else{
        pesoideal = (altura * 62.1) - 44.7;
        printf("O peso ideal para voc� � de %.1f kg.", pesoideal);
        }



}
