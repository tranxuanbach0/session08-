#include <stdio.h>

int main() {
	    int mang[] = {10, 20, 30, 40, 50};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
      printf("cac phan tu cuoi trong mang tu cuoi:\n");
    for (int i = kich_thuoc - 1; i >= 0; i--) {
        printf("%d\n", mang[i]);
    }

    return 0;
}
    

