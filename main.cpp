#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int n=0; cin >> n;
  int i=(n-1);

  if (primo(n,i) == true) {
    cout << "numero primo";
  } else if (primo(n,i) == false) {
    cout << "numero non primo";
  }
  return 0;
}
