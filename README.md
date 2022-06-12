cpp20-execution-playground
==========================
### Concepts
- std::execution policies use [Streaming SIMD Extensions](https://en.wikipedia.org/wiki/Streaming_SIMD_Extensions) functionality underneath
- there are other implementation for the policies

### Notes 
- aware of the optimization level
- operations on data are different
- exception handling is different
- vectorized execution vs parallel execution

### Sample Code
- [modern-cpp-examples/main_accumulate_parallel.cpp at main · diehlpk/modern-cpp-examples · GitHub](https://github.com/diehlpk/modern-cpp-examples/blob/main/src/parallel_algorithms/main_accumulate_parallel.cpp)

### Documentations
- [Standard library header <execution> - cppreference.com](https://en.cppreference.com/w/cpp/header/execution)
- [<execution> | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/execution?view=msvc-170)

### Reference
- [c++ - Difference between execution policies and when to use them - Stack Overflow](https://stackoverflow.com/questions/39954678/difference-between-execution-policies-and-when-to-use-them)
- [Advanced Parallel Programming in C++ – Patrick Diehl](https://www.diehlpk.de/blog/modern-cpp/)
- [Achieving Parallelism with Algorithms in STL - Yet Another Technical Blog](http://www.mycpu.org/stdpar-c++/)
- [Examples of Parallel Algorithms From C++17 - C++ Stories](https://www.cppstories.com/2018/06/parstl-tests/)
- [How to Boost Performance with Intel Parallel STL and C++17 Parallel Algorithms - C++ Stories](https://www.cppstories.com/2018/11/pstl/)
- [Parallel Algorithms of the STL with the GCC Compiler - ModernesCpp.com](https://www.modernescpp.com/index.php/parallel-algorithms-of-the-stl-with-gcc)