#include"EQTriangle.h"

EQTriangle::EQTriangle(const double& side_a) : ISOTriangle(side_a, side_a, 60) 
{
    this->name = "�������������� �����������";
}

void EQTriangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "�������: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_a << '\n' <<
        "����: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << '\n';
}

EQTriangle::~EQTriangle()
{
}