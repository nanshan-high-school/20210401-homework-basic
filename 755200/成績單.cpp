#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<string> name;
    vector<int> score;
    int input, max, min, r1 = 0, r2 = 0, ad = 0;
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
        ad += score[i];
    }
    cout << "平均: " << ad / score.size() << endl;
    vector<int> scorecopy;
    for (int i = 0; i < score.size(); i++){
        scorecopy.push_back(score[i]);
    }
    sort(scorecopy.begin(), scorecopy.end());
    map <int, int> found;
    int ask = scorecopy[0];
    found[scorecopy[0]] = 0;
    for (int i = 0; i < score.size(); i++){
        if (ask == scorecopy[i]) {
            found[ask] += 1; 
        }
        else {
            ask = scorecopy[i];
            found[scorecopy[i]] = 1;
        }
    }
    int many = found[scorecopy[0]];
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
    cout << "眾數為: " << rank;
      
}
