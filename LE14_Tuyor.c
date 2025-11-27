/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("student_records.txt", "a");
    int studentNumber;
    char name[50];
    char section[50];
    
    while (1) {
        printf("Enter Student Number: ");
        scanf("%d", &studentNumber);
    
        printf("Enter Complete Name: ");
        getchar();
        fgets(name, sizeof(name), stdin);
        
        printf("Enter Section: ");
        fgets(section, sizeof(section), stdin);
        
        fprintf(fptr, "ID Number: %d\n", studentNumber);
        fprintf(fptr, "Complete Name: %s", name);
        fprintf(fptr, "Section: %s\n", section);
     
        
        printf("\nRecord added and saved successfully.\n\n");
        
        int input;
        printf("Add another student? [Enter 1 for Yes, 0 for No]\n");
        scanf("%d", &input);
        getchar();
        if (input == 0) {
            printf("All student records have been saved.");
            break;
        }
    }
    
    fclose(fptr);
    return 0;
}
