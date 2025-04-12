#ifndef GESTIONES_HPP
#define GESTIONES_HPP

#include <iostream>
#include <vector>
using std::vector;
/**
 * @brief Evalúa un polinomio usando el método estándar
 * @param coef Vector de coeficientes del polinomio (de mayor a menor grado)
 * @param x Valor en el que evaluar el polinomio
 * @return Resultado de evaluar el polinomio en x
 * @note Complejidad: O(n) donde n es el grado del polinomio
 */
double evaluarEstandar(const vector<int>& coef, double x);

/**
 * @brief Evalúa un polinomio usando el método de Horner (más eficiente)
 * @param coef Vector de coeficientes del polinomio (de mayor a menor grado)
 * @param x Valor en el que evaluar el polinomio
 * @return Resultado de evaluar el polinomio en x
 * @note Complejidad: O(n) donde n es el grado del polinomio
 * @note Más eficiente que el método estándar por tener menos operaciones
 */
double evaluarHorner(const vector<int>& coef, double x);

/**
 * @brief Genera coeficientes aleatorios para un polinomio
 * @param grado Grado del polinomio deseado
 * @return Vector de coeficientes generados aleatoriamente (de mayor a menor grado)
 * @note Los coeficientes son enteros en el rango [-10, 10]
 */
vector<int> generarCoeficientes(int grado);

/**
 * @brief Genera un valor aleatorio para evaluar el polinomio
 * @return Valor aleatorio en el rango [-10.0, 10.0] excepto 0.0
 * @note Evita x = 0 para prevenir evaluaciones triviales
 */
double generarX();

#endif //GESTIONES_HPP
