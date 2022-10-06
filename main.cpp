//main.cpp
//  Created by Leonardo Aureliano on 2022-09-19
#include <iostream>
#include "Fraction.hpp"
#include "Fraction.cpp"
using namespace std;

int main(){
    Fraction f1(2, 0);
    f1.setDenominator(3);
    cout << f1.getDecimal() << endl;
    Fraction f2(f1);
    f2.display();
    f2.setNumerator(1);
    f2.setDenominator(6);
    f2.display();
    f1.setDenominator(3);
    f1.addTo(f2);
    f1.display();
    f1.setNumerator(2);
    f1.setDenominator(3);
    f1.addTo(6, 8);
    f1.display();
    f1.setNumerator(2);
    f1.setDenominator(3);
    f1.subtractFrom(f2);
    f1.display();
    f1.setNumerator(2);
    f1.setDenominator(3);
    f1.subtractFrom(6, 8);
    f1.display();
    f1.setNumerator(2);
    f1.setDenominator(0);
    f1.multiplyTo(f2);
    f1.display();
    f1.setNumerator(2);
    f1.setDenominator(3);
    f1.multiplyTo(6, 8);
    f1.display();
    f1.setNumerator(2);
    f1.setDenominator(3);
    f1.divideBy(f2);
    f1.display();
    f1.setNumerator(2);
    f1.setDenominator(3);
    f1.divideBy(-6, 8);
    f1.display();
    }
    
