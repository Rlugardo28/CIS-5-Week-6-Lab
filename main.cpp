#include <iostream>

// Lab 6 — Raymundo Lugardo
// CIS 5 Week 06 · Even and odd
using namespace std;

int main() {
  
  int evenSum = 0;

  for(int i = 0; i <=100; i = i + 2) {
    evenSum = evenSum + i;
  }
  
  int oddSum = 0;
  int j = 1;
  
  while (j <= 99) { 
    oddSum = oddSum + j;
    j = j + 2;
  }
  
  cout <<"Sum of even numbers from 0 to 100:" << evenSum << endl;
  cout <<"Sum of odd numbers from 1 to 99:" << oddSum << endl;
  
  
  
  return 0;
}
