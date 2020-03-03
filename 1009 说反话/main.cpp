#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string t;
    vector<string> a;
    while(cin >> t) a.push_back(t);
    reverse(a.begin(), a.begin()+ a.size());
    cout << a[0];
    for(int i=1; i<a.size(); i++)
        cout << " " << a[i];
}
