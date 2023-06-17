#include <iostream>
using namespace std;
int sumOfNaturals(int n){
    if(n == 1) return n;
    else return n + sumOfNaturals(n - 1);
}
int main(){
    int n;
    cin >> n;
    cout << "Sum of Numbers: " << sumOfNaturals(n);
    return 0;
}