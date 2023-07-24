#pragma once
#include"Quadrangle.h"

class Rectangle : public Quadrangle
{
public:
    Rectangle(const unsigned short& side_a, const unsigned short& side_b);
    ~Rectangle();

    void get_info() override;
protected:
};