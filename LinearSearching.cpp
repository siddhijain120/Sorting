#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,key,ans = 0;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> key;
    for(int i = 0; i < n; i++) {
        if(key == arr[i]){
            ans = i;
            break;
        }
    }
    if(ans) {
    cout << "The key is found at index : " << ans << endl;        
    } else {
        cout << "Not Found";
    }
}
