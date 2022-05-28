#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
5. Em uma elei��o presidencial existem quatro candidatos. Os votos s�o informados
atrav�s de c�digos. Os dados utilizados para a contagem dos votos obedecem �
seguinte codifica��o:
 1, 2, 3, 4 = voto para os respectivos candidatos;
 5 = voto nulo;
 6 = voto em branco;
Elabore um algoritmo que leia o c�digo do candidato em um voto. Calcule e
escreva:
 total de votos para cada candidato;
 total de votos nulos;total de votos em branco;
*/
int main(){
int voto=1;
int v1=0, v2=0, v3=0, v4=0, v5=0, v6=0;
setlocale(LC_ALL, "Portuguese");

    printf("( 1 )Primeiro candidato.\n( 2 )Segundo candidato.\n( 3 )Terceiro candidato.\n( 4 )Quarto candidato.");
    printf("\n( 5 )Voto nulo.\n( 6 )Voto em branco.\n( 0 )Para encerrar a vota��o.");
    printf("\nDigite o seu voto:\n");
    while(voto!=0){
        scanf("%d", &voto);
        if(voto > 6 || voto < 0){
            printf("\nOs n�meros para votar v�o apenas de 1 a 6. \n%d n�o � um n�mero v�lido, vote novamente.\n\n", voto);
        }
        switch(voto){
        case 1:
            v1++;
            break;

        case 2:
            v2++;
            break;

        case 3:
            v3++;
            break;

        case 4:
            v4++;
            break;

        case 5:
            v5++;
            break;

        case 6:
            v6++;
            break;
        }
    }
    system("cls");
    printf("Total de votos.");
    printf("\nPrimeiro candidato: %d votos\nSegundo candidato: %d votos\nTerceiro candidato: %d votos\nQuarto candidato: %d votos", v1, v2, v3, v4);
    printf("\nVotos nulo: %d\nVotos em branco: %d", v5, v6);
}
