#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int first, k, n, temp;
    cin >> first >> n >> k;
    int data[100005], next[100005], list[100005];
    for(int i=0; i<n; i++) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int sum = 0;//不一定所有的输入节点都是有用的
    while(first!=-1) {
        list[sum++] = first;//list按顺序存地址
        first = next[first];
    }
    for(int i=0; i<(sum - sum%k); i+=k)
        reverse(begin(list)+i, begin(list)+i+k);//对链表中的地址进行反转
    for(int i=0; i<sum-1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i+1]);
    printf("%05d %d -1", list[sum-1], data[list[sum-1]]);
    return 0;
}
