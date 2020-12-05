#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 1, 2
// Output: 12.56

// Test case 2
// Input: 2, 3
// Output: 28.26

// Test case 3
// Input: 3, 4
// Output: 17.97

/* Input: 2 integers: edge of the equilateral triangle, radius of the circle.
   Output: area of the gray part.
   Up to 3 test cases.
*/

int main() {
  cout << "This program will is the area of the gray part(consists of 3 "
          "equilateral triangles and a circle)."
       << endl;
  cout << "Please input two positive integer numbers." << endl;
  cout << "The first one is the edge of the equilateral triangle." << endl;
  cout << "The second one is the radius of the circle." << endl;

  for (int i = 1; i <= 3; i++) {
    double a, r;
    const double pi = 3.14;

    cout << "\nTest case " << i << endl;
    cout << "Input: ";
    cin >> a >> r;

    double eq_tri = sqrt(3) / 4 * pow(a, 2);
    double half_circle = 0.5 * pi * pow(r, 2);

    if (a < r) {
      printf("Output: %.2f\n", half_circle * 2);
    } else if ((a > r) && (r > sqrt(3) * a / 2)) {
      double h = sqrt(3) / 2 * a;
      double small_edge = sqrt(r * r - h * h);
      double angle = acos(h / r) / pi * 180;
      double tri_two = r * a * sin((60 - angle) / 360 * pi);
      double fan = pi * pow(r, 2) * angle / 360;
      printf("Output: %.2f\n", (fan + tri_two) * 3 + half_circle);
    } else
      printf("Output: %.2f\n", eq_tri * 3 + half_circle);
  }
  return 0;
};
