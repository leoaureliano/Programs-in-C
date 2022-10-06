//
//  Fraction.cpp
//  Lab2
//
//  Created by Leonardo Aureliano on 2022-09-24.
//

#include "Fraction.hpp"
#include <iostream>
using namespace std;

void Fraction:: addTo(const Fraction& f)
{
    if(f.denominator != 0)
    {
        numerator = (numerator * f.denominator) + (f.numerator * denominator);
        denominator *= f.denominator;
        simplify();
    }
    else
    {
        cout << ">ERROR! Denominator must not be zero!" << endl;
        cout << ">Fraction is unchanged."<< endl;
    }
}

void Fraction::addTo(int n, int d)
{
    if(d != 0){
        numerator = (numerator * d) + (n * denominator);
        denominator *= d;
        simplify();
    }
    else
    {
        cout << ">ERROR! Denominator must not be zero!" << endl;
        cout << ">Fraction is unchanged." << endl;
    }
}

void Fraction:: multiplyTo(const Fraction &f)
{
    if(f.denominator != 0)
    {
        numerator *= f.numerator;
        denominator *= f.denominator;
        simplify();
    }
    else
    {
        cout << ">ERROR! Denominator must not be zero!" << endl;
        cout << ">Fraction is unchanged." << endl;
    }
}

void Fraction::multiplyTo(<#int n#>, <#int d#>)
{
    if(f.denominator != 0)
    {
        numerator *= n;
        denominator *= d;
        simplify();
    }
    else
    {
        cout << ">ERROR! Denominator must not be zero!" << endl;
        cout << ">Fraction is unchanged." << endl;
    }
}
void Fraction::divideBy(<#const Fraction &f#>)
{
    if(f.denominator != 0 && f.numerator !=0)
    {
        numerator *= f.denominator;
        denominator *= f.numerator;
        simplify();
    }
    else
    {
        cout <<">ERROR! Denominator must not be zero!" << endl;
        cout << ">Fraction is unchanged." << endl;
    }
}

void Fraction ::dividedBy(int n, int d)
{
    if (d !=0 && n != 0)
    {
        numerator *= d;
        denominator *= n;
        simplify();
    }
    else
    {
        cout <<">ERROR! Denominator must not be zero!" << endl;
        cout << ">Fraction is unchanged." << endl;
        
    }
}

void Fraction :: setNumerator(<#int n#>)
{
    numerator = n;
}
void Fraction :: setDenominator(<#int d#>)
{
    if( d != 0){
        denominator = d;
    }
    else
    {
        cout << ">ERROR! Denominator must not be zero!" << endl;
        cout << ">Denominator has been set equal to one" << endl;
        setDenominator(1);
    }
}

Fraction :: Fraction(int n, int d) : numerator(n), denominator(d)
{
    if(denominator == 0)
    {
        cout << ">ERROR! Denominator must not be zero!" << endl;
        cout << ">Denominator has been set equal to one" << endl;
        setDenominator(1);
    }
}

Fraction :: Fraction() :numerator(1), denominator(1)
{
    
}

Fraction :: Fraction(const Fraction& f) : numerator(f.numerator), denominator(f.denominator)
{
    
}

double Fraction :: getDecimal()
{
    return (static_cast<double>(numerator) / denominator);
}

void Fraction :: simplify()
{
    int g = gcd();
    
    numerator /= gcd();
    denominator /= gcd();
}

void Fracition :: display() const
{
    cout << numerator << " / " << denominator << endl;
    
}

int Fraction :: gcd()
{
    int g;
    
    if (abs(numerator) > abs(denominator))
    {
        g = abs(denominator);
    }
    else
    {
        g = abs(numerator);
    }
    
    while (g > 1)
    {
        if (((abs(numerator) % g) == 0) && ((abs(denominator) % g) == 0))
            return g;
        g--;
    }
    return 1;
}


    
