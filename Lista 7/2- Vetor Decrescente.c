#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Dada uma sequ�ncia de n n�meros, imprimi-la na ordem inversa � da leitura.

int main(){
int vetor, i;
setlocale(LC_ALL, "Portuguese");

    printf("Digite a quantidade de n�meros do vetor: ");
        scanf("%d", &vetor);                             //Leitor da quantidade de n�meros no vetor.
system("cls");
    if(vetor<=0){
        printf("N�o � v�lido um vetor com esta quantidade.");
        return 0;                                       //Condi��o de parada caso o vetor seja menor ou igual a 0.
    }

    printf("Digite os %d n�meros: ", vetor);
    int v[vetor];
        for(i=0; i<vetor; i++){                         //Leitor de n�meros no vetor.
        scanf("%d", &v[i]);
        }

    printf("\nO vetor em ordem decrescente:\nV = ");
        for(i= vetor - 1;   i >= 0; i--){
            printf(" %d ", v[i]);                        //Printf n�meros do vetor.
        }

return 0;
}
