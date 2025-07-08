#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;

#define BEGIN_TIMER auto start = std::chrono::high_resolution_clock::now();
#define END_TIMER std::cout.flush(); \
    auto stop = std::chrono::high_resolution_clock::now(); \
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start); \
    std::cout << "\nRuntime: " << duration.count() / 1e6 << " ms\n";

int main() {    
    float a, b, x, y, z, r;
    cout << "Enter sides of rectangle: ";
    cin >> a >> b;
    cout << "Enter sides of triangle: ";
    cin >> x >> y >> z;
    cout << "Enter radius of circle: ";
    cin >> r;

    BEGIN_TIMER
    
    float s = (x + y + z) / 2;

    cout << "The perimeter of rectangle is: " << 2 * (a + b) << "\n"
         << "The area of rectangle is: " << a * b << "\n"
         << "The perimeter of triangle is: " << x + y + z << "\n"
         << "The area of triangle is: " << sqrt(s * (s - x) * (s - y) * (s - z)) << "\n"
         << "The perimeter of circle is: " << 2 * M_PI * r << "\n"
         << "The area of circle is: " << M_PI * r * r;

    END_TIMER
    return 0;
}
