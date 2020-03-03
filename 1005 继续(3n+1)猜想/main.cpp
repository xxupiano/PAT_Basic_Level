#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10000];
bool cmp(int a, int b) {return a > b;}

int main() {
    int k, n, flag = 0;
    fill(arr, arr+10000, 0);
    scanf("%d", &k);
    vector<int> v(k);
    for(int i=0; i<k; i++) {
        scanf("%d", &n);
        v[i] = n;
        while(n!=1) {
            if(n&2!=0) n = 3*n+1;
            n /= 2;
            if(arr[n]==1) break;
            arr[n] = 1;
        }
    }

    sort(v.begin(), v.end(), cmp);
    for(auto it = v.begin(); it != v.end(); it++) {
        if(arr[*it]==0) {
            if(flag==1) cout << " ";
            cout << *it;
            flag = 1;
        }
    }
}
