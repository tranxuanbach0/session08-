#include <stdio.h>

int main() {
    int mang[4][4] = {
        {3, 5, 7, 2},
        {1, 9, 4, 6},
        {8, 2, 0, 5},
        {6, 11, 3, 7}
    };
    int so_hang = 4, so_cot = 4;
    int max = mang[0][0];

    for (int i = 0; i < so_hang; i++) {
        for (int j = 0; j < so_cot; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j];
            }
        }
    }

    printf("phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
