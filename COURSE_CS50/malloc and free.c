#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char* s = get_string("s : ");
    char* t = malloc(strlen(s) + 1);
    if(t == NULL){
        return 1;
    }

    strcpy(t, s);

    t[0] = toupper(t[0]);
    printf("%s\n", s);
    printf("%s", t);
    free(t);
}
