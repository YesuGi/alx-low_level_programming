#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci numbers under 4,000,000
 * Return: 0 if succesfull
 */

int fibonacci_sum(int limit) {
    int sum = 0;
    int a = 1, b = 2;
    
    while (a <= limit) {
        if (a % 2 == 0) {
            sum += a;
        }
        
        int temp = a;
        a = b;
        b = temp + b;
    }
    
    return sum;
}

int main() {
    int limit = 4000000;
    
    int result = fibonacci_sum(limit);
    
    printf("%d\n", result);
    
    return 0;
}
