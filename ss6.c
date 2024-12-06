#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3; 
    int total;
    int sum = 0;
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];        
    }

    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}
