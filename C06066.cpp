#include <stdio.h>
#include <string.h>

#define print printf

void add(const char *a, const char *b, char *out) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;
    char tmp[210];
    int k = 0;
    while (i >= 0 || j >= 0 || carry) {
        int da = (i >= 0) ? a[i] - '0' : 0;
        int db = (j >= 0) ? b[j] - '0' : 0;
        int s = da + db + carry;
        tmp[k++] = (char)('0' + (s % 10));
        carry = s / 10;
        i--; j--;
    }
    // reverse tmp -> out
    for (int t = 0; t < k; t++) out[t] = tmp[k - 1 - t];
    out[k] = '\0';
}

int main() {
    char s[205];
    if (scanf("%204s", s) != 1) return 0;

    while (strlen(s) > 1) {
        int n = strlen(s);
        int half = n / 2;
        char a[205], b[205], sum[210];

        if (half > 0) {
            strncpy(a, s, half);
            a[half] = '\0';
        } else {
            a[0] = '\0';
        }

        strcpy(b, s + half);

        add(a, b, sum);
        print("%s\n", sum);

        strcpy(s, sum);
    }
}
