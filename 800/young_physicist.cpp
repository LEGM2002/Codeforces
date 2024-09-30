#include <iostream> 

using namespace std;

int main(){
  int n = 0, val = 0;
  cin >> n;
  int matrix[n][3];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
      cin >> matrix[i][j];
    }
  }
  for(int i = 0; i < 3; i++){
    val = 0;
    for(int j = 0; j < n; j++){
      val += matrix[j][i];
    }
    if(val == 0){
      continue;
    }
    else{
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}