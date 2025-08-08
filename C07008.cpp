#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int dt[10004], cnt = 0;

void solve(char c[]){
	for(int i=0; i<strlen(c); i++){
		if(isdigit(c[i])){
			int tmp = 0;
			while(c[i] && c[i] != '*'){
				tmp = tmp * 10 + c[i] - '0';
				i++;
			}
			i += 3;
			int mu = 0;
			while(c[i] && c[i] != ' '){
				mu = mu * 10 + c[i] - '0';
				i++;
			}
			dt[mu] += tmp;
		}
	}
} 

int main() {
	int t, n;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s1[50000], s2[50000];
		gets(s1);
		gets(s2);
		memset(dt, 0, sizeof(dt));
		cnt = 0;
		solve(s1);
		solve(s2);
		for(int i=10000; i>=0; i--){
			if(dt[i]) cnt++;
		}
		for(int i=10000; i>=0; i--){
			if(dt[i]){
				print("%d*x^%d", dt[i], i);
				cnt--;
				if(cnt) print(" + ");
			}
		}
		print("\n");
	}
}
