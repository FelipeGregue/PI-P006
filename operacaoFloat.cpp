#include <iostream>

using namespace std;

int main(){
    double x, y, z;
    cout << "Digite dois floats: " << endl;
    scanf("%lf %lf", &x, &y);

    z = x + y; 

    cout << "Não existem a e b. O resultado de z + y é: " << z << endl;

    z = (x + y) / 2;

    cout << "A média de x e y é: " << z << endl;

    z = x * y;

    cout << "O produto de x e y é: " << z << endl;

    if (x > y){
        z = x;
    }else{
        z = y;
    }

    cout << "O maior entre x e y é: " << z << endl;

    if (x < y){
        z = x;
    }else{
        z = y;
    }

    cout << "O menor entre x e y é: " << z << endl;

    

    return 0;
}