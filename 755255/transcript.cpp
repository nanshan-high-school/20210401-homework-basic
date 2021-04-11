#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    //輸入成績 名字
    vector<int> score;
    vector<string> name;
    int a_score;
    string a_name;
    while (true) {
        cin >> a_score;
        if (a_score == 0) {
            break;
        } else {
            score.push_back(a_score);
        }
        cin >> a_name;
        name.push_back(a_name);
    }

    //max
    int max = -1, max_count = 0;
    int name_max;
    for (auto i : score) {
        if (i > max) {
            max = i;
            name_max = max_count;
        }
        max_count++;
    }
    cout << "最高分的人是:" << name[name_max] << endl;
    
    // min
    int min = 999999999, min_count = 0;
    int name_min;
    for (auto i : score) {
        if (i < min) {
            min = i;
            name_min = min_count;
        }
        min_count++;
    }
    cout << "最低分的人是:" << name[name_min] << endl;

    //average
    int total = 0;
    for (auto i : score) {
        total += i;
    }
    cout << "平均:" << total / score.size() << endl;

    //mode
    vector<int>score_times;
    int times = 0;
    for (int i = 0; i < score.size(); i++) {
        for (int j = 0; j < score.size(); j++) {
            if (score[i] == score[j]) {
                times++;
            }
        }
        score_times.push_back(times);
        times = 0;
    }
    int score_times_max = -1, mode_num;
    for (int i = 0; i < score_times.size(); i++) {
        if (score_times[i] > score_times_max) {
            score_times_max = score_times[i];
            mode_num = i;
        }
    }
    cout << "眾數:" << score[mode_num];
}
