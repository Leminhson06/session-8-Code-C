#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int maxElement = arr[0];
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat trong mang la: %d\n", maxElement);

    return 0;
}
