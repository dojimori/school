#include<stdio.h>
#include <stdlib.h>
int main() {
    FILE *fptr = fopen("students.txt", "w");
    
    if (!fptr) {
        printf("error opening file\n");
        return 1;
    }
    
    
    char name[50];
    char section[50];
    printf("Complete Name: ")        ;
    fgets(name, sizeof(name), stdin);
    printf("Section: ");
    fgets(section, sizeof(section), stdin);
    
    fprintf(fptr, "Complete Name: %s", name);
    fprintf(fptr, "Section: %s", section);
    fclose(fptr);
    
    printf("Information successfully saved to students.txt\n\n");
    
    fptr = fopen("students.txt", "r");
    char ch;
    
    while (( ch = getc(fptr)) != EOF) {
        printf("%c", ch);
    }
        

    return 0;
    
}
