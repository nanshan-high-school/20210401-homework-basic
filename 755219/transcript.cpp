#include <iostream>
// #include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> score;
    vector<string> name;
    int x = 1;
    string y;
    //輸入
    while (true) {
        cin >> x;
        if (x == 0) {
            break;
        }
        score.push_back(x);
        cin >> y;
        name.push_back(y);
    }
    //最大值
    int max = score[0], whichmax = 0;
    for (int i = 1; i < score.size(); i++) {
        if (score[i] > max) {
            max = score[i];
            whichmax = i;
        }
    }
    cout << "最大值是--> " << name[whichmax] << "：" << max << endl;
    //最小值
    int min = score[0], whichmin = 0;
    for (int i = 1; i < score.size(); i++) {
        if (score[i] < min) {
            min = score[i];
            whichmin = i;
        }
    }
    cout << "最小值是--> " << name[whichmin] << "：" << min << endl;
    //平均值
    int ave = 0;
    for (int i = 0; i < score.size(); i++) {
        ave = ave + score[i];
    }
    ave = ave / score.size();
    cout << "平均值--> " << ave << endl;
    //眾數值
    vector<int> times;
    for (int i = score.size(); i > 0; i--) {
        times.push_back(0);
    }
    for (int j = 0; j < score.size(); j++) {
        int num = score[j];
        for (int i = 0; i < score.size(); i++) {
            if (score[i] == num) {
                times[j]++;
            }
        }
        times[j]--;
    }
    int maxMode = times[0];
    int WhichMaxMode = 0;
    for (int i = 1; i < times.size(); i++) {
        if (times[i] > maxMode) {
            maxMode = times[i];
            WhichMaxMode = i;
        }
    }
    cout << "眾數值--> " << score[WhichMaxMode] << endl;
}
