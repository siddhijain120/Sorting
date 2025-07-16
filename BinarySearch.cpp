#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    vector<int>arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int low = 0, high = n-1;
    int ans = 0;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == key) {
            ans = mid;
            break;
        }
        else if(arr[mid] < key) {
            low  = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if(ans) {
        cout << "The key is found at index : " << ans << endl;        
    } else {
        cout << "Not Found";
    }
    
}