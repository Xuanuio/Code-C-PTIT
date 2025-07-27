#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	char s[102];
	int a[102] = {0}, m = 0;
	scanf("%s", s);
	int n = strlen(s), l = 0;
	if(n % 3 == 1) l = 1;
	else if(n % 3 == 2){
		if(s[1] == '1') l = 3;
		else l = 2;
	}
	for(int i=n-1; i>=n%3; i -= 3){
		int num = (s[i] - '0') * 1 + (s[i-1] - '0') * 2 + (s[i-2] - '0') * 4;
		a[m] = num;
		m++;
	}
	if(l) print("%d", l);
	for(int i=m-1; i>=0; i--) print("%d", a[i]);
}
