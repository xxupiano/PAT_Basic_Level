#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int m;
    scanf("%d", &m);
    while(m--) {
        int k, flag = 0;
        scanf("%d", &k);
        for(int n = 1; n<10; n++) {
            int mul = n*k*k;
            string smul = to_string(mul);
            string sk = to_string(k);
            string smulend = smul.substr(smul.length() - sk.length());
            if(smulend==sk) {
                printf("%d %d\n", n, mul);
                flag = 1;
                break;
            }
        }
        if(flag==0) printf("No\n");
    }
    return 0;
}
