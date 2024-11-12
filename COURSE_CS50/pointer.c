#include <stdio.h>


int main(void){
    char* value = {"salam"};
    printf("%c", *value);
}



#include <stdio.h>


int main(void){
    int khaled = 15;
    int *k = &khaled;
    printf("%p", k);
}
