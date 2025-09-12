#include <stdio.h>

int main() {
    int num;

    // Prompt user for input
    printf("Enter a number: ");
    
    // Correct scanf usage
    scanf("%d", &num);
    // Check the value of num
    if (num > 0) {
        printf("Positive number\n");
    }
    else if (num < 0) {
        printf("Negative number\n");
    }
    else {
        printf("Zero\n");
    }

    return 0; 
}