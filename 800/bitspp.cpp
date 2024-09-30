#include <iostream> 

using namespace std;

int main(){
  int n, count = 0;
  string str;
  cin >> n;
  while(n--){
    cin >> str;
    if(str == "X++"){
      count++;
    }
    else if(str == "X--"){
      count--;
    }
    else if(str == "++X"){
      ++count;
    }
    else if(str == "--X"){
      --count;
    }
  }
  cout << count;
  return 0;
}