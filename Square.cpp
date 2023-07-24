#include"Square.h"

Square::Square(const unsigned short& side_a) : Rectangle(side_a, side_a)
{
    this->name = "Квадрат";
}

void Square::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->angle_D << '\n';
}

Square::~Square()
{
}