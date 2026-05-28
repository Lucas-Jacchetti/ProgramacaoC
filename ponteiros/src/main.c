#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int search(int *vet, int size, int value);
int copy(int *vet1, int *vet2, int size);
int invert(int *vet3, int size);

int invert(int *vet3, int size){
    int *init = vet3;
    int *fim = vet3 + size - 1;
    while (init < fim){
        int temp = *init;
        *init = *fim;
        *fim = temp;

        init++;
        fim--;
    }
}

int copy(int *vet1, int *vet2, int size){
    int *orig1 = vet1;
    int *orig2 = vet2;

    for (int i = 0; i < size; i++){
        *vet2 = *vet1;
        vet1++;
        vet2++;
    }
    printf("vet 1: %d\n", *orig1);
    printf("vet 2: %d\n", *orig2);
}

int search(int *vet, int size, int value){
    for (int i = 0; i < size; i++){
        if (*vet == value){
            return i;   
        }
        vet++;
    }
    return -1;
}

int main() {
    int vet[] = {1, 3, 5, 6, 8, 9};
    int size = sizeof(vet) / sizeof(*vet);
    int *ptr = vet;
    int result = search(ptr, size, 6);
    printf("indice: %d\n", result);   


    int vet1[] = {2, 5, 7, 4, 10, 44, 5};
    int vet2[] = {3, 6, 8, 5, 11, 55, 9};
    int size1 = sizeof(vet1) / sizeof(*vet1);
    int *ptr1 = vet1;
    int *ptr2 = vet2;
    copy(ptr1, ptr2, size1);

    int vet3[] = {2, 5, 7, 4, 10, 44, 5};
    int size3 = sizeof(vet3) / sizeof(*vet3);
    int *ptr3 = vet3;
    invert(ptr3, size3);
    for (int i = 0; i < size3; i++){
        printf("%d ", vet3[i]);
    }
}
