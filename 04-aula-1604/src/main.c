#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct racional{
    float num;
    float den;
};

float soma();
void floatParaRacional(float n, int* num, int* den);
void simplificar(struct racional* fracao);

int main() {
    struct racional ab;
    struct racional cd;
    ab.num = 8;
    ab.den = 10;
    cd.num = 5;
    cd.den = 7;

    //soma(ab, cd);
    simplificar(&ab);
    printf("Fração: %.f", ab.num);
    printf("Fração: %.f", ab.num);
    return 0;
}

float soma(struct racional ab, struct racional cd){
    float numerador = ((ab.num * cd.den) + (ab.den * cd.num));
    float denominador = ab.den * cd.den;
    float soma = numerador / denominador;
    printf("Fração: %.2f", soma);
    return soma;
}

void floatParaRacional(float n, int* num, int* den){
}

void simplificar(struct racional* fracao){
    int resto = 0;
    int num = fracao->num;
    int den = fracao->den;
    int mdc;
    
    do{
      resto = num % den;
      mdc = num / den;
    } while (resto > 0);

    num = num / mdc;
    den = den / mdc;
    
}

