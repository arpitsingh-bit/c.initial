#include <stdio.h>


int reverse_number(int n, int rev) {

    if (n == 0) {
        return rev;
    }
    

    return reverse_number(n / 10, (rev * 10) + (n % 10));
}

int main() {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    

    int reversed = reverse_number(num, 0);
    
    printf("Reversed number is: %d\n", reversed);
    
    return 0;
}