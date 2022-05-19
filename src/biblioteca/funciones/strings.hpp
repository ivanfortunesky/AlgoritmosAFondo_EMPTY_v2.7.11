#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include "potencia.hpp"
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int length(string s) // 1.1.1.1. Función length
{
   int i=0;
   while (s[i]!= '\0') {i++;}
   return i;
}

int charCount(string s,char c) // 1.1.1.2. Función charCount
{int i=0;
   for (int j=0;j<length(s);j++){
      if (s[j]==c){i++;}
   }
   return i;
}

string substring(string s,int d,int h) // 1.1.1.3. Función substring
{
   string x="";
   for (int i=d-1;i<h;i++){x+=s[i];}
   return x;
}

string substring(string s,int d) // 1.1.1.4. Función substring (sobrecarga)
{
   string x="";
   for (int i=d-1;i<length(s);i++){x+=s[i];}
   return x;
}

int indexOf(string s,char c) // 1.1.1.5. Función indexOf
                             // Descripción: Retorna la posición que ocupa la primera ocurrencia del carácter c
                             //              dentro de la cadena s
{  for (int i=0;i<length(s);i++){if (s[i]==c){return i;}}
   return -1;
}

int indexOf(string s,char c,int offSet) // sobrecarga  -    offSet - 1.1.1.6. Función indexOf (sobrecarga)
{ for (int i=offSet;i<length(s);i++){if (s[i]==c){return i;}}
   return -1;
}

int indexOf(string s,string toSearch) // sobrecarga - toSearch - 1.1.1.7. Función indexOf (sobrecarga)
{
   int indice, cont=0;
   for (int i=0;i<length(s);i++){
      if (s[i]==toSearch[0]){
         indice =i;
         for (int j=0;j<length(toSearch);j++){
                  if (s[i+j]==toSearch[j]){
                     cont++;}}
         if (indice >0 && cont == length(toSearch) && (s[indice-1]==' ' || s[indice-1]=='\0' ) && (s[i+length(toSearch)]== ' ' || s[i+length(toSearch)]== '\0' )) {return indice;}
         else if (indice == 0 && cont == length(toSearch) && (s[i+length(toSearch)]== ' ' || s[i+length(toSearch)]== '\0' )) {return indice;}
      }
      cont=0; }
     return -1;
}

int indexOf(string s,string toSearch,int offset) // 1.1.1.8. Función indexOf (sobrecarga)
{
   int indice, cont=0;
   for (int i=offset;i<length(s);i++){
      if (s[i]==toSearch[0]){
         indice =i;
         for (int j=0;j<length(toSearch);j++){
                  if (s[i+j]==toSearch[j]){
                     cont++;}}
         if (indice >0 && cont == length(toSearch) && (s[indice-1]==' ' || s[indice-1]=='\0' ) && (s[i+length(toSearch)]== ' ' || s[i+length(toSearch)]== '\0' )) {return indice;}
         else if (indice == 0 && cont == length(toSearch) && (s[i+length(toSearch)]== ' ' || s[i+length(toSearch)]== '\0' )) {return indice;}
      }
      cont=0; }
   return -1;
}

int lastIndexOf(string s,char c) // última ocurrencia del carácter c dentro de s - 1.1.1.9. Función lastIndexOf
{
   int indice =-1;
   for (int i=0;i<length(s);i++){if (s[i]==c){indice = i;}}
   return indice;
}

int indexOfN(string s,char c,int n) //  - 1.1.1.10. Función indexOfN
{
   int indice =-1,countN=1;
   for (int i=0;i<length(s);i++){
      if (s[i]==c){
         indice = i;
         if (countN==n)return indice;
         countN++;
      }
   }
   return indice;
}

int charToInt(char c) //  - 1.1.1.11. Función charToInt
{
   int a;
   a=c;
   a-=48;
   if (a>9)a-=7;
   if (a>35)a-=6;
   if (a<62)return a;
   else return 0;
}



char intToChar(int i) // 1.1.1.12. Función intToChar
{
   char a;
   a=i;
   a+=48;
   if (a>57)a+=7;
   if (a>90)a+=6;
   if (a<123)return a;
   else return 0;
}

int getDigit(int n,int i) // 1.1.1.13. Función getDigit
{
    while (i>0) {
        n /= 10; // n = n /10
        i--;
    }
    return (n % 10);
}

int digitCount(int n) // 1.1.1.14. Función digitCount
{
   int i=1;
   //if (n==0) return 1;
   while (abs(n)>1) {
          n /= 10; // n = n /10
          i++;}
   return i;
}

string intToString(int i)  // 1.1.1.15. Función intToString
{
   string x="";
   x = to_string(i);
   return x;
}

int stringToInt(string s,int b) // 1.1.1.16. Función stringToInt
{
   int i = length(s)-1;
   int j=0;   //int pot;
   int suma=0;
      //log(b,i);
   while(i>=0){
      suma += charToInt(char(s[i]))*potencia(b,j);
      i--,j++;}
   return suma;
}

int stringToInt(string s) // 1.1.1.17. Función stringToInt (sobrecarga)
{
   int i = length(s)-1;
   int j=0;   //int pot;
   int suma=0;
      //log(b,i);
   while(i>=0){
      suma += charToInt(char(s[i]))*potencia(10,j);
      i--,j++;}
   return suma;
}

string charToString(char c) // 1.1.1.18. Función charToString
{
   string x="";
   x += c;
   return x;
}

char stringToChar(string s)
{
   return 'X';
}

string stringToString(string s)
{
   return "";
}

string doubleToString(double d)
{
   return "";
}

double stringToDouble(string s)
{
   return 1.1;
}

bool isEmpty(string s)
{
   return true;
}

bool startsWith(string s,string x)
{
   return true;
}

bool endsWith(string s,string x)
{
   return true;
}

bool contains(string s,char c)
{
   return true;
}

string replace(string s,char oldChar,char newChar)
{
   return "";
}

string insertAt(string s,int pos,char c)
{
   return "";
}

string removeAt(string s,int pos)
{
   return "";
}

string ltrim(string s)
{
   return "";
}

string rtrim(string s)
{
   return "";
}

string trim(string s)
{
   return "";
}

string replicate(char c,int n)
{
   return "";
}

string spaces(int n)
{
   return "";
}

string lpad(string s,int n,char c)
{
   return "";
}

string rpad(string s,int n,char c)
{
   return "";
}

string cpad(string s,int n,char c)
{
   return "";
}

bool isDigit(char c)
{
   return true;
}

bool isLetter(char c)
{
   return true;
}

bool isUpperCase(char c)
{
   return true;
}

bool isLowerCase(char c)
{
   return true;
}

char toUpperCase(char c)
{
   return 'X';
}

char toLowerCase(char c)
{
   return 'X';
}

string toUpperCase(string s)
{
   return "";
}

string toLowerCase(string s)
{
   return "";
}

int cmpString(string a,string b)
{
   return 0;
}

int cmpDouble(double a,double b)
{
   return 0;
}

#endif
