#include <iostream>

using namespace std;

int main(){
    float raio;

    
    cout << "Por favor, insira o raio do círculo: " << endl;
    cin >> raio;

    
    float diametro = 2 * raio;
    cout << "O diâmetro do círculo é: " << diametro << endl;

    
    float circunferencia = 2 * 3.14159 * raio;
    cout << "A circunferência do círculo é: " << circunferencia << endl;

    
    float area = 3.14159 * raio * raio;
    cout << "A área do círculo é: " << area << endl;

    return 0;
}
