#include <stdio.h>
#include <cs50.h>


int main(void){
    int number[] = {2,4,5,0,7};
    for(int i = 0; i < 5 ; i++){
        if(number[i] == 0){
                printf("found in %i steps\n", i + 1);
                return 0;
        }
    }
    printf("not found \n");
    return 1;
}
