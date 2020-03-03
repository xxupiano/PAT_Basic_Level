#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    int tmp;
    scanf("%d %d", &n, &m);
    vector<int> v(n);
    for(int i=1; i<=m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &tmp);
            v[j] += tmp;
        }
    }
    int maxn = 0;
    for(int i=0; i<n; i++) {
        if(maxn<v[i]) maxn = v[i];
    }
    printf("%d\n", maxn);
    int flag = 0;
    for(int i=0; i<n; i++) {
        if(v[i]==maxn) {
            printf("%s%d", flag?" ":"", i+1);
            flag = 1;
        }
    }
    return 0;
}
