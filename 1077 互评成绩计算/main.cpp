#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;//分组数，满分
    int teacher, maxn, minn, tmp, maxi, mini;
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) {
        vector<int> v;
        for(int j=1; j<=n; j++) {
            if(j==1) {
                scanf("%d", &teacher);
            }
            else {
                scanf("%d", &tmp);
                if(0<=tmp && tmp <= m) v.push_back(tmp);
            }
        }
        maxn = minn = v[0];
        maxi = mini = 0;
        for(int j=1; j<v.size(); j++) {
            if(maxn<v[j]) {maxn = v[j]; maxi = j;}
            if(minn>v[j]) {minn = v[j]; mini = j;}
        }
        int sum = 0;
        for(int j=0; j<v.size(); j++) {
            if(j!=maxi && j!=mini) sum += v[j];
        }
        double g1;
        g1 = sum*1.0/(v.size()-2);
        int average = floor((g1+teacher)/2 + 0.5);
        printf("%d\n", average);
    }
    return 0;
}
