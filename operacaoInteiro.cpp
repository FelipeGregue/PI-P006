#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    cout << "Digite dois valores inteiros: " << endl;
    cin >> a >> b;

    c = 4 * a + b / 3 - 5;

    cout << "Resultado: " << c << endl;

    c = 4 * (a + b) / (3 - 5);

    cout << "Resultado com parentese: " << c << endl;

    // Os resultados foram diferentes pois a prioridade de operação foram diferentes por conta do parentese.
    // c = (4 * a) + (b / 3) - 5

    c = (a * a) + (2 * b) + c;

    cout << "Resultado outra expressão: " << c << endl;

    return 0;
}