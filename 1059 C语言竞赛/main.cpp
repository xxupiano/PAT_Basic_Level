#include <iostream>
#include <set>
#include <cmath>
#include <cstdio>
using namespace std;
int ran[10000] = {0};
bool isprime(int a) {
    if(a<=1) return false;
    for(int i=2; i*i<=a; i++) {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    int n, k;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int id;
        scanf("%d", &id);
        ran[id] = i+1;
    }
    scanf("%d", &k);
    set<int> ss;
    for(int i=0; i<k; i++) {
        int id;
        scanf("%d", &id);
        printf("%04d: ", id);
        if(ran[id]==0) {
            printf("Are you kidding?\n");
            continue;
        }
        if(ss.find(id)==ss.end()) ss.insert(id);
        else {
            printf("Checked\n");
            continue;
        }
        if(ran[id]==1) {
            printf("Mystery Award\n");
        }else if(isprime(ran[id])) {
            printf("Minion\n");
        }else {
            printf("Chocolate\n");
        }
    }
    return 0;
}
