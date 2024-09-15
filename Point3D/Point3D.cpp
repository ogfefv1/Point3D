//
//  Point3D.cpp
//  Point3D
//
//  Created by Егор Джемлиханов on 15.09.2024.
//

#include "Point3D.h"
#include<iostream>
using namespace std;

unsigned int Point3D::count = 0;


unsigned int Point3D::PoluchitKolichestvo()
{
    return count;
}

Point3D::Point3D()
{
    x = y = z = 0;
}

//Point3D::Point3D(int x, int y, int z)
//{
//    this->x = x;
//    this->y = y;
//    this->z = z;
//
//}




Point3D::Point3D(const int x, const int y, const int z) : x(x), y(y), z(z)
{
    ++count;
}

Point3D::~Point3D()
{
    --count;
}

void Point3D::InfoAboutObjects()
{
    cout << "Live objects: " << count << endl;
}



void Point3D::Inizializazia(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void Point3D::Pokazat()
{
    cout << "\tx: " << x << "\ty: " << y << "\tz: " << z << endl;
}

Point3D Point3D::Summa(Point3D& b)
{
    Point3D rez;
    rez.x = x + b.x;
    rez.y = y + b.y;
    rez.z = z + b.z;
    return rez;
}

Point3D Point3D::Umnogenie(Point3D& b)
{
    Point3D rez;
    rez.x = x * b.x;
    rez.y = y * b.y;
    rez.z = z * b.z;
    return rez;
}

Point3D Point3D::Delenie(Point3D& b)
{
    Point3D rez;
    rez.x = x - b.x;
    rez.y = y - b.y;
    rez.z = z - b.z;
    return rez;;
}

Point3D& Point3D::Summa(int x, int y, int z)
{
    this->x += x;
    this->y += y;
    this->z += z;
    return *this;


}

Point3D& Point3D::Umnogenie(int x, int y, int z)
{
    this->x *= x;
    this->y *= y;
    this->z *= z;
    return *this;
}

Point3D& Point3D::Delenie(int x, int y, int z)
{
    if (x != 0) this->x /= x;
    if (y != 0) this->y /= y;
    if (z != 0) this->z /= z;
    return *this;
}
