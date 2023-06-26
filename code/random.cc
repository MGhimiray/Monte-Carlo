#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int a = 3456;
    int b = 2899;
    int n = 10000;
    double iseed = 6783;
    double r = 67893;
  
    vector<double> x(n);

    for (int i = 0; i < n; i++) {
        iseed = fmod(a + b * iseed, r);
        x[i] = iseed / r;
        cout << x[i] << " ";
    }
 return 0;
}
