//
//  Point3D.h
//  Point3D
//
//  Created by Егор Джемлиханов on 15.09.2024.
//

#pragma once
#include<iostream>
using namespace std;


class Point3D
{
    int x;
    int y;
    int z;

public:

    static unsigned int count;

    Point3D(const int x, const int y, const int z);
    ~Point3D();

    static void InfoAboutObjects();


    static unsigned int PoluchitKolichestvo();

    Point3D();
//    Point3D(int x, int y, int z);
    void Inizializazia(int x, int y, int z);
    void Pokazat();
    Point3D Summa(Point3D& b);
    Point3D Umnogenie(Point3D& b);
    Point3D Delenie(Point3D& b);
    Point3D& Summa(int x, int y, int z);
    Point3D& Umnogenie(int x, int y, int z);
    Point3D& Delenie(int x, int y, int z);


};
