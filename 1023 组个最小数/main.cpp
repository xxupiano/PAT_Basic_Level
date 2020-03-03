#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int a[10];
    for(int i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    int flag = 0;
    for(int i=1; i<10; i++) {
        if(a[i]!=0) {
            flag = i;
            break;///找到第一个存在且最小的数
        }
    }

    printf("%d", flag);
    for(int i=1; i<=a[0]; i++) printf("0");
    for(int i=1; i<=a[flag]-1; i++) printf("%d", flag);
    for(int i=flag+1; i<10; i++) {
        for(int j=1; j<=a[i]; j++) printf("%d", i);
    }
}
