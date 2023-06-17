#include <iostream>
using namespace std;
void printFromOneToN(int n){
    if(n == 0){
        return;
    }
    printFromOneToN(n-1);
    cout << n << " ";
}
int main(){
    int n;
    cin >> n;
    printFromOneToN(n);
    return 0;
}