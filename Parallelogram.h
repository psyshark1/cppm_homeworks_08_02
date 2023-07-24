#pragma once
#include"Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& angle_a);
    ~Parallelogram();

    void get_info() override;
protected:
};