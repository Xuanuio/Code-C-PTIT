#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int cmp(char a[20], char b[20]){
	char ab[40], ba[40];
	strcpy(ab, a);
    strcat(ab, b);
    strcpy(ba, b);
    strcat(ba, a);
    return strcmp(ab, ba); 
}

void sorts(char a[][20], int n){
	char tmp[20];
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			int cmp1 = cmp(a[i], a[j]);
			if(cmp1 > 0){
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n); 
		getchar();
		char s[1500], a[20][20];
		gets(s);
		char *w = strtok(s, " ");
		int m = 0;
		while(w != NULL){
			strcpy(a[m], w);
			m++;
			w = strtok(NULL, " ");
		}
		sorts(a, n);
		for(int i=0; i<n; i++){
			print("%s", a[i]);
		}
		print("\n");
	}
}
