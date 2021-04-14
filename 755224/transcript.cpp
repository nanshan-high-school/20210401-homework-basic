#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> name;
    vector<float> grade;
    int number, max = 0, min = 0;
    float sum;
    cin >> number;
    for (int i = 0; i < number; i++) {
        string tempname;
        float tempgrade;
        cin >> tempname >> tempgrade;
        grade.push_back(tempgrade);
        name.push_back(tempname);
        sum += tempgrade;
        if (grade[i] > grade[max]) {
            max = i;
        } else if (grade[i] < grade[min]) {
            min = i;
        }
    }
    cout << "Who sucks: " << name[min] << ", " << grade[min];
    cout << "\nWho rocks: " << name[max] << ", " << grade[max];
    cout << "\nAverage: " << sum / number;
    sort(grade.begin(), grade.end());
    cout << "\nMedian: ";
    if (number % 2 < 1) {
        cout << grade[number / 2] / 2 + grade[(number / 2) - 1] / 2 << endl;
    } else { 
        cout << grade[number / 2] << endl;
    }
    int mostcommon = grade[0], count = 1;
    max = 0;
    map<int, int> gradelist;
    map<int, int>::iterator pointer;
    for (auto n : grade) {
        if (gradelist.find(n) != gradelist.end()) {
            gradelist[n]++;
        } else {
            gradelist[n] = 0;
        }
    }
    int commonkey, commonval = 0;
    for (auto n: gradelist) {
        commonkey = (commonval < n.second) ? n.first : commonkey;
    }
    cout << "Mode: " << commonkey;



    /*
    for (int i = 1; i < number; i++) {
        if (grade[i] == grade[i - 1]) {
            count++;
        } else {
            if (count > max) {
            mostcommon = grade[i - 1];
            }
            count = 1;
        }
    }
    cout << "Mode: " << mostcommon;
    */
}
