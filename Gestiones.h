#ifndef GESTIONES_HPP
#define GESTIONES_HPP

#include <vector>

double evaluarEstandar(const std::vector<int>& coef, double x);
double evaluarHorner(const std::vector<int>& coef, double x);
std::vector<int> generarCoeficientes(int grado);
double generarX();

#endif
