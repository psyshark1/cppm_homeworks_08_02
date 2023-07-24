#pragma once
#include"Parallelogram.h"

class Rhombus : public Parallelogram
{
public:
    Rhombus(const unsigned short& side_a, const unsigned short& angle_a);
    ~Rhombus();

    void get_info() override;
protected:
};