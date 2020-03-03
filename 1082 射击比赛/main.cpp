#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int maxn = -1, minn = 0x3f3f3f3f;
    string maxid, minid;
    while(n--) {
        string id;
        int x,y;
        cin >> id >> x >> y;
        double tmp = x*x + y*y;
        if(tmp>maxn) {maxn = tmp; maxid = id;}
        if(tmp<minn) {minn = tmp; minid = id;}
    }
    cout << minid << " " << maxid;
    return 0;
}
