#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while(t--) {
        char line[1000];
        fgets(line, sizeof(line), stdin);

        int c = 0, l = 0, x;
        char *token = strtok(line, " \n");

        while(token != NULL) {
            x = atoi(token);
            if(x % 2 == 0) c++;
            else l++;
            token = strtok(NULL, " \n");
        }

        int total = c + l;
        if ((total % 2 == 1 && l > c) || (total % 2 == 0 && c > l))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

