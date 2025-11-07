#include <stdio.h>

int main() {
    // Loop to print numbers from 1 up to (and including) 5
    for (int i = 1; i <= 5; i++) {
        printf("Count: %d\n", i);
    }
    return 0;
}

--------------------------------------


#include <stdio.h>

int main() {
    // Loop to print numbers from 10 down to 0
    for (int j = 10; j >= 0; j = j - 2) {
        printf("Countdown: %d\n", j);
    }
    return 0;
}

---------------------------------------



#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    // The array has 5 elements, indexed from 0 to 4.
    for (int k = 0; k < 5; k++) {
        sum = sum + numbers[k]; // Add the current array element to the sum
    }
    
    printf("The total sum of array elements is: %d\n", sum);
    return 0;
}
