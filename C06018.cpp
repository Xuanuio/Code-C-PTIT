#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

void sorts(char a[][200], int n){
	char tmp[200];
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			int cmp = strcmp(a[i], a[j]);
			if(cmp > 0){
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
	getchar();
	while(t--){
		char s1[202], s2[202], b[200][200], a[200][200];
		int n = 0, m = 0;
		gets(s1);
		gets(s2);
		char *w1 = strtok(s1, " ");
		while(w1 != NULL){
			strcpy(a[n], w1);
			n++;
			w1 = strtok(NULL, " ");
		}
		sorts(a, n);
		char *w2 = strtok(s2, " ");
		while(w2 != NULL){
			strcpy(b[m], w2);
			m++;
			w2 = strtok(NULL, " ");
		}
		for(int i=0; i<n; i++){
			int f = 0;
			for(int j=0; j<m; j++){
				if(strcmp(a[i], b[j]) == 0){
					f = 1;
					break;
				}
			}
			if(!f){
				print("%s ", a[i]);
				strcpy(b[m], a[i]);
				m++;
			}
		}
		print("\n");
	}
}
