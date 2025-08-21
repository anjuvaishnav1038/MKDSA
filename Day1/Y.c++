#include <iostream>
using namespace std;

int main() {
    int digit = 4;
    long long n;
    long long prod = 1;
    
    while (digit != 0) {
        cin >> n;
        prod *= n;
        digit -= 1;
    }

    // last two digits
    int diff = prod % 100;
    cout << diff;
    return 0;
}
