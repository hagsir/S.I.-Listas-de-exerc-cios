#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
2. Desenvolver um algoritmo que leia um n�mero n�o determinado de valores e
calcule e escreva a m�dia aritm�tica dos valores lidos, a quantidade de valores
positivos, a quantidade de valores negativos e o percentual de valores negativos e
positivos.
*/
main(){
float num, soma, numeros, centnegativos, centpositivos, media;
int i = 1, positivos = 0, negativos = 0, qntnum;
setlocale(LC_ALL, "Portuguese");

    printf("Programa que calcula: \nA m�dia aritm�tica\nA quantidade de valores positivos\nA quantidade de valores negativos\nO percentual de valores negativos e positivos.\n\nPrimeiro, digite quantos n�meros voc� deseja calcular: ");
	scanf("%d", &qntnum);
	system("cls");
	printf("Agora digite os %d n�meros para calcul�-los:\n", qntnum);
        while(i <= qntnum){
			scanf("%f", &num);
                if(num > 0){
					positivos++;                                         //Contador de n�meros positivos
				}
				if(num < 0){
					negativos++;                                        //Contador de n�meros negativos
				}
                if(i == 1){
                    numeros = num;                                      //Primeiro n�mero da soma da m�dia aritm�tica
                    i++;
                }
                    else{
                    numeros+=num;                                      //Soma de todos os n�meros
                    i++;
                    }
		}
		system("cls");

        //C�lculo da m�dia aritm�tica dos valores
		media = numeros / qntnum;
		printf("A m�dia aritm�tica dos n�meros � %.2f.", media);

		//Quantidade de valores negativos e positivos
		printf("\nDos n�meros digitados h� %d n�meros negativos e %d n�meros positivos.", negativos, positivos);


		//C�lculo do percentual de negativos e positivos
		centnegativos = (negativos * 100) / qntnum;
		centpositivos = (positivos * 100) / qntnum;
		printf("\n%.1f%% s�o negativos e %.1f%% s�o positivos.", centnegativos, centpositivos);
}
