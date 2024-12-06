#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Cac phan tu trong mang (tu cuoi ve dau):\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
