//
//  Vector.hpp
//  LAB4
//
//  Created by Leonardo Aureliano on 2022-10-03.
//

#ifndef Vector_hpp
#define Vector_hpp
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;


class Vector
{
private:
    double components[3];
public:
    Vector();
    Vector(double, double, double);
    ~Vector();
    friend const Vector operator+ (const Vector&, const Vector&);
    friend const Vector operator- (const Vector&, const Vector&);
    friend const Vector operator- (const Vector&);
    friend const Vector operator* (const Vector&, const Vector&);
    Vector& operator= (const Vector&);
    friend ostream& operator <<(ostream&, const Vector&);
    friend istream& operator >>(istream&, Vector&);
    friend const bool operator>(const Vector&, const Vector&);
    friend const bool operator<(const Vector&, const Vector&);
    friend const bool operator==(const Vector&, const Vector&);
    friend const bool operator>=(const Vector&, const Vector&);
    friend const bool operator<=(const Vector&, const Vector&);
    double& operator[](const int index);
    double getComponents(int) const;
    friend double getMagnitude(const Vector&); // returns the magnitude
    
};
//inicializer list

Vector:: Vector() {
    components[0] = 0;
    components[1] = 0;
    components[2] = 0;
}

Vector:: Vector(double val1, double val2, double val3){
    components[0] = val1;
    components[1] = val2;
    components[2] = val3;
}
const Vector operator+ (const Vector& a, const Vector& b)
{
    double c1 = a.getComponents(0) + b.getComponents(0);
    double c2 = a.getComponents(1) + b.getComponents(1);
    double c3 = a.getComponents(2) + b.getComponents(2);


    return Vector(c1, c2, c3);
 }


const Vector operator -(const Vector& a, const Vector& b)
{
    double c1 = a.getComponents(0) - b.getComponents(0);
    double c2 = a.getComponents(1) - b.getComponents(1);
    double c3 = a.getComponents(2) - b.getComponents(2);
    
    
    return Vector(c1, c2, c3);
}

double Vector operator -(const Vector&)
{
    return(-Vector&);
}

const Vector operator * (const Vector&, const Vector&);
{
    return(Vector& == Vector&);
}

const bool operator ==(const Vector& a, const Vector& b)
{
    return ((a.getComponents(0) == b.getComponents(0)) && (a.getComponents(1) == b.getComponents(1)) && (a.getComponents(2 == b.getComponents(2))));
}


ostream& operator <<(ostream& outputStream, const Vector& obj)
{
    //ignore();
    outputStream << obj.components[0];
    return outputStream;
}


istream& operator >>(istream& inputStream, const Vector& obj)
{
    inputStream >> obj.components;

    return inputStream;
}

const bool Vector operator==(const Vector&, const Vector&)
{
    return (Vector& == Vector&);
}

double Vector :: getMagnitude(double m)
{
    double magnitude = 0;
    magnitude = sqrt(a.getComponents[0] * a.getComponents[0] + a.getComponents[1] * a.getComponents[1] + a.getComponents[2] * a.getComponents[2]);
    return m;
}

double Vector:: getComponents(int position){
    return components[position];
}



#endif /* Vector_hpp */
