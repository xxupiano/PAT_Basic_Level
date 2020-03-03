#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double ans, t1, t2;
    scanf("%d", &n);
    scanf("%lf %lf", &t1, &t2);
    ans = sqrt(t1*t1+t2*t2);
    for(int i=1; i<n; i++) {
        scanf("%lf %lf", &t1, &t2);
        double temp;
        temp = sqrt(t1*t1+t2*t2);
        if(temp>ans) ans = temp;
    }
    printf("%.2f", ans);
    return 0;
}
