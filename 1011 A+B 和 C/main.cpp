#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        long long a, b, c;
        cin >> a>> b>> c;
        printf("Case #%d: %s\n", i+1, a+b>c?"true":"false");
    }
}
