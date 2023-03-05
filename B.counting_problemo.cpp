#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int z = n;
    int y = 0;

    while (z != 0) {
        
        if (z%10 == x){
            y++;
        }

        int p = z / 10;

        while (p >= 1) {
            if (p % 10 == x) {
                y++;
            }
            p = p / 10;
        }
        z--;
    }
    cout << y;
}
