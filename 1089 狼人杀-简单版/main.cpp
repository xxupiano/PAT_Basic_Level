#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) scanf("%d", &v[i]);
    for(int i=1; i<=n; i++) {
        for(int j=i+1; j<=n; j++) { //分别假设i,j是狼人
            vector<int> lie, a(n+1, 1);//a数组为1是好人，为-1是狼人
            a[i] = a[j] = -1;
            for(int k = 1; k<=n; k++)//分别判断k所说的
                if(v[k]*a[abs(v[k])]<0) lie.push_back(k);
            if(lie.size()==2 && a[lie[0]]+a[lie[1]]==0) {
                printf("%d %d", i, j);
                return 0;
            }

        }
    }
    printf("No Solution");
    return 0;
}
