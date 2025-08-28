#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double r;
    double x;
    int N;

    cout << "Ingrese el valor de r: ";
    cin >> r;

    cout << "Ingrese el valor inicial x (entre 0 y 1): ";
    cin >> x;

    cout << "Ingrese el número de iteraciones: ";
    cin >> N;

    ofstream file("logistica.dat");

    for (int i = 0; i < N; i++) {
        cout << i << "\t" << x << endl;
        file << i << "\t" << x << endl;
        x = r * x * (1 - x);
    }

    file.close();
    return 0;
}
