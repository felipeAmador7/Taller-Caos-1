#include <iostream>
using namespace std;

int main() {
    double x, r;
    int N = 1000;
    int transitorio = 100;

    for (r = 1; r <= 4.0; r += 0.1) {
        x = 0.5;
        for (int i = 0; i < N; i++) {
            x = r * x * (1 - x);
            if (i >= transitorio) {
                cout << r << "\t" << x << endl;
            }
        }
    }

    return 0;
}


// se puede cambiar el valor de r en (" for (r = 1; r <= 4.0; r += 0.1"))
