#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int c1, c2;
    scanf("%d %d", &c1, &c2);
    int n = (c2-c1+50) / 100;
    int hour = n / 3600;
    n %= 3600;
    int minute = n / 60;
    int second = n % 60;
    printf("%02d:%02d:%02d", hour, minute, second);
    return 0;
}
