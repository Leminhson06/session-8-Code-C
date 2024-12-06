#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {2, 5, 7, 9},
        {4, 3, 8, 1},
        {6, 10, 1, 2},
        {8, 12, 14, 4}
    };
    int n = 4; // Kích thước của ma trận (n x n)

    // In các phần tử trên đường chéo chính và tính tổng
    int sum = 0;
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); // Phần tử trên đường chéo chính
        sum += matrix[i][i];        // Cộng vào tổng
    }

    // In tổng các phần tử trên đường chéo chính
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}
