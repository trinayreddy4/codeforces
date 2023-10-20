#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *dynamicArray = (int *)calloc(n,sizeof(int));
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &dynamicArray[i]);
    }
	printf("You entered the following integers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");
    free(dynamicArray);

    return 0;
}

