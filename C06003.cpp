#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[200][200], s[200];
		gets(s);
		n = 0;
		char *word = strtok(s, " ");
		while(word != NULL){
			strcpy(a[n], word);
			n++;
			word = strtok(NULL, " ");
		}
		print("%d\n", n);
	}
}
