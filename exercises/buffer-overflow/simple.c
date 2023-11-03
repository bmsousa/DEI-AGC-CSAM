#include <stdio.h>

#define SIZE 21 //20-character string + termination char '\0'

int main(int argc, char* argv[]) {
    int num;
    char string[SIZE];

    puts("Enter a number: ");
    scanf("%d", &num);

    puts("Please enter a string. (No longer than 20 characters...)");
    scanf("%s", string);

    printf("Number is: %d\n", num);
    printf("String is: %s\n", string);

    return 0;
}

