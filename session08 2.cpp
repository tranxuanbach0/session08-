#include <stdio.h>

int main() {
	   int mang[] = {10, 20, 30, 40, 50};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int phan_tu, vi_tri = -1;
      printf("nhap phan tu can kiem tra: ");
    scanf("%d", &phan_tu);
       for (int i = 0; i < kich_thuoc; i++) {
        if (mang[i] == phan_tu) {
            vi_tri = i;
               break;
        }
    } 
    if (vi_tri != -1) {
        printf("vi tri phan tu trong mang la: %d\n", vi_tri);
    } else {
        printf("phan tu ko ton tai.\n");
    }

    return 0;
}
