#include <stdio.h>

#define print printf

struct ps {
	int tu, mau;
};

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

void rg(struct ps *a) {
	int g = gcd(a->tu, a->mau);
	a->tu /= g;
	a->mau /= g;
}

int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

int main() {
	int t;
	scanf("%d", &t);
	for (int k = 1; k <= t; k++) {
		struct ps p1, p2;
		scanf("%d %d %d %d", &p1.tu, &p1.mau, &p2.tu, &p2.mau);
		
		rg(&p1);
		rg(&p2);

		int mc = lcm(p1.mau, p2.mau);
		
		p1.tu = p1.tu * (mc / p1.mau);
		p1.mau = mc;
		p2.tu = p2.tu * (mc / p2.mau);
		p2.mau = mc;

		print("Case #%d:\n", k);
		print("%d/%d %d/%d\n", p1.tu, p1.mau, p2.tu, p2.mau);

		struct ps p3;
		p3.tu = p1.tu + p2.tu;
		p3.mau = mc;
		rg(&p3);
		print("%d/%d\n", p3.tu, p3.mau);

		struct ps p4;
		p4.tu = p1.tu;
		p4.mau = p2.tu;
		rg(&p4);
		print("%d/%d\n", p4.tu, p4.mau);
	}
}
