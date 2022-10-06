//  Fraction.hpp
//  Lab2
//  Created by Leonardo Aureliano on 2022-09-24.

#ifndef Fraction_hpp
#define Fraction_hpp
#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
    int n;
    int d;
    int numerator;
    int denominator;
    int gcd();
public:
    Fraction(int n, int d);
    Fraction();
    Fraction(const Fraction& f);
    
    double getDecimal();
    void simplify();
    void setNumerator(int n);
    void setDenominator(int d);
    void addTo(const Fraction& f);
    void addTo(int n, int d);
    void subtractFrom(const Fraction& f);
    void subtractFrom(int n, int d);
    void multiplyTo(const Fraction& f);
    void multiplyTo(int n, int d);
    void divideBy(const Fraction& f);
    void divideBy(int n, int d);
    void display() const;
};



#endif /* Fraction_hpp */
