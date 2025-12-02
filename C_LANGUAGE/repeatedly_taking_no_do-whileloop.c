#include <stdio.h>

int main() {
    int n,sum = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
    } while (n!= 0);
    
    printf("Sum of all numbers: %d", sum);

    return 0;
}
