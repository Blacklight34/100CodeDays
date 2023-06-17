#include <iostream>
using namespace std;
void fab(int n, int a, int b){
    // if(n == 1){
    //     return 1;
    // }
    // if(n == 0){
    //     return 0;
    // }
    // return fab(n-1) + fab(n-2);

    if(n == 0) return;
    int c = a + b;
    cout << c << " ";
    fab(n - 1, b, c);
}
int main(){
    int n;
    cin >> n;
    cout << "Nth Fabonacii No: ";
    cout << 0 << " " << 1 << " ";
    fab(n - 2, 0, 1);
    return 0;
}