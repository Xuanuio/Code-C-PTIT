#include<stdio.h>
#include<math.h>

#define print printf

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        double x1, y1, x2, y2, x3, y3, a, b, c, s, p;
        scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b) print("INVALID\n");
        else{
            p = (a + b + c) / 2;
            s = sqrt(p * (p - a) * (p - b) * (p - c));
            print("%.2lf\n", s);
        }
    }
}