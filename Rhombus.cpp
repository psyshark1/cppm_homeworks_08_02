#include"Rhombus.h"

Rhombus::Rhombus(const unsigned short& side_a, const unsigned short& angle_a) : Parallelogram(side_a, side_a, angle_a)
{
    this->name = "Ромб";
}

void Rhombus::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->angle_D << '\n';
}

Rhombus::~Rhombus()
{
}