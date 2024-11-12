#include <stdio.h>
#include <cs50.h>


int main(void){
    int number[3];
    for(int i = 0; i <= 2; i++){
     number[i] = get_int("number : ");
    }

     printf("the result is : %i\n", number[0] + number[1] + number[2]);
}