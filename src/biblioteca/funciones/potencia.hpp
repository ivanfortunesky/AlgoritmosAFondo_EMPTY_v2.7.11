/*
 * potencia.hpp
 *
 *  Created on: 18/05/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001
 */


#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int potencia (int a, int b){
   int pot=a;
   int i=2;
   if (b==0){ return 1;}
   if (b==1){ return a;}
   while(i<=b){
        pot =pot*a;
        i++;
        }
   return pot;
}


