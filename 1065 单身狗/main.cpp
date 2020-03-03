/*分析： 设立数组couple[i] = j表示i的对象是j～一开始先设置为都是-1，
设立数组isExist表示某人的对象是否来到了派对上～接收数据的时候，
对于每一对a和b，将couple的a设置为b，b设置为a，表示他俩是一对～对于每一个需要判断的人，将其存储在guest数组里面，
如果它不是单身的（也就是如果它的couple[guest[i]] != -1）那么就将它对象的isExist设置为1，
表示他对象的对象（也就是他自己）来到了派对～这样所有isExist不为1的人，
对象是没有来到派对的～把所有的人遍历后插入一个集合set里面，set的size就是所求的人数，
set里面的所有数就是所求的人的递增排列～
*/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int n, a, b, m;
    scanf("%d", &n);
    vector<int> couple(100000, -1);
    for(int i=0; i<n; i++) {
        scanf("%d%d", &a, &b);
        couple[a]=b;
        couple[b]=a;
    }
    scanf("%d", &m);
    vector<int> guest(m), isExist(100000);
    for(int i=0; i<m; i++) {
        scanf("%d", &guest[i]);
        if(couple[guest[i]]!=-1)
            isExist[couple[guest[i]]] = 1;
    }
    set<int> s;
    for(int i=0; i<m; i++) {
        if(!isExist[guest[i]])
            s.insert(guest[i]);
    }
    printf("%d\n", s.size());
    for(auto it = s.begin(); it!=s.end(); it++) {
        if(it != s.begin()) printf(" ");
        printf("%05d", *it);
    }

    return 0;
}
