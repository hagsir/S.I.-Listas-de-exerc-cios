#include<stdio.h>
#include<locale.h>
/*
6.Crie um algoritmo que, dado um n�mero informado pelo usu�rio, imprima a
tabuada de multiplica��o dele de 1 a 10. Use o formato de apresenta��o
como na tabuada cl�ssica.
*/
int main(){
int num, produto;
setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero para aparecer a tabuada dele: ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        produto = num * i;
        printf("%d x %d = %d\n", i, num, produto);
    }
}
