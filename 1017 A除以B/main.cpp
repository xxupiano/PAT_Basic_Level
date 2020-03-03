#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int b, tmp = 0, t = 0;
    cin >> s >> b;
    for(int i=0; i<s.length(); i++) {
        t = (tmp*10 + s[i]-'0') / b;
        if(s.length()>1 && i==0 && t==0);
        else cout << t;
        tmp = (tmp*10 + s[i] - '0') % b;
    }

    cout << " " << tmp;

    return 0;
}
