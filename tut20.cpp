#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int x, y;
        cin >> x >> y; // Har test case ke liye X aur Y read karein
        
        cout << x - y << endl; // Result print karein
    }
    
    return 0;
}