#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    // Nếu n âm thì lấy giá trị tuyệt đối
    n = abs(n);
    
    int even_count = 0; // Đếm số chữ số chẵn
    int odd_count = 0;  // Đếm số chữ số lẻ
    
    // Nếu n = 0 thì có 1 chữ số chẵn
    if (n == 0) {
        even_count = 1;
    }
    
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        n /= 10;
    }
    
    if (odd_count < even_count) {
        cout << "28tech" << endl;
    } else {
        cout << "29tech" << endl;
    }
    
    return 0;
}