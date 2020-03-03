#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0.0, temp;
    for(int i=1; i<=n; i++) {
        cin >> temp;
        sum += temp*i*(n-i+1);
    }
    printf("%.2f", sum);
    return 0;
}
