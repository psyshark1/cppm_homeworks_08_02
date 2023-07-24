#include"Triangle.h"

Triangle::Triangle(const double& side_a, const double& side_b, const double& side_c, const double& angle_A, const double& angle_B, const double& angle_C) :
    side_a{ side_a }, side_b{ side_b }, side_c{ side_c }, angle_A{ angle_A }, angle_B{ angle_B }, angle_C{ angle_C }
{
    if (angle_A + angle_B + angle_C != 180) { throw FigException("Ошибка создания фигуры. Причина: Сумма углов треугольника не равна 180!"); }
    this->name = "Треугольник";
    this->sides_count = 3;
}

void Triangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_a << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << '\n';
}

Triangle::~Triangle()
{
}