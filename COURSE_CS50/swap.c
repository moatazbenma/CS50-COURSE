#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b);

int main(void){
    int x = 13;
    int y = 14;

    swap(&x, &y);


    printf("x : %i\n", x);
    printf("y : %i", y);
}

void swap(int *a, int *b){
    int tmp = *a; //13
    *a = *b; //14
    *b = tmp; //13
}

