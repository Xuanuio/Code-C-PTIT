#include <stdio.h>
#include <string.h>

#define print printf

struct p {
	int p1, p2;
};

int main() {
	char s[52];
	scanf("%s", s);
	struct p am[26];
	for (int i = 0; i < 26; i++) {
		am[i].p1 = am[i].p2 = -1;
	}
	for (int i = 0; i < 52; i++) {
		int idx = s[i] - 'A';
		if (am[idx].p1 == -1) am[idx].p1 = i;
		else am[idx].p2 = i;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		int a = am[i].p1;
		int b = am[i].p2;
		if (a > b) { 
			a ^= b;
			b ^= a;
			a ^= b;
		}
		for (int j = i + 1; j < 26; j++) {
			int c = am[j].p1;
			int d = am[j].p2;
			if (c > d) { 
				c ^= d;
				d ^= c;
				c ^= d;
			}
			if ((a < c && c < b && (d < a || d > b)) ||
				(a < d && d < b && (c < a || c > b))) {
				cnt++;
			}
		}
	}
	print("%d", cnt);
}
