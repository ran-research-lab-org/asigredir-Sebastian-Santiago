#include <iostream>
#include <format>
using namespace std;

int main() {

  int n;
  float n2;
  int ctr = 0;
  
  cout << "Entra 10 enteros: ";

  for (int i = 0; i < 10; i++) {
    cin >> n;
   ctr = ctr + n;
  }

    n2 = ctr % 10;

  cout << format("El promedio es:{}\n", n2);
  return 0;
}