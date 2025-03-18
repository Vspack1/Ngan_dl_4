#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long temp = n;
    
    // Tìm chữ số đầu tiên
    long long first_digit = temp;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    
    // Tìm chữ số lớn nhất trong các chữ số của n
    int max_digit = 0;
    while(temp > 0) {
        int digit = temp % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        temp /= 10;
    }
    
    // So sánh chữ số đầu tiên và chữ số lớn nhất
    if (first_digit >= max_digit) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}