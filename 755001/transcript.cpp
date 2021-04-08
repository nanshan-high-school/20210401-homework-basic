#include <bits/stdc++.h>
using namespace std;

//阿克曼函數

int ack(int m, int n) {
     while (m != 0) { 
         if(n == 0) {
             n = 1;
         }else {
             n = ack(m, n-1);
         m = m - 1;
         }
     }
     return n + 1;
}

int main() {
    cout << ack(10, 11);
}
