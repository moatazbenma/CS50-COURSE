#include <stdio.h>
#include <cs50.h>

void mamito(int number1[]);

int main(void) {
    int number[3];
    mamito(number);
    printf("The result is: %i\n", number[0] + number[1] + number[2]);
}



void mamito(int number1[]) {
    for(int i = 0 ; i < 3 ; i++){
        number1[i] = get_int("number: ");
    }