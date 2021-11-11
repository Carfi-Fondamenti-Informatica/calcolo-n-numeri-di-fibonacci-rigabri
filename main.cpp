#include <iostream>
using namespace std;

int f(int n) {
   if (n == 1) return 1;
   return n + f(n-1);
}

int main() {
   int n = 0;
   cin >> n;
   if (n <= 2)
      cout << "errore";
   else
      cout << f(n);
   return 0;
}
