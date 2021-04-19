#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    vector<string> namelist;
    vector<int> scorelist;
    string name;
    int score;
    do {
        cin >> score;
        scorelist.push_back(score);
        if (score == 0) break;
        cin >> name;
        namelist.push_back(name);
    } while (true);
    scorelist.pop_back();

    /*for (int i = 0; i < scorelist.size(); i++) {
        cout << namelist[i] << scorelist[i] << endl;
    }*/

    sort(scorelist.begin(), scorelist.end());
    int min_num = scorelist[0];
    reverse(scorelist.begin(), scorelist.end());
    int max_num = scorelist[0];

    int total = 0;
    for (auto i : scorelist) {
        total += i;
    }

    int avg = total / (scorelist.size() - 1);
    cout << "max: " << namelist[0] << " " << max_num << endl;
    cout << "min: " << namelist[namelist.size() - 1] << " " << min_num << endl;
    cout << "avg: " << avg;
}
