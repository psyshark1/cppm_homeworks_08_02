#include"Parallelogram.h"

Parallelogram::Parallelogram(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& angle_a) : Quadrangle(side_a, side_b, side_a, side_b, angle_a, 180 - angle_a, angle_a, 180 - angle_a)
{   

    this->name = "Параллелограм";
}

void Parallelogram::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->angle_D << '\n';
}

Parallelogram::~Parallelogram()
{
}