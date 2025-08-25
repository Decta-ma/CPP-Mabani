#include <iostream>

using namespace std;

int fact(int base){
  int help = 1;
  for(int i = 1; i <= base; i++){
    help *= i;
  }
  return help;
}

int main(void){

  int n;
  cin >> n;
  cout << "1/n! => " << 1 / float(fact(n)); 
  return 0;
}