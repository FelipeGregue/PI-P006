#include <iostream>

using namespace std;

int main() {
    float x, y;

    cout << "Insira as coordenadas (x, y) do ponto: " << endl;
    cin >> x >> y;

    string quadrante = (x > 0) ? (y > 0 ? "primeiro" : "quarto") : (y > 0 ? "segundo" : "terceiro");

    cout << "O ponto está no " << quadrante << " quadrante." << endl;

    return 0;
}
