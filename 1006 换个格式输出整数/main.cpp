#include <iostream>
using namespace std;

int main() {
    int a, i=0;
    cin >> a;
    int b[3] = {0};
    while(a) {
        b[i++] = a%10;
        a /= 10;
    }
    while(b[2]--) cout << "B";
    while(b[1]--) cout << "S";
    for(i=1; i<=b[0]; i++) cout << i;
}
