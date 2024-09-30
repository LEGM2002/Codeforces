#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, points, b = 1500, count = 0;
    cin >> n;
    while(n--){
      cin >> points;
      b += points;
      count++;
      if(b >= 4000){
        cout << count << endl;
        return 0;
      }
    }
    cout << -1 << endl;
    return 0;
}