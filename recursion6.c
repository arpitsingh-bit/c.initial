#include <stdio.h>
int reverse_number(int n, int rev) {

    if (n == 0) {
        return rev;
    }

    return reverse_number(n / 10, (rev * 10) + (n % 10));
}
int is_palindrome(int num) {

    int reversed = reverse_number(num, 0);
    if (num == reversed) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (is_palindrome(num) == 1) {
        printf("Entered number %d is a palindrome.\n", num);
    } else {
        printf("Entered number %d is not a palindrome.\n", num);
    } 
    return 0;
}