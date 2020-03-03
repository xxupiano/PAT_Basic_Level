#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
vector<int> v(10000+5);
int main()
{
    int n;
    scanf("%d", &n);
    int tmp;
    for(int i=1; i<=n; i++) {
        scanf("%d", &tmp);
        v[abs(tmp-i)]++;
    }
    for(int i=n-1; i>=0; i--) {
        if(v[i]>=2) printf("%d %d\n", i, v[i]);
    }
    return 0;
}
