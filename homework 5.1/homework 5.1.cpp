#include <iostream>
#include <string>


class Figures
{
protected:
    int numOfSides;
    std::string nameF;

public:
    Figures(int sides) : numOfSides(sides) {}

    int sCount()
    {
        return numOfSides;
    }

    std::string getName()
    {
        return nameF;
    }
};

class UnknownFig : public Figures
{
public:
    UnknownFig() : Figures(0)
    {
        nameF = "Фигура";
    }
};

class Triangle : public Figures
{
public:
    Triangle() : Figures(3)
    {
        nameF = "Треугольник";
    }
};

class Quadrangle : public Figures
{
public:
    Quadrangle() : Figures(4)
    {
        nameF = "Четырёхугольник";
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");

    UnknownFig unknownFig;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон: " << std::endl;

    std::cout << unknownFig.getName() << ": " << unknownFig.sCount() << std::endl;
    std::cout << triangle.getName() << ": " << triangle.sCount() << std::endl;
    std::cout << quadrangle.getName() << ": " << quadrangle.sCount() << std::endl;

    return 0;
}
