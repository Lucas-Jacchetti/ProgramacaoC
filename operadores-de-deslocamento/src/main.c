#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int clear(unsigned int val);
unsigned int setbit (unsigned int x, int bit);
unsigned int resetbit (unsigned int x, int bit);
unsigned int flipbit (unsigned int x, int bit);
int testBit (unsigned int x, int bit); 

int testBit (unsigned int x, int bit){
    unsigned int mask = 1 << bit;
    if ((x & mask) >= 1){
        return 1;
    }
    else return 0;
}

unsigned int resetbit (unsigned int x, int bit){
    unsigned int mask = 1 << bit;
    return x & ~mask;
}

unsigned int flipbit (unsigned int x, int bit){
    unsigned int mask = 1 << bit;
    return x ^ mask;
}


unsigned int setbit (unsigned int x, int bit){
    unsigned int mask = 1 << bit;
    return x | mask;
}

unsigned int clear(unsigned int val){
    val = val & 0;
    return val;
}
int main() {
    unsigned int val = 00000003;
    printf("val: %08X\n", val);
    //printf("clear: %08X\n", clear(val));
    //printf("setbit: %08X\n", setbit(val, 2));
    //printf("resetbit: %08X\n", resetbit(val, 1));
    //printf("flipbit: %08X\n", flipbit(val, 2));
    printf("test: %d\n", testBit(val, 1));

    
    return 0;
}
