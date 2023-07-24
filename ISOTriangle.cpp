#include"ISOTriangle.h"

ISOTriangle::ISOTriangle(const double& equal_side, const double& side_b, const double& equal_angle) : Triangle(equal_side, side_b, equal_side, equal_angle, equal_angle, 180 - (equal_angle * 2))
{
    this->name = "Равнобедренный Треугольник";
}

void ISOTriangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_a << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << '\n';
}

ISOTriangle::~ISOTriangle()
{
}