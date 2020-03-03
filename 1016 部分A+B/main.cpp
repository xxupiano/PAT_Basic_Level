#include <iostream>
using namespace std;
int a, da, b, db;

int main() {
    cin >> a>> da >> b >> db;
    int cnta=0, cntb=0;
    while(a) {
        if(a%10==da) cnta++;
        a /= 10;
    }
    while(b) {
        if(b%10==db) cntb++;
        b /= 10;
    }

    int pa, pb;
    if(cnta) pa=da;
    else pa=0;
    if(cntb) pb=db;
    else pb=0;
    for(int i=1; i<=cnta-1; i++) {
        pa *= 10;
        pa += da;
    }
    for(int i=1; i<=cntb-1; i++) {
        pb *=10;
        pb +=db;
    }

    cout << pa+pb;
}
