#include <iostream>
using namespace std;

int main() {
  int a, b, op;
  double result;

  cout << "Введіть перше число: ";
  cin >> a;

  cout << "Введіть оператор (1 - додавання, 2 - віднімання, 3 - множення, 4 - "
          "ділення): ";
  cin >> op;

  cout << "Введіть друге число: ";
  cin >> b;

  switch (op) {
  case 1:
    result = a + b;
    break;
  case 2:
    result = a - b;
    break;
  case 3:
    result = a * b;
    break;
  case 4:
    if (b != 0) {
      result = static_cast<double>(a) / b;
    } else {
      cout << "Помилка: Ділення на нуль неможливе." << endl;
      return 1;
    }
    break;
  default:
    cout << "Помилка: Невідомий оператор." << endl;
    return 1;
  }

  cout << "Результат = " << result << endl;
  return 0;
}
