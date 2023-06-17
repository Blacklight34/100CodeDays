#include <iostream>
using namespace std;
void printNtoOne(int n){
    if(n == 0) return;
    cout << n << " ";
    printNtoOne(n-1); //Tail recursion
}
int main(){
    int n;
    cin >> n;
    printNtoOne(n);
    return 0;
}


/*

    FLow
    main => printNtoOne(n) => check => print(n)=>call printNtoOne(n-1) => repeat until n != 0

*/