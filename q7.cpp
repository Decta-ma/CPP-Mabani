#include <iostream>

using namespace std;

int fib(int base){
  int a = 0, b = 1, c;
  for (int i = 0; i <= base; i++){
    c = a + b;
    a = b;
    b = c;
  }

  return c;  
}

bool checkFib(int num){
  for(int i = 0; fib(i) <= num; i++){
    if(fib(i) == num){
      return true;
    }
  }
  return false;
}

int main(void){
  int n;
  cin >> n;
  cout << checkFib(n);
  return 0;
}
