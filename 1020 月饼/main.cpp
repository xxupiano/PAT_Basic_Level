#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct mooncake {
    float mount, price, unit;
};

bool cmp(mooncake& a, mooncake& b) {
    return a.unit > b.unit;
}

int main() {
    int n, need;
    scanf("%d%d", &n, &need);
    vector<mooncake> a(n);
    for(int i=0; i<n; i++) scanf("%f", &a[i].mount);
    for(int i=0; i<n; i++) {
        scanf("%f", &a[i].price);
        a[i].unit = a[i].price / a[i].mount;
    }
    sort(a.begin(), a.end(), cmp);
    float result = 0.0, total = 0.0;
    for(int i=0; i<n; i++) {
        if(a[i].mount + total <= need) {
            total += a[i].mount;
            result += a[i].price;
        }
        else {
            result += a[i].unit * (need - total);
            break;
        }
    }

    printf("%.2f", result);
    return 0;
}
