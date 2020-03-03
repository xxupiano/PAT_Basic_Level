#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, a[101] = {0};
    scanf("%d", &n);
    int tmp;
    while(n--) {
        scanf("%d", &tmp);
        a[tmp]++;
    }
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &tmp);
        if(i!=1) printf(" ");
        printf("%d", a[tmp]);
    }
    return 0;
}
