#include <iostream>
#include <algorithm>
#include <set>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    set<int> s;
    int temp, total = 0;

    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        while(temp) {
            total += temp%10;
            temp /= 10;
        }
        s.insert(total);
        total = 0;
    }
    printf("%d\n", s.size());
    bool flag = false;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        printf("%s%d", flag==true?" ":"", *it);
        flag = true;
    }
    return 0;
}
