#include <iostream> 

using namespace std;

int main(){
  int matrix[5][5];
  int i_i, i_j, number, moves = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin >> number;
      if(number == 1){
        i_i = i;
        i_j = j;
      }
      matrix[i][j] = number;
    }
  }
  if(i_i < 2){
    moves += 2 - i_i;
  }
  else if(i_i > 2){
    moves += i_i - 2;
  }
  if(i_j < 2){
    moves += 2 - i_j;
  }
  else if(i_j > 2){
    moves += i_j - 2;
  }
  cout << moves;
  return 0;
}