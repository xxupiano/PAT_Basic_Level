#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main() {
    int n, p = 0, t = 0;
    string s;
    scanf("%d", &n);
    while(n--) {
        cin >> s;
        map<char, int> m;
        for(int j = 0; j < s.size(); j++) {
            m[s[j]]++;
            if(s[j] == 'P') p = j;
            if(s[j] == 'T') t = j;
        }
        if(m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 &&
           t - p != 1 &&  p * (t-p-1) == s.length()-t-1)
           printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

