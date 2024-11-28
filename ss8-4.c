#include <stdio.h>

int main() {
    int array[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int minus = array[0][0];
    int i, j; 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (array[i][j] > minus) {
                minus = array[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", minus);

    return 0;
}

