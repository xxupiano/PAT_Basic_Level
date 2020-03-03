#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    string str;
    string pinyin[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    cin >> str;
    int len = str.size();
    int sum = 0;
    for(int i = 0; i < len; i++) {
        sum += str[i] - '0';
    }

    vector<int> ans;
    while(sum) {
        ans.push_back(sum % 10);
        sum /= 10;
    }

    for(int i = ans.size() - 1; i > 0; i--)
    {
        cout << pinyin[ans[i]] << " ";
    }
    cout << pinyin[ans[0]];
    return 0;
}
