#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado(int* a);
void trocar(int* a, int* b);
void avaliarAluno(float n1, float n2, float n3, float* media, int* situacao);

void avaliarAluno(float n1, float n2, float n3, float* media, int* situacao){
    n1 = n1 + n2 + n3;
    *media = n1/3;
    if (*media < 4){
        *situacao = 3;
    }
    else if (*media >= 4 && *media < 7){
        *situacao = 2;
    }
    else{
        *situacao = 1;
    }
}

void trocar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quadrado(int* a){
    *a = *a * *a;
}

int main() {
    //int a = 10;

    float n1 = 5.1;
    float n2 = 2.7;
    float n3 = 8.8;
    float media;
    int situacao;

    //int b = 20;
    //printf("a: %d, b: %d\n", a, b);
    
    //trocar(&a, &b);
    //printf("a: %d, b: %d\n", a, b);
    
    //quadrado(&a);
    //printf("a: %d\n", a);
    
    avaliarAluno(n1, n2, n3, &media, &situacao);
    printf("media: %.2f\n", media);
    printf("situação: %d\n", situacao);
    
    return 0;
}
