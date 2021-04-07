#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 1;
    vector<int> score;
    string b;
    vector<string> name;

    //輸入分數、名字
    while (a != 0) {
        cout << "請輸入分數，若不繼續請輸入0：\n";
        cin >> a;
        //確認是否執行
        if (a == 0) {
            break;
        }
        score.push_back(a);
        cout << "請輸入名字：\n";
        cin >> b;
        name.push_back(b);
    }

    // 最大
    int max = score[0], max_place = 0, flag = 0;
    for (auto n : score) {
        if (n > max) {
            max = n;
            max_place = flag;
        }
        flag++;
    }
    flag = 0;

    // 最小
    int min = score[0], min_place = 0;
    for (auto n : score) {
        if (n < min) {
            min = n;
            min_place = flag;
        }
        flag++;
    }
    flag = 0;

    // 平均
    int aver = 0;
    for (int i = 0; i < score.size(); i++) {
        aver += score[i];
    }
    aver /= score.size();

    // 眾數
    int c;
    vector<int> times;
    for (int i = 0; i < score.size(); i++) {
        // 清空次數
        times.push_back(0);
    }
    for (int i = 0; i < score.size(); i++) {
        c = score[i];
        for (int j = 0; j < score.size(); j++) {
            if (c == score[j]) {
                times[i] += 1;
            }
        }
    }
    int times_max = times[0], times_max_place = 0;
    for (auto n : times) {
        if (n > times_max) {
            times_max = n;
            times_max_place = flag;
        }
        flag++;
    }

    cout << "分數最高者： " << name[max_place] << " ，他的分數為： " << max << "分\n";
    cout << "分數最低者： " << name[min_place] << " ，他的分數為： " << min << "分\n";
    cout << "班上總平均： " << aver << "分\n";
    cout << "班上分數之眾數： " << score[times_max_place] << " ，共出現 " << times[times_max_place] << " 次\n";
}
