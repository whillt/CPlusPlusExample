// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#pragma GCC diagnostic ignored "-Wunused-parameter"
#include <iostream>
#include <cstdlib>
#include <type_traits>

template<class T, class V>
class A {
    public:
     A(T t, V k) {
     std::cout<<"origin version"<<std::endl;
   }
};

template<>
class A<int, int> {
    public:
    A(int t, int k) {
     std::cout<<"全特化 version"<<std::endl;
   }
};


template<class T>
class A<T, int> {
    public:
    A(T t, int k) {
     std::cout<<"偏特化 version"<<std::endl;
   }
};


 




int main()
{   
     A<int,int> a(10, 10);
     A<int, char> a1('a', 'a');
     A<double, int> a2(10.0, 10);
  return 0;

}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/
