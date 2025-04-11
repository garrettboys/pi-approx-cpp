#include <iostream>
#include <cmath>

double nilakanthaSeries(int digits);

int main() {
  std::cout << "Input the number of times to loop the Nilakantha series: " << std::endl;
  int digits;
  std::cin >> digits;
  while (digits <= 0) {
    std::cout << "Input an integer greater than 0 dumbass" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cin >> digits;
  }

  std::cout << nilakanthaSeries(digits);
}

double nilakanthaSeries(int digits) {
  double total = 0;
  for (int n = 0; n < digits; n++) {
    total += (4.0/(2*n+1)) * pow(-1, n);
  }
  return total;
}