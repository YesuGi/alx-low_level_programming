#include <stdio.h>

/**
 * main - prints fibonacci sequence
 * Return: 0 if succesfull
 */

void print_fibonacci_sequence(int n) {

    int a = 1, b = 2;
    int count = 2; 

    printf("%d, %d, ", a, b);
    
    while (count < n) {

        int next = a + b;
        
        printf("%d", next);
        
        if (count != n - 1) {
            printf(", ");
        }
        
        a = b;
        b = next;
        count++;
    }
    
    printf("\n");
}

int main() {
    int n = 98;
    
    print_fibonacci_sequence(n);
    
    return 0;
}
