#include <iostream>
using namespace std;


int pow(int base, int exp = 2){
  int index = 1;
  for (int i = 0; i < exp; i++){
    index *= base;
  }

  return index;
}


int main(void){

  int n;
  cin >> n;
  for (int i = 0; i <= n; i++){
    cout << pow(2, i) << ", ";
  }
  return 0;
}