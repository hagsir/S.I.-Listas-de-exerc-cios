#include<stdio.h>
#include<locale.h>
/*
5.Fa�a um programa que pede ao usu�rio um n�mero entre 1 e 10. Enquanto ele n�o
digitar um n�mero v�lido, o programa vai perguntar de novo.
*/
int main(){
int num=-1;
setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero de 1 a 10: ");
    scanf("%d", &num);
        while(num<1 || num>10){
            printf("%d n�o � um n�mero v�lido, digite novamente: ", num);
            scanf("%d", &num);
        }
    printf("O n�mero %d � v�lido.", num);
return 0;
}
