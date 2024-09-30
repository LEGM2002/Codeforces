#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    string hello = "hello";
    int j = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
      if(str[i] == hello[j]){
          j++;
      }
    }
    if(j == hello.length()){
        cout<<"YES";
    }
    else{
        cout<< "NO";
    }
    return 0;
}