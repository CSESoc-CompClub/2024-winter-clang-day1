#include <stdio.h>

int main() {
    int pin;
    printf("Enter PIN code:\n");
    scanf("%d", &pin);
    if (pin == 1234) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }  
}