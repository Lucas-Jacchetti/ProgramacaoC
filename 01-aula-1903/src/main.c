#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ehGemeo(int inicio, int fim);
int ehPrimo(int n);

void ehGemeo(int inicio, int fim) {
    for (int i = inicio; i <= fim; i++){
        if (ehPrimo(i) && ehPrimo(i + 2)){
            printf("%d e %d\n", i, i + 2);
        }    
    }
}

int ehPrimo(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    //int num;
    int inicio;
    int fim;
    //printf("Informe um valor > 1: ");
    printf("Informe um valor inicial: ");
    scanf("%d", &inicio); //%d = inteiro, &num = endereço de memoria de num

    printf("Informe um valor final: ");
    scanf("%d", &fim);

    ehGemeo(inicio, fim);

    //printf("ehGemeo(%d): %d\n", num, ehPrimo(num));
    return 0;
}
