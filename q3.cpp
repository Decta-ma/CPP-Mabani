#include <iostream>
using namespace std;

int func(int a, int b){
    int n = a;
    if (a == 0 || b == 0){
        return 0;
    }
    bool flag = false;
    if (a < 0 || b < 0){
        if (a < 0){
            flag = true;
        }
        if (b < 0){
            if (flag){
                flag = false;
            }
        }
    }
    int help = 0;
    if (n < 0){
        n *= -1;
    }
    for (int i = 0; i < n; i++){
        help += b;
    }
    if (flag) {
        return -1 * help;
    }else {
        return help;
    }
}

int main(void){
    int a, b;
    cin >> a >> b;
    cout << func(a, b);
    return 0;
}