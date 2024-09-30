#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, wins;
    int n;
    cin >> n;
    while(n--){
      wins = 0;
      cin >> a >> b >> c >> d; 
      if(a > c && b > d){
        wins++;
      } 
      if(a > d && b > c){
        wins++;
      }
      if(b > c && a > d){
        wins++;
      } 
      if(b > d && a > c){
        wins++;
      }
      cout << wins << endl;
    }
    return 0;
}