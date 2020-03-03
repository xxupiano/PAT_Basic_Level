#include <bits/stdc++.h>
using namespace std;
struct stu {
    string name;
    string id;
    int score;
    bool operator<(const stu& s) {
        return score < s.score;
    }
};


int main() {
    int n;
    cin >> n;
    vector<stu> a;
    stu tmp;
    while(n--) {
        cin >> tmp.name >> tmp.id >> tmp.score;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());

    cout << a.back().name << " " << a.back().id << endl;
    cout << (*a.begin()).name << " " << (*a.begin()).id;
}


//#include <iostream>
//using namespace std;
//int main() {
//    int n, maxn = -1, minn = 101, score;
//    cin >> n;
//    string maxname, minname, maxnum, minnum, name, num;
//    while(n--) {
//        cin >> name >> num >> score;
//        if(maxn < score) {
//            maxn = score;
//            maxname = name;
//            maxnum = num;
//        }
//        if(minn > score) {
//            minn = score;
//            minname = name;
//            minnum = num;
//        }
//    }
//    cout << maxname << " " << maxnum << endl
//         << minname << " " << minnum;
//}
