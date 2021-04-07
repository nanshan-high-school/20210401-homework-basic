#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> score;
    vector<string> name;
    int scoree = -1;
    string namee;

    do {
        cin >> scoree;
        if (scoree == 0) {
            break;
        }
        score.push_back(scoree);

        cin >> namee;
        name.push_back(namee);
    } while (scoree != 0);
    //大
    int max = score[0], maxPeopleNum = 0;
    int maxTimes = 0;

    for (auto i : score) {
        if (i > max) {
            max = i;
            maxPeopleNum = maxTimes;
        }
        maxTimes++;
    }

    cout << name[maxPeopleNum] << "的分數最高: " << max << endl;
    //小
    int mini = score[score.size() - 1], miniPeopleNum = 0;
    int miniTimes = 0;

    for (auto i : score) {
        if (i < mini) {
            mini = i;
            miniPeopleNum = miniTimes;
        }
        miniTimes++;
    }

    cout << name[miniPeopleNum] << "的分數最低: " << mini << endl;
    //平
    double sum = 0;

    for (auto i : score) {
        sum += i;
    }

    cout << "平均: " << sum / score.size() << endl;
    //眾
    vector<int> zhong;

    for (int i = 0; i < score.size(); i++) {
        zhong.push_back(0);
    }

    for (int i = 0; i < score.size(); i++) {
        for (int j = 0; j < score.size(); j++) {
            if (score[i] == score[j]) {
                zhong[i] += 1;
            }
        }
    }

    int zhongMax = zhong[0], zhongMaxNum = 0;
    int zhongTimes = 0;

    for (auto i : zhong) {
        if (i > zhongMax) {
            zhongMax = i;
            zhongMaxNum = zhongTimes;
        }
        zhongTimes++;
    }

    cout << "眾數值: " << score[zhongMaxNum];
}
