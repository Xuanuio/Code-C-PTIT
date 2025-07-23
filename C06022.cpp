#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define print printf

void to_lower(char s[]) {
    for (int i = 0; s[i]; i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    for (int k = 1; k <= t; k++) {
        char s1[202], s2[22], a[202][202];
        gets(s1);
		gets(s2);
        to_lower(s2);
        int n = 0;
        char *word = strtok(s1, " ");
        while (word != NULL) {
            strcpy(a[n++], word);
            word = strtok(NULL, " ");
        }
        print("Test %d: ", k);
        for (int i = 0; i < n; i++) {
            char tmp[202];
            strcpy(tmp, a[i]);
            to_lower(tmp);
            if (strcmp(s2, tmp) != 0) {
                print("%s ", a[i]);
            }
        }
        print("\n");
    }
}

