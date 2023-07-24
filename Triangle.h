#pragma once
#include"Figure.h"

class Triangle : public Figure
{
public:
    Triangle(const double& side_a, const double& side_b, const double& side_c, const double& angle_A, const double& angle_B, const double& angle_C);
    ~Triangle();

    virtual void get_info() override;

protected:
    double side_a;
    double side_b;
    double side_c;
    double angle_A;
    double angle_B;
    double angle_C;
};
