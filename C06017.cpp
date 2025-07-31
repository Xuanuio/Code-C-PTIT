#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define print printf

int cmp(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    char s1[102], s2[102];
    char a[50][50], b[50][50], c[50][50];
    int n = 0, m = 0, l = 0;

    gets(s1);
    gets(s2);

    char *word1 = strtok(s1, " ");
    while (word1 != NULL) {
        strcpy(a[n++], word1);
        word1 = strtok(NULL, " ");
    }

    char *word2 = strtok(s2, " ");
    while (word2 != NULL) {
        strcpy(b[m++], word2);
        word2 = strtok(NULL, " ");
    }

    for (int i = 0; i < n; i++) {
        int ok = 1;
        for (int j = 0; j < m; j++) {
            if (strcmp(a[i], b[j]) == 0) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            strcpy(c[l++], a[i]);
        }
    }

    qsort(c, l, sizeof(c[0]), cmp);

    if (l > 0) print("%s ", c[0]);
    for (int i = 1; i < l; i++) {
        if (strcmp(c[i], c[i - 1]) != 0) {
            print("%s ", c[i]);
        }
    }
}
