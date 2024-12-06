#include <stdio.h>

int main() {
    // Khai báo và gán giá trị cho ma trận vuông
    int matrix[4][4] = {
        {2, 5, 7, 9},
        {4, 3, 8, 1},
        {6, 10, 1, 2},
        {8, 12, 14, 4}
    };
    int n = 4; // Kích thước của ma trận (n x n)

    // In các phần tử trên đường chéo phụ và tính tổng
    int sum = 0;
    printf("Cac phan tu tren duong cheo phu la:\n");
    for (int i = 0; i < n; i++) {
        int j = n - 1 - i; // Chỉ số cột của đường chéo phụ
        printf("%d ", matrix[i][j]); // Phần tử trên đường chéo phụ
        sum += matrix[i][j];        // Cộng vào tổng
    }

    // In tổng các phần tử trên đường chéo phụ
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}
