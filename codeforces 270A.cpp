#include <iostream>

using namespace std;

int main()
{
    int t, a;
    cin >> t;

    while(t--) {
        cin >> a;
        int outerAngle = 180 - a;
        if(360%outerAngle == 0) { // Sides
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
