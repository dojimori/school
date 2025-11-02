#include <stdio.h>
#include <ctype.h>
int main() {
    // Part 1
    int total_numbers;

    printf("Enter number of elements in the array: ");
    scanf("%d", &total_numbers);

    printf("Enter %d elements\n", total_numbers);

    int numbers[total_numbers]; 
        
    for (int i = 0; i < total_numbers; i++) {
        scanf("%d", &numbers[i]);

    }

    int largest_number = numbers[0];
    for (int i = 1; i < total_numbers; i++) {
        int current_value = numbers[i];

        if (current_value > largest_number) {
            largest_number = current_value; 
        }

    }

    printf("Largest number is: %d", largest_number);


    // Part 2 
    char string[50];
    int vowels_count = 0;

    getchar();
    printf("\nEnter a string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < sizeof(string); i++) {
        char current_char = towlower(string[i]);
        if (
            current_char == 'a' ||
            current_char == 'e' ||
            current_char == 'i' ||
            current_char == 'o' ||
            current_char == 'u'
        ) {
            vowels_count++;
        }
    }

    printf("The number of vowels in the string: %d", vowels_count);

    return 0;
}