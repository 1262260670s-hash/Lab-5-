#include <stdio.h>
#include <string.h>

int main() {
    char model1[50], model2[50];

    printf("Enter first machine model: ");
    scanf("%49s", model1);

    printf("Enter second machine model: ");
    scanf("%49s", model2);

    if (strcmp(model1, model2) == 0) {
        printf("Both Machine models are the same. ");
    } else {
        printf("Machine models are different. ");
    }

    return 0;
}
