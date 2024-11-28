#include <stdio.h>

int main() {
    int n;
        printf("nhap kich thuoc ma tran vuong: ");
    scanf("%d", &n);
        int mang[n][n];
  printf("nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
      printf("\nma tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}
