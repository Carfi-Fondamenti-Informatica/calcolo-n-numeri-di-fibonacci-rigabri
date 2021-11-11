#include <iostream>
using namespace std;

int main() {
   int n = 0;
   cin >> n;
   if (n < 2) {
      cout << "errore";
      return 0;
   }
   int a = 1;
   int b = 1;
   for (int i = 0; i < n; i++) {
      cout << a << endl;
      int s = a + b;
      a = b;
      b = s;
   }
   return 0;
}
