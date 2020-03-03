#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

vector<int> v(3);//字母、数字、小数点

int main()
{
    int n;
    scanf("%d", &n);
    string s;
    getchar();
    while(n--) {
        getline(cin, s);
        if(s.length()<6) {
            cout << "Your password is tai duan le." << endl;
            continue;
        }
        bool flag = true;
        for(int i=0; i<s.length(); i++) {
            if(isalpha(s[i])) v[0]++;
            else if(isdigit(s[i])) v[1]++;
            else if(s[i]=='.') v[2]++;
            else {
                cout << "Your password is tai luan le." << endl;
                flag = false;
                break;
            }
        }
        if(flag) {
            if(v[0]>0 && v[1]==0) cout << "Your password needs shu zi." << endl;
            else if(v[0]==0 && v[1]>0) cout << "Your password needs zi mu." << endl;
            else if(v[0]>0 && v[1]>0) cout << "Your password is wan mei." << endl;
        }
        v[0]=v[1]=v[2]=0;
    }
    return 0;
}
