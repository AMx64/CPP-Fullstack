#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

bool isPerfectSquare(int x) {
    for (int i = 1; i * i <= x; i++) {
        if (i * i == x) return true;
    }
    return false;
}

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n, x, y;
    cout << "Enter number to be reversed: ";
    cin >> n;
    cout << "Reversed: " << reverse(n) << "\n";

    cout << "Enter number to check for perfect square: ";
    cin >> x;
    cout << (isPerfectSquare(x) ? "Yes" : "No") << "\n";

    cout << "Enter number to check for prime: ";
    cin >> y;
    cout << (isPrime(y) ? "Yes" : "No") << "\n";

    return 0;
}
