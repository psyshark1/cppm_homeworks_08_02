#pragma once
#include"ISOTriangle.h"

class EQTriangle : public ISOTriangle
{
public:
    EQTriangle(const double& side_a);
    ~EQTriangle();

    void get_info() override;
protected:
};
