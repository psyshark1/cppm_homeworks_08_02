#include"Rectangle.h"

Rectangle::Rectangle(const unsigned short& side_a, const unsigned short& side_b) : Quadrangle(side_a, side_b, side_a, side_b, 90, 90, 90, 90)
{
    this->name = "Прямоугольник";
}

void Rectangle::get_info() 
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->angle_D << '\n';
}

Rectangle::~Rectangle()
{
}