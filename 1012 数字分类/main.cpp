#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> a1, a2, a3, a4, a5;
bool cmp(int x, int y) {return x>y;}


int main() {
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        if(x%5==0  && x%2==0) a1.push_back(x);
        else if(x%5==1) a2.push_back(x);
        else if(x%5==2) a3.push_back(x);
        else if(x%5==3) a4.push_back(x);
        else if(x%5==4) a5.push_back(x);
    }
    int sum = 0;
    int len = a1.size();
    if(len==0) cout << "N ";
    else {
        for(int i=0; i<len; i++)
            sum += a1[i];
        cout << sum << " ";
    }

    len = a2.size();
    if(len==0) cout << "N ";
    else {
        sum = a2[0];
        int flag = 1;
        for(int i=1; i<len; i++) {
            flag *= -1;
            sum += flag*a2[i];
        }
        cout << sum << " ";
    }

    len = a3.size();
    if(len==0) cout << "N ";
    else {
        cout << len << " ";
    }

    len = a4.size();
    if(len==0) cout << "N ";
    else {
        sum = 0;
        for(int i=0; i<len; i++)
            sum += a4[i];
        printf("%.1f ", (float)sum/len);
    }

    len = a5.size();
    if(len==0) cout << "N";
    else {
        sort(a5.begin(), a5.end(), cmp);
        cout << a5[0];
    }
}
