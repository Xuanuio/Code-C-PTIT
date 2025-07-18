#include <stdio.h>

int main() {
    int n, a[105];
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Buoc 0: %d\n", a[0]);

    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;

        printf("Buoc %d:", i);
        for(int k = 0; k <= i; k++) {
            printf(" %d", a[k]);
        }
        printf("\n");
    }
}

