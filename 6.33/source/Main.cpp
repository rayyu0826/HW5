#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; 
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; 
    }
    else if (array[mid] > key) {
        return binarySearch(array, start, mid - 1, key); 
    }
    else {
        return binarySearch(array, mid + 1, end, key); 
    }
}

int main() {
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; 
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("請輸入要搜尋的數字: ");
    scanf_s("%d", &key);

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("數字 %d 在陣列中的索引為: %d\n", key, result);
    }
    else {
        printf("數字 %d 不在陣列中。\n", key);
    }
    return 0;
}
