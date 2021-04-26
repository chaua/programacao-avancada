#include "ponto.h"

int main() {
    Ponto p1(3, 4);
    Ponto p2(2, 2);
    Ponto p3(1, 1);
    Ponto p4(7, 9);

    // p1 + p1
    Ponto res = p1.soma(p2);
    res.imprime();

    // p1 + p2 - (p3 + p4)
    Ponto res1 = p3.soma(p4);
    Ponto res2 = p1.soma(p2);
    Ponto res3 = res2.subt(res1);

    Ponto res4 = p1.soma(p2).subt(p3.soma(p4));

    // p1 + p2 - (p3 + p4)
    Ponto res5 = p1 + p2 - (p3 + p4);
    Ponto res6 = p1.operator+(p2).operator-(p3.operator+(p4));

    res3.imprime();
    res4.imprime();
    res5.imprime();
    res6.imprime();

    res6(9, 9);
    res6.imprime();

    cout << res6[0] << endl;


    p1 = p2 * 3; // p2.mult(3)
    p1.imprime();

    //p1 = 3 * p2; // 3.mult(p2)
    //p1.imprime();

    return 0;
}