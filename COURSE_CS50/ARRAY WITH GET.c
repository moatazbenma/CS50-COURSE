#include <stdio.h>
#include <cs50.h>

int main(void){
    int length = get_int("CH7AL BGHITI AWLD L9HBA : ");
    int numbers[length];
    int result = 0;

    for(int i = 1; i <= length; i++){
        numbers[i] = get_int("number : ");
        result += numbers[i];
    }

    printf("your result is : \n%f", result / (float) length);

}
