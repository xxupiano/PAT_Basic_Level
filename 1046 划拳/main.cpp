#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, cntj=0, cnty=0;
    int a, b, c, d;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(b!=a+c && d!=a+c) continue;
        else if(b==a+c && d==a+c) continue;
        else if(b==a+c && d!=a+c) cnty++;
        else if(b!=a+c && d==a+c) cntj++;
    }
    cout << cntj << " " << cnty;
    return 0;
}
