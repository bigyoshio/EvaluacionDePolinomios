#include "Gestiones.h"
#include <cmath>
#include <random>

double evaluarEstandar(const std::vector<int>& coef, double x) {
    double resultado = 0.0;
    int grado = coef.size() - 1;
    for (int i = 0; i <= grado; ++i) {
        resultado += coef[i] * std::pow(x, grado - i);
    }
    return resultado;
}

double evaluarHorner(const std::vector<int>& coef, double x) {
    double resultado = coef[0];
    for (size_t i = 1; i < coef.size(); ++i) {
        resultado = resultado * x + coef[i];
    }
    return resultado;
}

std::vector<int> generarCoeficientes(int grado) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-10, 10);
    std::vector<int> coef(grado + 1);
    for (int i = 0; i <= grado; ++i) {
        coef[i] = dis(gen);
    }
    return coef;
}

double generarX() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(-10.0, 10.0);
    double x;
    do {
        x = dis(gen);
    } while (x == 0.0); // evitar x = 0
    return x;
}
