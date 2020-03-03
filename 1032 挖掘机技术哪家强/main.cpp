#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N+1);
    int num, score;
    for(int i=0; i<N; i++) {
        cin >> num >> score;
        a[num] += score;
    }
    int max = a[1], t = 1;
    for(int i=2; i<=N; i++) {
        if(max < a[i]) {
            t = i;
            max = a[i];
        }
    }
    cout << t << " " << max;
    return 0;
}
