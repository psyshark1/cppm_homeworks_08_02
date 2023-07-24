#include"RTriangle.h"

RTriangle::RTriangle(const double& opposite_cathet, const double& opposite_angle) :
    Triangle(opposite_cathet, opposite_cathet * tan(opposite_angle * PI / 180),
        sqrt((opposite_cathet * opposite_cathet) + ((opposite_cathet * tan(opposite_angle * PI / 180)) * (opposite_cathet * tan(opposite_angle * PI / 180)))),
        opposite_angle, 90 - opposite_angle, 90)
{   
    if (opposite_angle > 89) { throw FigException("Ошибка создания фигуры. Причина: Противолежащий угол прямоугольного треугольника не может быть больше 89!"); }

    this->name = "Прямоугольный Треугольник";
}

void RTriangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_a << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << '\n';
}

RTriangle::~RTriangle()
{
}