#include <iostream>
#include <vector>
#include <numeric>
#include <execution>
#include <chrono>

int main(void) {
  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Initilaize the vector with 1
  //std::fill(std::execution::par, v.begin(), v.end(), 1);

  auto tic = std::chrono::steady_clock::now();

  // Compute the sum of all elements
  int s = std::reduce(std::execution::par, v.begin(), v.end(), 0.0);

  auto toc = std::chrono::steady_clock::now();

  float duration = std::chrono::duration_cast<std::chrono::microseconds>(toc - tic).count();
  
  // Output the result
  std::cout << "Result = " << s << std::endl;

  std::cout << "duration = " << duration << std::endl;

  

  std::cin.get();

  return EXIT_SUCCESS;
}