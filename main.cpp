/*
 * Logan Morris
 * 3-31-2016
 *Git assignment
 */

#include <iostream>
using namespace std;

int sum(int num);

int main(){
  cout << "Hello World!\n";
  cout << "Please enter a number: ";
  int number;
  cin >> number;
  cout << "Your sum is: " << sum(number) << endl;
  return 0;
}
int sum(int num){
  int total;
  for(int i = 0; i <= num; i++)
    total += i;
  return total;
}
