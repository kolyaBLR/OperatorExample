#include "Array.h"
#include "Money.h"
#include <random>

void print(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int* randomArray(int n) {
    int* result = new int[n];
    for (int i = 0; i < n; i++) {
        result[i] = rand() % 10;
    }
    return result;
}

int main(int argc, char const *argv[]) {
    Money *m1 = new Money();
    Money m2;
    m1->dollar = 10;
    m1->cent = 90;
    m2.dollar = 99;
    m2.cent = 33;
    Money rez = *m1 + m2;
    
    printf("dollars: %d\n", rez.dollar);
    printf("cents: %d\n", rez.cent);
    
    return 0;
}
