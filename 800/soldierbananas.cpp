#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w, price = 0;
    cin >> k >> n >> w;
    //k price of first banana
    //n dollars
    //w total of bananas
    for(int i = 1; i <= w; i++){
      price += i * k;
    }
    if(price <= n){
      cout << 0 << endl;
    } else {
      cout << price - n;
    }
    return 0;
}