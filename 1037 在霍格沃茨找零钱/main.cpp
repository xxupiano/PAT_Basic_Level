#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int pg,ps,pk,ag,as,ak;
    int rg,rs,rk;
    scanf("%d.%d.%d", &pg, &ps, &pk);
    scanf("%d.%d.%d", &ag, &as, &ak);
    int p, a;
    p = 17*29*pg + 29*ps + pk;
    a = 17*29*ag + 29*as + ak;
    int flag = 0;
    if(a<p) flag = 1;
    int r = abs(a-p);
    rg = r/(17*29);
    r = r - rg*17*29;
    rs = r / 29;
    rk = r-rs*29;
    printf("%s%d.%d.%d", flag?"-":"", rg, rs, rk);
    return 0;
}
