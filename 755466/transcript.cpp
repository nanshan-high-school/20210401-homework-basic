#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <string> name;
    vector <int> score;
    int i = 0, num;
    string Name;

    while (true) { //輸入
        cout << "輸入成績\n";
        cin >> num;
        if (num == 0) {
            break;
        }
        score.push_back(num);
        cout << "輸入名子\n";
        cin >> Name;
        if (Name == "0") {
            break;
        }
        name.push_back(Name);
    }

    int max = 0, min = 0;
    double total = 0;

    for (auto n : score) { //找大小和加總
        total += n;
        if (n > score[max]) {
            max = i; //第幾格
        }
        if (n < score[min]) {
            min = i; //第幾格
        }
        i++;
    }

    cout << "最高分的人是: " << name[max] << endl;
    cout << "最低分的人是: " << name[min] << endl;
    cout << "平均值是: " << total / score.size() << endl;


    //眾數值..
    vector <int> Score; //排序的數字(計算眾數用)
    int times[score.size()]; //計算次數
    bool norepeat = true;
    int j = 0; //第幾格

    for (int i = 0; i < score.size(); i++) {
        times[i] = 0; //都歸0
    }

    for (auto n : score) {
        for (auto m : Score) {
            if (m == n) {//有
                times[j] += 1;
                norepeat = false;
            }
            j++;
        }

        if (norepeat) { //沒有
            Score.push_back(n);
        }

        norepeat = true;
        j = 0;
    }

    i = 0; 
    max = 0;
    for (auto n : times) {
        if (times[max] < n) {
            max = i;
        }
        i++;
    }
    cout << "眾數值是: " << Score[max];

}
