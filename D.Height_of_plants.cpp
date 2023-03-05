#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i<m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        for (int j = a-1; j<b; j++){
            arr[j]+=c;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}