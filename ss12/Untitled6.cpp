#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int count[100] = {0}; 
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    
    int hasDuplicates = 0;
    for (int i = 0; i < 100; i++) {
        if (count[i] > 1) {
            printf("phan tu %d xuaat hien %d lan.\n", i, count[i]);
            hasDuplicates = 1;
        }
    }

    if (!hasDuplicates) {
        printf("k co phan tu lap lai.\n");
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, n);

    return 0;
}
