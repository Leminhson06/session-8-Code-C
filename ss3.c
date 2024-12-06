#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao so nguyen (kich thuoc ma tran vuong): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc ma tran phai lon hon 0.\n");
        return 1; 
    }

    int matrix[n][n];

    printf("Nhap gia tri cho cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa tran vuong vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
