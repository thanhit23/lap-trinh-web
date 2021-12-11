#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    int array[50];
    int maxNumber = 0;
    int i, j, n;
        printf("Moi nhap so luong phan tu: ");
        scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nNhap array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    // so lon nhat trong mang
    // for (i = 0; i < n; i++) {
    //     if (array[i] > maxNumber) {
    //         maxNumber = array[i];
    //     }
    // }
    // printf("So lon nhat trong mang la: %d", maxNumber);

    // int minNumber = array[0];
    // for (i = 0; i < n; i++) {
    //     if (array[i] < minNumber) {
    //         minNumber = array[i];
    //     }
    // }
    // printf("So nho nhat trong mang la: %d ", minNumber);
    // for (i = 0; i < n; i++) {
    //     if (array[i] == minNumber) {
    //         printf("vi tri la: %d", i+1);
    //     }
    // }

    int dem, sn;
    float cp;
    for (i = 0; i < n; i++) {
        cp = sprt(array[i]);
        if (cp == sn) {
            dem++;
        }
    }
    printf("co %d lan xuat hien");






}