#pragma once
#include"Triangle.h"

#define PI 3.14159265

class RTriangle : public Triangle
{
public:
    RTriangle(const double& opposite_cathet, const double& opposite_angle);
    ~RTriangle();

    void get_info() override;
protected:
};