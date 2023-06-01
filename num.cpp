#include <iostream>
#include <cstring>
#include <string>

class Romano {
public:
    std::string con(int number, char a, char b, char c) {
        std::string romano;
        if (number <= 3) {
            romano = std::string(number, a);
        }

        switch (number) {
            case 4:
                romano = std::string(1, a) + b;
                break;
            case 5:
                romano = std::string(1, b);
                break;
            case 6:
                romano = std::string(1, b) + std::string(1, a);
                break;
            case 7:
                romano = std::string(1, b) + std::string(2, a);
                break;
            case 8:
                romano = std::string(1, b) + std::string(3, a);
                break;
            case 9:
                romano = std::string(1, a) + c;
                break;
        }

        return romano;
    }
};

int main() {
    Romano romano;
    char num[10];
    int j = 0;
    std::string romanofinal;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    int longitud = std::strlen(num);
    for (int i = longitud - 1; i >= 0; i--) {
        j += 1;
        switch (j) {
            case 1:
                romanofinal = romano.con(num[i] - '0', 'I', 'V', 'X');
                break;
            case 2:
                romanofinal = romano.con(num[i] - '0', 'X', 'L', 'C') + romanofinal;
                break;
            case 3:
                romanofinal = romano.con(num[i] - '0', 'C', 'D', 'M') + romanofinal;
                break;
            case 4:
                romanofinal = romano.con(num[i] - '0', 'M', 'N', 'O') + romanofinal;
                break;
        }
    }

    std::cout << "El numero romano es: " << romanofinal << std::endl;
    system("pause");
    return 0;
}
