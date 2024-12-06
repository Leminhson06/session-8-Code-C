#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int target; 
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &target);

    int found = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1; 
            break;     
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
