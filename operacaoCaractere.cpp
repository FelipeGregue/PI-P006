#include <iostream>

using namespace std;

int main(){

    char ch1, ch2, ch3;

    cout << "Digite 2 caracteres diferentes: " << endl;
    cin >> ch1 >> ch2;

    ch3 = ch1;

    cout << ch3 << oct << ch3 << hex << ch3 << oct << ch3;

    return 0;
}