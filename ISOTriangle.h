#pragma once
#include"Triangle.h"

class ISOTriangle : public Triangle
{
public:
    ISOTriangle(const double& equal_side, const double& side_b, const double& equal_angle);
    ~ISOTriangle();

    void get_info() override;
protected:
};