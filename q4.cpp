#include <iostream>
using namespace std;

int fact(int base){
  int help = 1;
  for(int i = 1; i <= base; i++){
    help *= i;
  }
  return help;
}

bool searchFact(int n){
    for(int i = 0; fact(i) <= n; i++){
        if (fact(i) == n){
            return true;
        }
    }
    return false;
}

int main(void){
    int n ;
    cin >> n;
    cout << "fact " << n << " : "; if(searchFact(n) == true) cout << "true"; else cout << "false";
    return 0;
}