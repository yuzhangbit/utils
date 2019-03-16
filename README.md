# utils
A header-only utils library.
## time
Handy tic-toc functions.
```c++
#include "time.hpp"

// in your program

auto tic = utils::now();
your_processing_functions();
auto toc = utils::now();
double duration = utils::getDurationInSecs(tic, toc);
```
