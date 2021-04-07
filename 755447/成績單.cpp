#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int a, max = 0, min = 0, c = 0, d = 10000, total, i = 0, j = 0;
    string b;
    vector <string> name;
    vector <int> grade;

    while (true) {
        cin >> a;
        grade.push_back(a);
        if (a == 0){
            grade.pop_back();
            break;
        } 
        cin >> b;
        name.push_back(b);
    }
    for (auto i : grade) {
        if (grade[max] < i) {
            max = j;
        } else if (grade[min] > i){
            min = j;
        }
        j++;
    }
    
    cout << "最高分: " << name[max] << " " << grade[max] << endl;
    cout << "最低分: " << name[min] << " " << grade[min] << endl;

    for (auto i : grade) {
        total += i;
    }
    cout << "平均: " << (total / grade.size());

    

}

