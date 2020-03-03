#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> v(n);
    for(int i=0; i<n; i++)
        scanf("%d", &v[i]);
    m %= n;
    if(m) {
        reverse(v.begin(), v.begin()+n);
        reverse(v.begin(), v.begin()+m);
        reverse(v.begin()+m, v.begin()+n);
    }
    for(int i=0; i<n-1; i++)
        printf("%d ", v[i]);
    printf("%d", v[n-1]);
    return 0;
}
