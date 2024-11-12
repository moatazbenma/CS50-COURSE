#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct{
    string name;
    string number;
} mtz;

int main(void){
    mtz society[2];

    society[0].name = "khalid";
    society[0].number = "0610161606";

    society[1].name = "samir";
    society[1].number = "0650378030";

    for(int i = 0; i < 2; i++){
                if(strcmp( society[i].name, "samir") == 0){
            printf("FOUND %s\n", society[i].number);
            return 0;
        }
    }
    printf("NOT FOUND \n");
    return 1;
}