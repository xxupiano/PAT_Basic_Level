#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, output, ans;
    cin >> input >> output;
    for(int i=0; i<input.length(); i++) {
        if(output.find(input[i]) == string::npos && ans.find(toupper(input[i])) == string::npos)
            ans += toupper(input[i]);
    }
    cout << ans;
    return 0;
}
