#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a , b, c;
        cin >> a >> b >> c;
        if (a - 1 < abs(c - b) + (c - 1)){
            cout << "1" << endl;
        }
        else if (a - 1 > abs(c - b) + (c - 1)){
            cout << "2" << endl;
        }
        else{
            cout << "3" << endl;
        }
    }

    return 0;
}
