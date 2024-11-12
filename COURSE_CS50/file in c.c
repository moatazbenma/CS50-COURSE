#include <cs50.h>
#include <stdio.h>

int main(void){
    FILE *myfile = fopen("mouataz.csv", "a");
    char* name = get_string("name : ");
    char* phone = get_string("phone: ");
    fprintf(myfile, "%s, %s\n", name, phone);
    fclose(myfile);
}


//mood          delete          create
// r = read      no             no
// w = write     yes            yes
// a = append    no             yes
