#include <stdio.h>

int recursiveMaximum(int array[], int size) {
    if (size == 1) {  
        return array[0];
    }
    int max = recursiveMaximum(array, size - 1);
    return (array[size - 1] > max) ? array[size - 1] : max;
}

int main() {
    int array[] = { 5, 12, 3, 7, 18, 9 };
    int size = sizeof(array) / sizeof(array[0]);

    printf("�}�C���e: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int max = recursiveMaximum(array, size);
    printf("�}�C�����̤j��: %d\n", max);

    return 0;
}
