#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     
    // Print I/O
    cout << "Print I/O\n";
    string name;
    int age;
    float gpa;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age and GPA: ";
    cin >> age >> gpa;
    cout << "Name: " << name << "\n"
         << "Age: " << age << "\n"
         << "GPA: " << gpa << "\n" << endl;

    // Basic Math
    float a, b;
    cout << "Basic Maths operations\n";
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << fixed << setprecision(3)
         << "Sum: " << a + b << "\n"
         << "Product: " << a * b << "\n"
         << "Quotient: " << a / b << "\n"
         << "Difference: " << a - b << endl;

    // Basic Math 2
    float x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    cout << "Average: " << (x + y + z) / 3 << "\n\n";

    // Type Cast and Area
    cout << "Type Cast and Area\n";
    const float pi = 3.1415;
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Radius typecasted to int: " << static_cast<int>(r) << "\n"
         << "Area of Circle: " << pi * r * r << "\n" << endl;

    // Swap
    cout << "Swap\n";
    int m, n;
    cout << "Enter 2 numbers to swap (m, n): ";
    cin >> m >> n;
    m = m + n;
    n = m - n;
    m = m - n;
    cout << "m = " << m << "\n"
         << "n = " << n << "\n";

    return 0;
}

