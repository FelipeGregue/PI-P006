#include <iostream>

using namespace std;

int main(){

    char ch1, ch2, ch3;

    cout << "Digite 2 caracteres diferentes: " << endl;
    cin >> ch1 >> ch2;

    ch3 = ch1 - 1;

    cout << "Caractere em formato decimal: " << (int)ch3 << endl;
    cout << "Caractere em formato octal: " << oct << (int)ch3 << endl;
    cout << "Caractere em formato hexadecimal: " << hex << (int)ch3 << endl;
    cout << "Caractere: " << (isprint(ch3) ? ch3 : '_') << endl;

    ch3 = ch2 - 1;

    cout << "Caractere em formato decimal: " << (int)ch3 << endl;
    cout << "Caractere em formato octal: " << oct << (int)ch3 << endl;
    cout << "Caractere em formato hexadecimal: " << hex << (int)ch3 << endl;
    cout << "Caractere: " << (isprint(ch3) ? ch3 : '_') << endl;

    ch3 = (isupper(ch1)) ? 'A' : ' ';
    cout << "O valor de ch3 é: " << ch3 << endl;

    ch3 = (islower(ch2)) ? 'a' : ' ';
    cout << "O valor de ch3 é: " << ch3 << endl;

    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "O valor de ch3 é: " << ch3 << endl;

    return 0;
}

    /*
    #include <iostream>
    using namespace std;

    int main() {
    int num1, num2;

    
    cout << "Por favor, digite dois números inteiros: ";
    cin >> num1 >> num2;

    
    (num1 > num2) ? cout << num1 << " e maior" : (num1 == num2) ? cout << "estes números são iguais" : cout << num2 << " e maior";

    
    ( (num1 > num2) ? num1 : num2 ) % 2 == 0 ? cout << " e é par." : cout << " e é ímpar.";

    return 0;
}
*/