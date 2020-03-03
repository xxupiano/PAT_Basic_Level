#include <cstdio>
#include <vector>
using namespace std;

int N;
const int MAXN=100000;
char isPrime[MAXN+10];//isPrime[i]为1，则i是素数
vector<int> v;
int ans;

int main()
{
    scanf("%d", &N);
    for(int i=2; i<=N; i++) isPrime[i] = 1;
    for(int i=2; i<=N; i++) {
        if(isPrime[i])
            for(int j= i*2; j<=N; j+=i) isPrime[j] = 0;
    }

    for(int i=2; i<=N; i++) {
        if(isPrime[i]) v.push_back(i);
    }

    int len = v.size();
    for(int i=1; i<len; i++)
        if(v[i]-v[i-1]==2) ans++;
    printf("%d", ans);

    return 0;
}
