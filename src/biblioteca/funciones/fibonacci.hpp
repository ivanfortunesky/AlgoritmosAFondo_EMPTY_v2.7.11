/*
 * fibonacci.cpp
 *
 *  Created on: 25/05/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001
 */
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double fib(int n){

   if (n<2){
      return 1;
   }
   else
   {

      return fib(n-1)+fib(n-2);
   }

}


