#include"Quadrangle.h"

Quadrangle::Quadrangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& side_c, const unsigned short& side_d, const unsigned short& angle_a, const unsigned short& angle_b, const unsigned short& angle_c, const unsigned short& angle_d) :
    side_a{side_a}, side_b{ side_b }, side_c{ side_c }, side_d{ side_d }, angle_A{ angle_a }, angle_B{ angle_b }, angle_C{ angle_c }, angle_D{ angle_d }
{
    if (angle_A + angle_B + angle_C + angle_D != 360) { throw FigException("Ошибка создания фигуры. Причина: Сумма углов Четырехугольника не равна 360!"); }
    this->name = "Четырехугольник";
    this->sides_count = 4;

}

void Quadrangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->angle_D << '\n';
}

Quadrangle::~Quadrangle()
{
}