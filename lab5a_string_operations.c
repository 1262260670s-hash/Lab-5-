#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[40], str2[20];
    int ch, i, j;

    do {
        printf("\tMENU\n");
        printf("-----------------------------\n");
        printf("1: Find Length of String\n");
        printf("2: Concatenate Strings\n");
        printf("3: Copy Strings\n");
        printf("4: Compare Strings\n");
        printf("5: Exit\n");
        printf("-------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter String: ");
                scanf("%19s", str1);
                i = strlen(str1);
                printf("Length of String: %d\n\n", i);
                break;

            case 2:
                printf("Enter first String: ");
                scanf("%19s", str1);
                printf("Enter second string: ");
                scanf("%19s", str2);
                strcat(str1, str2);
                printf("String After Concatenation: %s\n\n", str1);
                break;

            case 3:
                printf("Enter String 1: ");
                scanf("%19s", str1);
                printf("Enter String 2: ");
                scanf("%19s", str2);
                printf("\nString Before Copied:\nString1=\"%s\", String2=\"%s\"\n", str1, str2);
                strcpy(str2, str1);
                printf("-------------------------------------\n");
                printf("\"We are copying String 1 to String 2\"\n");
                printf("-------------------------------------\n");
                printf("String After Copied:\nString 1=\"%s\", String 2=\"%s\"\n\n", str1, str2);
                break;

            case 4:
                printf("Enter First String: ");
                scanf("%19s", str1);
                printf("Enter Second String: ");
                scanf("%19s", str2);
                j = strcmp(str1, str2);
                if (j == 0) {
                    printf("Strings are same\n\n");
                } else {
                    printf("Strings are not same\n\n");
                }
                break;

            case 5:
                exit(0);
                break;

            default:
                printf("Invalid Input. Please Enter valid Input.\n\n");
        }
    } while (ch != 5);

    return 0;
}
