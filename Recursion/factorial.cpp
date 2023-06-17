#include <iostream>
using namespace std;
long long factorial(long long n){
    if(n == 1){
        return 1;
    }
    else return n * factorial(n - 1);
}
int main(){
    long long n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Factorial is: " << factorial(n);
    return 0;
}