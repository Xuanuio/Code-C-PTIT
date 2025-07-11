#include <stdio.h>

#define MAX 1001

int main() {
    int n;
    scanf("%d", &n);

    int a[100];
    int count[MAX] = {0};
    int printed[MAX] = {0}; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (count[a[i]] > 1 && !printed[a[i]]) {
            dem++;
            printed[a[i]] = 1;
        }
    }

    printf("%d\n", dem);
    for (int i = 0; i < n; i++) {
        if (count[a[i]] > 1 && printed[a[i]]) {
            printf("%d ", a[i]);
            printed[a[i]] = 0; 
        }
    }

}
