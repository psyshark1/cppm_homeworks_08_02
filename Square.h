#pragma once
#include"Rectangle.h"
class Square : public Rectangle
{
public:
    Square(const unsigned short& side_a);
    ~Square();

    void get_info() override;
protected:
};