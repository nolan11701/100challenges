#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    int arr[n+1];
    int aoo[m];
    for (int i = 0; i <= n; i++){
        arr[i] = 0;
    }

    for (int i = 0; i<m; i++){
        int a, b;
        int c = 0;
        cin >> a >> b;
        for (int j = a; j<=b; j++){
            arr[j]=1;
        }
        for (int k = 0; k<n; k++){
            c += arr[k];
        }
        aoo[i] = c;
    }
    for (int i = 0; i < m; i++){
        cout << aoo[i] << "\n";
    }
}
