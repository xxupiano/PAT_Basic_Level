#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n, m;//学生人数，判断题数量
    scanf("%d%d", &n, &m);
    vector<int> score(m), ans(m);
    for(int i=0; i<m; i++) {scanf("%d", &score[i]);}
    for(int i=0; i<m; i++) {scanf("%d", &ans[i]);}
    int temp = 0;
    for(int i=0; i<n; i++) {
        int total = 0;
        for(int j=0; j<m; j++) {
            scanf("%d", &temp);
            if(temp==ans[j]) total += score[j];
        }
        printf("%d\n", total);
    }
    return 0;
}
