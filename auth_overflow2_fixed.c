#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Random function goes here
//Returns 1 if odd, 0 if odd
int iseven(int n){
    return n%2;
}

int check_authentication(char *password) {
    char password_buffer[16];

    // Secure copy with overflow protection
    strncpy(password_buffer, password, sizeof(password_buffer) - 1);
    password_buffer[sizeof(password_buffer) - 1] = '\0'; // Null-terminate

    if(strcmp(password_buffer, "michael") == 0)
        return 1;
    else if(strcmp(password_buffer, "tsikerdekis") == 0)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("Usage: %s <password>\n", argv[0]);
        exit(0);
    }
    if(check_authentication(argv[1])) {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf(" Access Granted.\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    } else {
        printf("\nAccess Denied.\n");
    }
}
