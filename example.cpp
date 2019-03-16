#include "time.hpp"
#include <iostream>

int main() {
  auto start = utils::now();
  for (std::size_t i = 0; i < 100000; i++) {
    std::cout << ".";
  }
  std::cout << std::endl;
  auto end = utils::now();
  std::cout << "duration:" << utils::getDurationInSecs(start, end) << " seconds" << std::endl;
  return 0;
}
