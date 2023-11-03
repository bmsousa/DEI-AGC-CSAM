#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 51 //50-character string + termination char '\0'

int login(void);

int main(int argc, char* argv[]) {

    
    if(login() == 1){
        system("/bin/sh");
    }


    return 0;
}

int login(void) {
    int authorized = 0;
    char user_input[SIZE];

    printf("Please insert the password: ");
    scanf("%s", user_input);

    if(strcmp("guUONfOThUkVHZj3gdpESj1XjO1AQR", user_input) == 0) {
        authorized = 1;
    } else {
        printf("Incorrect password!\nPlease try again...");
    } 

    return authorized;
}