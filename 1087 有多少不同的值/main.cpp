#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    set<int> s;
    for(int i=1; i<=N; i++) {
        int x = ceil(i/2) + ceil(i/3) + ceil(i/5);
        s.insert(x);
    }
    printf("%d", s.size());
    return 0;
}
