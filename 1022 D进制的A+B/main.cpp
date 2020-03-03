#include <iostream>
using namespace std;
int main() {
    int a, b, d;
    scanf("%d%d%d", &a, &b, &d);
    int t = a + b;
    if(t == 0) {
        printf("0");
        return 0;
    }
    int s[100];
    int i=0;
    while(t!=0) {
        s[i++] = t%d;
        t /= d;
    }
    for(int j=i-1; j>=0; j--) printf("%d", s[j]);
    return 0;
}
