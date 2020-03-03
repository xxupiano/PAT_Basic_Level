#include <iostream>
#include <cstdio>
using namespace std;

int a[1000+5] = {0};

int main()
{
    int n, num, tmp, score;
    scanf("%d", &n);
    while(n--) {
        scanf("%d-%d %d", &num, &tmp, &score);
        a[num] += score;
    }
    int maxn = 0, maxi = 0;
    for(int i=0; i<1000+5; i++) {
        if(a[i]>maxn) {
            maxn = a[i];
            maxi = i;
        }
    }
    printf("%d %d", maxi, maxn);
    return 0;
}
