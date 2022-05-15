
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
   int n = 123456;
   int i = 5;
   int r = getDigit(n,i);
   cout << r << endl; // muestra: 1
   i = 4;
   r = getDigit(n,i);
   cout << r << endl; // muestra: 2
   i = 3;
   r = getDigit(n,i);
   cout << r << endl; // muestra: 3
   i = 2;
   r = getDigit(n,i);
   cout << r << endl; // muestra: 4
   i = 1;
   r = getDigit(n,i);
   cout << r << endl; // muestra: 5
   i = 0;
   r = getDigit(n,i);
   cout << r << endl; // muestra: 6

}

#endif
