#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    // Nếu n là 0 thì max_digit cũng là 0
    int max_digit = 0;
    
    // Duyệt từng chữ số của n
    while (n > 0) {
        int digit = n % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        n /= 10;
    }
    
    cout << max_digit << endl;
    
    return 0;
}