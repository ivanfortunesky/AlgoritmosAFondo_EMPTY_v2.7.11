
#ifndef _MAIN
#define _MAIN

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/Array.hpp"
#include "biblioteca/tads/Map.hpp"
#include "biblioteca/tads/List.hpp"
#include "biblioteca/tads/Stack.hpp"
#include "biblioteca/tads/Queue.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

int main()
{
   int n = 0;
   int i = digitCount(n);
   cout << i << endl; // muestra: 1

   n = -10;
   i = digitCount(n);
   cout << i << endl; // muestra: 2

   n = 1;
   i = digitCount(n);
   cout << i << endl; // muestra: 7
}

#endif
