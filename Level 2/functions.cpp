#include <iostream>
using namespace std;

// Max of 3 numbers
void maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) cout << "Max: " << a;
    else if (b >= c) cout << "Max: " << b;
    else cout << "Max: " << c;
}

// Prime numbers 1 to 100
void primesTill100() {
    for (int i = 2; i <= 100; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) { prime = false; break; }
        if (prime) cout << i << " ";
    }
}

// Floyd’s triangle
void floydTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << num++ << " ";
        cout << endl;
    }
}

// Pyramid pattern
void pyramidPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

// Calculator using switch
void switchCalc(int a, char op, int b) {
    switch(op) {
        case '+': cout << "Result: " << a + b; break;
        case '-': cout << "Result: " << a - b; break;
        case '*': cout << "Result: " << a * b; break;
        case '/': cout << "Result: " << (b != 0 ? a / b : 0); break;
        default: cout << "Invalid operator";
    }
}

// Factorial using function
int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

// Recursive Fibonacci
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
void fibSeries(int n) {
    for (int i = 0; i < n; i++) cout << fib(i) << " ";
}

// Menu-based calculator
void menuCalculator() {
    int choice, a, b;
    do {
        cout << "\n1.Add 2.Subtract 3.Multiply 4.Exit\n";
        cin >> choice;
        if (choice == 4) break;
        cin >> a >> b;
        switch(choice) {
            case 1: cout << a + b << endl; break;
            case 2: cout << a - b << endl; break;
            case 3: cout << a * b << endl; break;
            default: cout << "Invalid\n";
        }
    } while (true);
}

int main() {
    int task;
    cout << "Choose Task (1-8):\n";
    cout << "1. Max of 3 numbers\n";
    cout << "2. Prime numbers 1 to 100\n";
    cout << "3. Floyd's triangle\n";
    cout << "4. Pyramid pattern\n";
    cout << "5. Switch-case calculator\n";
    cout << "6. Factorial\n";
    cout << "7. Recursive Fibonacci\n";
    cout << "8. Menu-based calculator\n";

    cin >> task;

    int a, b, c, n;
    char op;

    switch(task) {
        case 1:
            cout << "Enter 3 numbers: ";
            cin >> a >> b >> c;
            maxOfThree(a, b, c);
            break;

        case 2:
            primesTill100();
            break;

        case 3:
            cout << "Enter number of rows: ";
            cin >> n;
            floydTriangle(n);
            break;

        case 4:
            cout << "Enter height of pyramid: ";
            cin >> n;
            pyramidPattern(n);
            break;

        case 5:
            cout << "Enter expression (a op b): ";
            cin >> a >> op >> b;
            switchCalc(a, op, b);
            break;

        case 6:
            cout << "Enter number: ";
            cin >> n;
            cout << "Factorial: " << factorial(n);
            break;

        case 7:
            cout << "Enter number of terms: ";
            cin >> n;
            fibSeries(n);
            break;

        case 8:
            menuCalculator();
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
