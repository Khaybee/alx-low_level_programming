#include <stdio.h>

int is_palindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

void save_result_to_file(int result) {
    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", result);
        fclose(file);
    } else {
        printf("Unable to open file for writing.\n");
    }
}

int main() {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    printf("Largest palindrome: %d\n", largest_palindrome);
    save_result_to_file(largest_palindrome);

    return 0;
}
