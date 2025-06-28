#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("So lon nhat: %d\n", findMax(arr, n));
    return 0;
}
