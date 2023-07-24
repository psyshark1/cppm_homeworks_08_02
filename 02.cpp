#include"RTriangle.h"
#include"EQTriangle.h"
#include"Rhombus.h"
#include"Square.h"

void print_info(Figure* fig);

int main(int argc, char** argv)
{
    std::system("chcp 1251");

    try
    {
        Triangle triangle(10.0, 20.0, 30.0, 50.0, 60.0, 70.0);
        ISOTriangle isot(10.0, 20.0, 50.0);
        RTriangle rtriangle(10.0, 88.0);
        EQTriangle eqtriangle(30.0);

        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 180);
        Rectangle rect(10, 90);
        Square square(20);
        Parallelogram parallelogram(20, 30, 30);
        Rhombus rhombus(30, 30);

        print_info(&triangle);
        std::cout << '\n';
        print_info(&isot);
        std::cout << '\n';
        print_info(&rtriangle);
        std::cout << '\n';
        print_info(&eqtriangle);
        std::cout << '\n';
        print_info(&quadrangle);
        std::cout << '\n';
        print_info(&rect);
        std::cout << '\n';
        print_info(&square);
        std::cout << '\n';
        print_info(&parallelogram);
        std::cout << '\n';
        print_info(&rhombus);
    }
    catch (const FigException& fex)
    {
        std::cout << fex.what() << std::endl;
    }
    catch (...)
    {

    }

    std::system("pause");
    return 0;
}

void print_info(Figure* fig)
{
    fig->get_info();
}