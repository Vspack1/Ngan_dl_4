#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    // Tìm chữ số cuối cùng
    int last_digit = n % 10;
    
    // Tìm chữ số đầu tiên
    long long temp = n;
    while (temp >= 10) {
        temp /= 10;
    }
    int first_digit = temp;
    
    cout << first_digit << " " << last_digit << endl;
    
    return 0;
}