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
void KSum(int n, int idx, vector<int> &ds, int arr[], int sum){
    if(idx == n){
        if(sum == 0){
            print(ds);
        }
        return;
    }
    if(sum == 0){
        print(ds);
        return;
    }
    if(sum < 0) return;
    ds.push_back(arr[idx]);
    KSum(n, idx+1, ds, arr, sum-arr[idx]);
    ds.pop_back();
    KSum(n, idx+1, ds, arr, sum);
}
int main(){
    int n, sum;
    cin >> n >> sum;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ds;
    KSum(n, 0, ds, arr, sum);
    return 0;
}