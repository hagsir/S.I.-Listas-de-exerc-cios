#include<stdio.h>
#define vetor 5
/*
Dado um vetor v = [10, 20, 30, 40, 50], mostre na tela o conte�do do vetor v em
sequ�ncia.
*/

int main(){
int v[vetor]={10,20,30,40,50};

printf("V =");
    for(int i=0; i<vetor; i++){
    printf(" %d", v[i]);
    }
return 0;
}
