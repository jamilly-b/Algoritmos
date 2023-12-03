#include <cstring>

/* Funções que funcionam apenas para int*/

// void trocar(int & a, int & b) {
//   /* troca valores de a e b entre si */ 
//   int c = a;
//   a = b;
//   b = c;
// }

// int maximo(const int a, const int b) { 
//   /* retorna maior entre a e b */ 
//   if (a > b)
//     return a;
//   else
//     return b;
// }

// int minimo(const int a, const int b) { 
//   /* retorna menor entre a e b */ 
//   if (a < b)
//     return a;
//   else
//     return b;
// }
namespace funcoes{
  /* Funções genéricas*/
  
  template <class T>
  void trocar(T & a, T & b) { 
  /* troca valores de a e b entre si */ 
    int c = a;
    a = b;
    b = c; 
  }
  
  template <class T>
  T maximo(const T a, const T b) { 
  /* retorna maior entre a e b */ 
    if (a > b)
      return a;
    else
      return b;
  }
  
  template <class T>
  T minimo(T a, T b) { 
  /* retorna menor entre a e b */ 
    if (a < b)
      return a;
    else
      return b;
  }
  // funções para lidar com const char *
  template <>
  const char * maximo(const char * a, const char * b) {
  int result = strcmp(a, b);
  	if(result>0) {
  		return a;
  	} else {
  		return b;
  	}
  }
  
  template <>
  const char * minimo(const char * a, const char * b) {
  int result = strcmp(a, b);
  	if(result>0) {
  		return b;
  	} else {
  		return a;
  	}
  }
}