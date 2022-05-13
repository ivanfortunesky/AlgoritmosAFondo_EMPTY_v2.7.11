
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
   string s = "uno**dos*tres*cuatro**";
   int p = indexOfN(s,'*',1);
   cout << p << endl; // muestra:

   p = indexOfN(s,'*',2);
   cout << p << endl; // muestra:

   p = indexOfN(s,'*',3);
   cout << p << endl; // muestra:

   p = indexOfN(s,'*',4);
   cout << p << endl; // muestra:

   p = indexOfN(s,'*',5);
   cout << p << endl; // muestra:
}

#endif
