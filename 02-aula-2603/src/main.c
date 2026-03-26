#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado(int* a);
void trocar(int* a, int* b);

void trocar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quadrado(int* a){
    *a = *a * *a;
}

int main() {
    int a = 10;
    //int b = 20;
    //printf("a: %d, b: %d\n", a, b);
    //trocar(&a, &b);
    //printf("a: %d, b: %d\n", a, b);
    quadrado(&a);
    printf("a: %d\n", a);
    return 0;
}
