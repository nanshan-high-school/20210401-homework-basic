#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int tagging(vector<int> temp) {
    int tag;
    tag = ((temp[temp.size() / 2 - 1] + temp[temp.size() / 2]) / 2);
    return tag;
}

int main() {
    vector<string> name;
    vector<int> score;
    int input, max, min;
    int r1 = 0, r2 = 0, average = 0;
    string input2;
    while (true) {
        cin >> input2;
        if (input2 == "#") {
            break;
        }
        name.push_back(input2);
        cin >> input;
        score.push_back(input);
    }
    max = score[0];
    min = score[0];
    for (int i = 0; i < score.size(); i++){
        if (max < score[i]) {
            max = score[i];
            r1 = i;
        }
        if (min > score[i]) {
            min = score[i];
            r2 = i;
        }
    }
    cout << "The idoit is: " << name[r2] << " " << min << endl;
    cout << "The Epic Eric Zheng is: " << name[r1] << " " << max << endl;
    for (int i = 0; i < score.size(); i++){
        average += score[i];
    }
    cout << "平均: " << average / score.size() << endl;
    vector<int> scoresort;
    for (int i = 0; i < score.size(); i++){
        scoresort.push_back(score[i]);
    }
    sort(scoresort.begin(), scoresort.end());
    map <int, int> found;
    int ask = scoresort[0];
    found[scoresort[0]] = 0;
    for (int i = 0; i < score.size(); i++){
        if (ask == scoresort[i]) {
            found[ask] += 1; 
        }
        else {
            ask = scoresort[i];
            found[scoresort[i]] = 1;
        }
    }
    int many = found[scoresort[0]];
    int rank;
    for (auto m: found) {
        rank = m.first;
        break;
    }
    for (auto n : found){
        if (n.second > many) {
            many = n.second;
            rank = n.first;
        }
    }
    cout << "眾數為: " << rank << endl;
    int tag;
    (scoresort.size() % 2 == 0) ? tag = tagging(scoresort) : tag = scoresort[scoresort.size() / 2];
    cout << "中位數為:" << tag;
      
}
