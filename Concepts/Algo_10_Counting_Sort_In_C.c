#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maximumNum(int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}

void countSort(int *arr, int n) {
    int i, j;
    int m = maximumNum(arr, n);

    int *A = (int *)calloc(m + 1, sizeof(int));
    for (i = 0; i <= m; i++) {
        A[i] = 0;
    }

    for (i = 0; i < n; i++) {
        A[arr[i]]++;
    }

    i = 0;
    j = 0;
    while (i <= m) {
        if (A[i] > 0) {
            arr[j] = i;
            j++;
            A[i]--;
        } else {
            i++;
        }
    }

    free(A);
}

int main() {
    int arr[] = { 2, 9, 7, 6, 5, 4, 7 };
    int n = sizeof(arr) / sizeof(int);

    printf("Before Sorting: ");
    display(arr, n);

    printf("After Sorting: ");
    countSort(arr, n);
    display(arr, n);

    return 0;
}
