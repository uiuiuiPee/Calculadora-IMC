// Hecha por Orazal12 En 5/12/2024

#include <iostream>

double Calcular(double Peso, double Altura) {
    double Promedio = Peso / (Altura * Altura);

    if (Promedio <= 18.5) {
        return 1;
    }
    else if (Promedio <= 24.9) {
        return 2;
    }
    else if (Promedio <= 29.9) {
        return 3;
    }
    else if (Promedio <= 34.9) {
        return 4;
    }
    else if (Promedio <= 39.9) {
        return 5;
    }
    else {
        return 6;
    }
}

int main()
{
    double Peso;
    double Altura;
    
    std::cout << "Ingrese tu peso: ";
    std::cin >> Peso;

    std::cout << "Ahora, ingrese tu altura: ";
    std::cin >> Altura;

    int Calculado = Calcular(Peso,Altura);

    switch (Calculado) {
    case 1:
        printf("Bajo peso");
        break;
    case 2:
        printf("Peso Normal");
        break;
    case 3:
        printf("Sobre peso");
        break;
    case 4:
        printf("Obesidad Grado I");
        break;
    case 5:
        printf("Obesidad Grado II");
        break;
    case 6:
        printf("Obesidad Grado III");
        break;
    }
}
