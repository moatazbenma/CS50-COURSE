#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string names[] = {"ahmed", "khalil", "samir", "jilali", "saad"};
    for(int i = 0; i < 5 ; i++){
        if(strcmp(names[i], "khal") == 0){
                printf("found in %i steps\n", i + 1);
                return 0;
        }
    }
    printf("not found \n");
    return 1;
}