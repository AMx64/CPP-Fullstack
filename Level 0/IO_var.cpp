#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;

#define BEGIN_TIMER auto start = chrono::high_resolution_clock::now();
#define END_TIMER cout.flush(); \
    auto stop = chrono::high_resolution_clock::now(); \
    auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start); \
    cout << "\nRuntime: " << duration.count() / 1e6 << " ms\n";

int main() {
    BEGIN_TIMER

    // print
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
         << "Sum: " << a+b << "\n"
         << "Product: " << a*b << "\n"
         << "Quotient: " << a/b << "\n"
         << "Difference: " << a-b << endl;

    // Basic Math 2
    float x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    cout << "Sum: " << (x+y+z) / 3 << "\n\n";

    // Type Cast and Area
    cout << "Type Cast and Area\n";
    const float pi = 3.1415;
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Radius typecasted to int: " << static_cast<int>(r) << "\n"
         << "Area of Circle: " << pi*r*r << "\n" << endl;


    // Swap
    cout << "Swap\n";
    int m, n;
    cout << "Enter 2 numbers to swap (m, n): ";
    cin >> m >> n;
    m = (m+n);
    n = (m-n);
    m = (m-n);
    cout << "m = " << m << "\n"
         << "n = " << n << "\n";

    END_TIMER
    return 0;
}
