#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
using namespace std;

int main()
{
    char t;
    string s, num;
    cin >> t;
    getchar();
    getline(cin, s);
    int cnt = 1;
    if(t=='D') {
        for(int i=0; i<s.length(); i++) {
            if(s[i]>='0' && s[i]<='9') {
                num += s[i];
            } else {
                if(num.length()>0) cnt = stoi(num);
                while(cnt--) cout << s[i];
                cnt = 1;
                num = "";
            }
        }
    }
    else if(s.length()!=0) {
        char pre = s[0];
        for(int i=1; i<s.length(); i++) {
            if(s[i]==pre) {
                cnt++;
            }
            else {
                if (cnt >= 2) printf("%d", cnt);
                printf("%c", pre);
                cnt = 1;
                pre = s[i];
            }
        }
        if(cnt>=2) printf("%d", cnt);
        printf("%c", pre);
    }
    return 0;
}
