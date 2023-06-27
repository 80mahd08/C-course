#include <stdio.h>

void forEach(int arr[], int size, void (*callback)(int)) {
    for (int i = 0; i < size; i++) {
        callback(arr[i]);
    }
}

void printElement(int element) {
    element++;
    printf("%d ", element);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements: ");
    forEach(numbers, size, printElement);

    return 0;
}
