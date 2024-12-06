#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 5, 3},
        {9, 2, 6},
        {7, 8, 4}
    };
    int rows = 3, cols = 3; 
    int max = matrix[0][0]; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
