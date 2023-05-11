#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, temp;

  // Leer los números
  cout << "Ingrese 4 numeros: ";
  cin >> a >> b >> c >> d;

  // Ordenar los números usando el método de la burbuja
  for(int i = 0; i < 4; i++) {
    for(int j = i + 1; j < 4; j++) {
      if((int)(&a + i) < (int)(&a + j)) {
        temp = (int)(&a + i);
        (int)(&a + i) = (int)(&a + j);
        (int)(&a + j) = temp;
      }
    }
  }

  // Imprimir los números ordenados
  cout << "Los numeros ordenados son: " << a << ", " << b << ", " << c << ", " << d << endl;

  return 0;
}
