#include <stdio.h>

int fibonacci_sum(int limit) {
    int sum = 0;
    int a = 1, b = 2;
    
    while (a <= limit) {
        int temp = a;  // Move the declaration to the beginning of the block
        
        if (a % 2 == 0) {
            sum += a;
        }
        
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
