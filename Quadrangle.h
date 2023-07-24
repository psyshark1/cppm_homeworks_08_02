#pragma once
#include"Figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& side_c, const unsigned short& side_d, const unsigned short& angle_a, const unsigned short& angle_b, const unsigned short& angle_c, const unsigned short& angle_d);
    ~Quadrangle();

    virtual void get_info();
protected:
    unsigned short side_a;
    unsigned short side_b;
    unsigned short side_c;
    unsigned short side_d;
    unsigned short angle_A;
    unsigned short angle_B;
    unsigned short angle_C;
    unsigned short angle_D;
};