#include <iostream>
using namespace std;

#include "conta_corrente.h"


int main() {
   // double a = 0;

   // for (long i = 0; i < 10000000; i++) {
   //    a += 0.1;
   //    // 0.110011001100
   //    // 1/3 = 0.333
   // }

   // // Decimal / Numeric / BigDecimal 
   // // | 1  | . | 2 | 3 | 4 | 1  |
   // //   2    .   5   5   2   3

   // printf("%f\n", a);

   ContaCorrente c1(1234, 9999);
   c1.deposita(1000);
   c1.retira(100);
   c1.imprimeExtrato();


   return 0;
}