#include<stdio.h>
#include<locale.h>
/*
1. Escreva um algoritmo que l� 10 valores, um de cada vez, e conta quantos destes
valores s�o negativos, escrevendo esta informa��o.
*/
main(){
float num;
int i=0, negativos=0;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 10 n�meros positivos ou negativos para o programa contar quantos n�meros negativos foram escritos:\n ");
	while(i<=9){
        scanf("%f", &num);
		i++;
		if(num < 0)
            negativos++;
    }
    printf("H� %d n�meros negativos.", negativos);
}

