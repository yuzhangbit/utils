#ifndef UTILS_TIME_HPP
#define UTILS_TIME_HPP
#include <chrono>

namespace utils {
  using std::chrono::time_point;
  using std::chrono::steady_clock;
  using std::chrono::duration_cast;
  using std::chrono::duration;
  inline double getDurationInSecs(const time_point<steady_clock> &start,
                                  const time_point<steady_clock> &end) {
    double elapsed_secondes =
            duration_cast<duration<double>>(end - start).count();
    return elapsed_secondes;
}
  inline time_point<steady_clock> now() { return steady_clock::now();}
}
#endif  // UTILS_TIME_HPP
