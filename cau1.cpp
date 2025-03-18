#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Câu 1: In số nguyên dương chia hết cho 3 <= N (bước nhảy 3)
    int i = 3;
    while (i <= n) {
        cout << i << " ";
        i += 3;
    }
    cout << endl;
    
    // Câu 2: In số nguyên không âm chia hết cho cả 3 và 5 < N
    i = 0;
    while (i < n) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    
    // Câu 3: Số nhỏ nhất >= N chia hết cho 7 (dùng break)
    for (int i = n; ; i++) {
        if (i % 7 == 0) {
            cout << i << endl;
            break;
        }
    }
    
    // Câu 4: Số lớn nhất <= N chia hết cho 9 (dùng break)
    for (int i = n; i >= 0; i--) {
        if (i % 9 == 0) {
            cout << i << endl;
            break;
        }
    }
    
    // Câu 5: In dãy số 1, 3, 5, 7, 9 ... 2N - 1
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}