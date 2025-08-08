#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

struct Poker{
	char ten[100];
	int p, k;
};

#define Poker struct Poker

int main() {
	int n, m;
	scanf("%d", &n);
	Poker a[100];
	int Max = -1, cnt = 0;
	char s[100];
	for(int i=0; i<n; i++){
		getchar();
		gets(a[i].ten);
		scanf("%d %d", &a[i].p, &a[i].k);
		m = 0;
		while(a[i].k >= a[i].p){
			cnt++;
			m++;
			a[i].k -= a[i].p;
			a[i].k += 2;
		}
		if(m > Max){
			Max = m;
			strcpy(s, a[i].ten);
		}
	}
	print("%d\n%s", cnt, s);
}
