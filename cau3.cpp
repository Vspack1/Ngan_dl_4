#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long sum = 0;
    long long last_digit = n % 10;
    n /= 10;
    
    while (n > 0) {
        long long curr_digit = n % 10;
        sum += abs(curr_digit - last_digit);
        last_digit = curr_digit;
        n /= 10;
    }
    
    cout << sum << endl;
    
    return 0;
}