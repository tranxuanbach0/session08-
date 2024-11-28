#include <stdio.h>

int main() {
    int mang[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int so_hang = 4, so_cot = 4;
    int tong = 0;

    for (int i = 0; i < so_hang; i++) {
        for (int j = 0; j < so_cot; j++) {
            if (i == 0 || i == so_hang - 1 || j == 0 || j == so_cot - 1) {
                tong += mang[i][j];
            }
        }
    }

    printf("tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);

    return 0;
