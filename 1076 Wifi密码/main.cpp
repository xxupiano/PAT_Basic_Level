#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<char> ans(n);
    for(int i=0; i<n; i++) {
        string str;
        for(int j=0; j<4; j++) {
            cin >> str;
            if(str[2]=='T') ans[i]=str[0];
        }
    }
    vector<int> v(4);
    for(int i=0; i<4; i++) v[i] = i+1;

    for(int i=0; i<n; i++) {
        cout << v[ans[i]-'A'];
    }
    return 0;
}
