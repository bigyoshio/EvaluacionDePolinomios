### Evaluación de Métodos para Evaluar Polinomios
## 📌 Descripción
Este programa compara el rendimiento de dos métodos para evaluar polinomios:
Método Estándar: Evalúa cada término por separado usando pow().
Esquema de Horner: Usa un método más eficiente de evaluación anidada.
Genera un archivo CSV con los tiempos de ejecución para polinomios de grados 10 a 1000.

## 🛠 Requisitos
- Compilador C++11 o superior (g++, clang, MSVC)

- Sistema operativo: Windows, Linux o macOS

## 📦 Instalación
Clona el repositorio o descarga los archivos:

```bash
git clone https://github.com/tu-usuario/evaluacion-polinomios.git
cd evaluacion-polinomios
```

- Compila el programa:
```bash
g++ -std=c++11 main.cpp Gestiones.cpp -o evaluacion
```
## 🚀 Uso
- Ejecuta el programa:

```bash
./evaluacion
```
El programa generará un archivo resultados.csv con los tiempos de ejecución en microsegundos (μs).

## 📊 Estructura del CSV
- El archivo de resultados contiene:

```csv
grado,tiempo_estandar(us),tiempo_horner(us)
10,5.25,3.10
20,8.75,4.30
...
```
![Ejemplo de Grafica de Resultados](https://github.com/bigyoshio/EvaluacionDePolinomios/blob/main/Captura%20de%20pantalla%202025-04-11%20143729.png)

## 📂 Estructura del Proyecto
```
/
├── Gestiones.h       # Declaración de funciones
├── Gestiones.cpp     # Implementación de los métodos
├── main.cpp          # Programa principal
└── resultados.csv    # Resultados generados (se crea al ejecutar)
```

## 📝 Funciones Clave
```
evaluarEstandar(): Evalúa polinomios con el método tradicional.
evaluarHorner(): Implementa el esquema de Horner para evaluación eficiente.
generarCoeficientes(): Crea coeficientes aleatorios para los polinomios.
generarX(): Genera un valor aleatorio para evaluar los polinomios.
```

## 📈 Análisis de Resultados
Puedes visualizar los resultados con herramientas como:

- Excel/Google Sheets
- Python con pandas/matplotlib
- R

Ejemplo básico con Python:

```python
import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('resultados.csv')
data.plot(x='grado', y=['tiempo_estandar(us)', 'tiempo_horner(us)'])
plt.show()
```

## 📜 Licencia
Este proyecto está bajo la licencia MIT.
