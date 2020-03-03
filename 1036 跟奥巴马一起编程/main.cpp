#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int row, vol;
    char c;
    cin >> vol >> c;
    row = floor(vol/2.0+0.5);
    for(int i=1; i<=row; i++) {
        if(i==1 || i==row) {
            for(int j=1; j<=vol; j++) printf("%c", c);
        }
        else {
            cout << c;
            for(int j=1; j<=vol-2; j++) cout << " ";
            cout << c;
        }
        printf("\n");
    }
    return 0;
}
