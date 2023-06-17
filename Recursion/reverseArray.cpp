#include <iostream>
using namespace std;
void swap(int *t1, int *t2){
    int t = *t1;
    *t1 = *t2;
    *t2 = t;
}
void reverseArr(int arr[], int l, int h){
    if(l >= h) return ;
    // cout << l << ' ' << h << endl;
    swap(&arr[l], &arr[h]);
    reverseArr(arr, l+1, h-1);
}
int main(){
    int arr[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Before" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    reverseArr(arr, 0, n - 1);
    cout << endl;
    cout << "After" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}