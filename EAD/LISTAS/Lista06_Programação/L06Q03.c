#include <stdio.h>

void imprime_primeiro(int *v){
    printf("Valor: %d\n", v[0]);
}

int main(void){

    //Saida para o Programa abaixo: 3

    int vet[5] = {1, 2, 3, 4, 5};
    imprime_primeiro(&vet[2]);
    return 0;

}