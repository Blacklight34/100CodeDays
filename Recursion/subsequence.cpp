#include <iostream>
using namespace std;
void print (vector <int> &ds){
    if(ds.size() == 0){
        cout << "{}";
        return;
    }
    for(int i = 0; i < ds.size(); i++){
        cout << ds[i] << " ";
    }
    cout << endl;
}
void printF(int n, int idx, vector<int> &ds, int arr[]){
    if(idx == n){
        print(ds);
        return;
    }
    ds.push_back(arr[idx]);
    printF(n, idx+1, ds, arr);
    ds.pop_back();
    printF(n, idx+1, ds, arr);

}
int main(){
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ds;
    printF(n, 0, ds, arr);
    return 0;
}