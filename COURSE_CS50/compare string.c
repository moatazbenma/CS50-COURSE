#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main(void){
    int result;
    char *i = get_string("i : ");
    char *t = get_string("t : ");

    if(strcmp(i, t) == 0){
        printf("the same\n");
    }
    else{
        printf("Different");
    }
}
