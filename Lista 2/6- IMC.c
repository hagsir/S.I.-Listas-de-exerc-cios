#include<stdio.h>
#include<locale.h>

//Programa que calcula o IMC de uma pessoa

int main(){
float peso, altura, imc;
setlocale(LC_ALL, "Portuguese");

    printf("Digite o seu peso: \n");
    scanf("%f", &peso);
    printf("Digite a sua altura: (EX: 1,76)\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc > 30)
        printf("Voc� est� na condi��o obesa de acordo com o IMC.");
        else if(imc > 25)
            printf("Voc� est� acima do peso de acordo com o IMC.");
            else if(imc > 18.5)
                printf("Voc� est� com o peso normal de acordo com o IMC.");
                else
                    printf("Voc� est� abaixo do peso de acordo com o IMC.");
}
