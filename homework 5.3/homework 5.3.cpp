#include <iostream>
#include <string>



class Figures
{
protected:
    std::string nameF;
    std::string answer;

public:
    Figures(const std::string& name, const std::string& answ) : nameF(name), answer(answ) {}

    virtual void print_info() const = 0;

    std::string getName()
    {
        return nameF;
    }

    std::string getAnswer()
    {
        return answer;
    }
};

class UnknownFig : public Figures
{
public:
    UnknownFig() : Figures(nameF, answer)
    {
        nameF = "Фигура: ";
    }

    void check()
    {

        if (nameF == "Фигура: ")
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
    }
};

class Triangle : public Figures
{
protected:
    float side1_a, side1_b, side1_c;
    float corner1_A, corner1_B, corner1_C;

public:
    Triangle(float sidT1, float sidT2, float sidT3, float cornT1, float cornT2, float cornT3) :
        Figures(nameF, answer), side1_a(sidT1), side1_b(sidT2), side1_c(sidT3), corner1_A(cornT1), corner1_B(cornT2), corner1_C(cornT3)
    {
        nameF = "Треугольник: ";
    }

    void check()
    {
        if (nameF == "Треугольник: ")
        {
            answer = "Правильная";
        }

        if ((corner1_A + corner1_B + corner1_C) != 180)
        {
            answer = "Неправильная";
        }
        else
        {
            answer = "Правильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side1_a << " " << "b=" << side1_b << " " << "c=" << side1_c << std::endl;
        std::cout << "Углы: " << "A=" << corner1_A << " " << "B=" << corner1_B << " " << "C=" << corner1_C << std::endl;
    }
};

class Righttriangle : public Figures
{
protected:
    float side2_a, side2_b, side2_c;
    float corner2_A, corner2_B, corner2_C;

public:
    Righttriangle(float sidRt1, float sidRt2, float sidRt3, float cornRt1, float cornRt2, float cornRt3) :
        Figures(nameF, answer), side2_a(sidRt1), side2_b(sidRt2), side2_c(sidRt3), corner2_A(cornRt1), corner2_B(cornRt2), corner2_C(cornRt3)
    {
        nameF = "Прямоугольный треугольник: ";
    }

    void check()
    {
        if (nameF == "Прямоугольный треугольник: ")
        {
            answer = "Правильная";
        }

        if (corner2_C != 90)
        {
            answer = "Неправильная";
        }
        else
        {
            answer = "Правильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side2_a << " " << "b=" << side2_b << " " << "c=" << side2_c << std::endl;
        std::cout << "Углы: " << "A=" << corner2_A << " " << "B=" << corner2_B << " " << "C=" << corner2_C << std::endl;
    }
};

class IsoscelesTriangle : public Figures
{
protected:
    float side3_a, side3_b, side3_c;
    float corner3_A, corner3_B, corner3_C;

public:
    IsoscelesTriangle(float sidIt1, float sidIt2, float sidIt3, float cornIt1, float cornIt2, float cornIt3) :
        Figures(nameF, answer), side3_a(sidIt1), side3_b(sidIt2), side3_c(sidIt3), corner3_A(cornIt1), corner3_B(cornIt2), corner3_C(cornIt3)
    {
        nameF = "Равнобедренный треугольник: ";
    }

    void check()
    {
        if (nameF == "Равнобедренный треугольник: ")
        {
            answer = "Правильная";
        }

        if (side3_a == side3_c && corner3_A == corner3_C)
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side3_a << " " << "b=" << side3_b << " " << "c=" << side3_c << std::endl;
        std::cout << "Углы: " << "A=" << corner3_A << " " << "B=" << corner3_B << " " << "C=" << corner3_C << std::endl;
    }
};

class EquilateralTriangle : public Figures
{
protected:
    float side4_a, side4_b, side4_c;
    float corner4_A, corner4_B, corner4_C;

public:
    EquilateralTriangle(float sidEt1, float sidEt2, float sidEt3, float cornEt1, float cornEt2, float cornEt3) :
        Figures(nameF, answer), side4_a(sidEt1), side4_b(sidEt2), side4_c(sidEt3), corner4_A(cornEt1), corner4_B(cornEt2), corner4_C(cornEt3)
    {
        nameF = "Равносторонний треугольник: ";
    }

    void check()
    {
        if (nameF == "Равносторонний треугольник: ")
        {
            answer = "Правильная";
        }

        if ((side4_a == side4_c && side4_b == side4_c) && (corner4_A == corner4_C && corner4_B == corner4_C) && (corner4_A + corner4_B + corner4_C) == 180)
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side4_a << " " << "b=" << side4_b << " " << "c=" << side4_c << std::endl;
        std::cout << "Углы: " << "A=" << corner4_A << " " << "B=" << corner4_B << " " << "C=" << corner4_C << std::endl;
    }
};

class Quadrilateral : public Figures
{
protected:
    float side5_a, side5_b, side5_c, side5_d;
    float corner5_A, corner5_B, corner5_C, corner5_D;

public:
    Quadrilateral(float sidQl1, float sidQl2, float sidQl3, float sidQl4, float cornQl1, float cornQl2, float cornQl3, float cornQl4) :
        Figures(nameF, answer), side5_a(sidQl1), side5_b(sidQl2), side5_c(sidQl3), side5_d(sidQl4), corner5_A(cornQl1), corner5_B(cornQl2), corner5_C(cornQl3), corner5_D(cornQl4)
    {
        nameF = "Четырёхугольник: ";
    }

    void check()
    {
        if (nameF == "Четырёхугольник: ")
        {
            answer = "Правильная";
        }

        if ((corner5_A + corner5_B + corner5_C + corner5_D) == 360)
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side5_a << " " << "b=" << side5_b << " " << "c=" << side5_c << " " << "d=" << side5_d << std::endl;
        std::cout << "Углы: " << "A=" << corner5_A << " " << "B=" << corner5_B << " " << "C=" << corner5_C << " " << "D=" << corner5_D << std::endl;
    }
};

class Rectangle : public Figures
{
protected:
    float side6_a, side6_b, side6_c, side6_d;
    float corner6_A, corner6_B, corner6_C, corner6_D;

public:
    Rectangle(float sidR1, float sidR2, float sidR3, float sidR4, float cornR1, float cornR2, float cornR3, float cornR4) :
        Figures(nameF, answer), side6_a(sidR1), side6_b(sidR2), side6_c(sidR3), side6_d(sidR4), corner6_A(cornR1), corner6_B(cornR2), corner6_C(cornR3), corner6_D(cornR4)
    {
        nameF = "Прямоугольник: ";
    }

    void check()
    {
        if (nameF == "Прямоугольник: ")
        {
            answer = "Правильная";
        }

        if ((side6_a == side6_c && side6_b == side6_d) && (corner6_A == corner6_B && corner6_B == corner6_C && corner6_C == corner6_D && corner6_A == 90))
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side6_a << " " << "b=" << side6_b << " " << "c=" << side6_c << " " << "d=" << side6_d << std::endl;
        std::cout << "Углы: " << "A=" << corner6_A << " " << "B=" << corner6_B << " " << "C=" << corner6_C << " " << "D=" << corner6_D << std::endl;
    }
};

class Square : public Figures
{
protected:
    float side7_a, side7_b, side7_c, side7_d;
    float corner7_A, corner7_B, corner7_C, corner7_D;

public:
    Square(float sidS1, float sidS2, float sidS3, float sidS4, float cornS1, float cornS2, float cornS3, float cornS4) :
        Figures(nameF, answer), side7_a(sidS1), side7_b(sidS2), side7_c(sidS3), side7_d(sidS4), corner7_A(cornS1), corner7_B(cornS2), corner7_C(cornS3), corner7_D(cornS4)
    {
        nameF = "Квадрат: ";
    }

    void check()
    {
        if (nameF == "Квадрат: ")
        {
            answer = "Правильная";
        }

        if ((side7_a == side7_b && side7_b == side7_c && side7_c == side7_d && side7_d == side7_a) && (corner7_A == corner7_B && corner7_B == corner7_C && corner7_C == corner7_D && corner7_A == 90))
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side7_a << " " << "b=" << side7_b << " " << "c=" << side7_c << " " << "d=" << side7_d << std::endl;
        std::cout << "Углы: " << "A=" << corner7_A << " " << "B=" << corner7_B << " " << "C=" << corner7_C << " " << "D=" << corner7_D << std::endl;
    }
};

class Parallelogram : public Figures
{
protected:
    float side8_a, side8_b, side8_c, side8_d;
    float corner8_A, corner8_B, corner8_C, corner8_D;

public:
    Parallelogram(float sidPl1, float sidPl2, float sidPl3, float sidPl4, float cornPl1, float cornPl2, float cornPl3, float cornPl4) :
        Figures(nameF, answer), side8_a(sidPl1), side8_b(sidPl2), side8_c(sidPl3), side8_d(sidPl4), corner8_A(cornPl1), corner8_B(cornPl2), corner8_C(cornPl3), corner8_D(cornPl4)
    {
        nameF = "Параллелограмм: ";
    }

    void check()
    {
        if (nameF == "Параллелограмм: ")
        {
            answer = "Правильная";
        }

        if ((side8_a == side8_c && side8_b == side8_d) && (corner8_A == corner8_C && corner8_B == corner8_D) && (corner8_A + corner8_B + corner8_C + corner8_D) == 360)
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side8_a << " " << "b=" << side8_b << " " << "c=" << side8_c << " " << "d=" << side8_d << std::endl;
        std::cout << "Углы: " << "A=" << corner8_A << " " << "B=" << corner8_B << " " << "C=" << corner8_C << " " << "D=" << corner8_D << std::endl;
    }
};

class Rhombus : public Figures
{
protected:
    float side9_a, side9_b, side9_c, side9_d;
    float corner9_A, corner9_B, corner9_C, corner9_D;

public:
    Rhombus(float sidRb1, float sidRb2, float sidRb3, float sidRb4, float cornRb1, float cornRb2, float cornRb3, float cornRb4) :
        Figures(nameF, answer), side9_a(sidRb1), side9_b(sidRb2), side9_c(sidRb3), side9_d(sidRb4), corner9_A(cornRb1), corner9_B(cornRb2), corner9_C(cornRb3), corner9_D(cornRb4)
    {
        nameF = "Ромб: ";
    }

    void check()
    {
        if (nameF == "Ромб: ")
        {
            answer = "Правильная";
        }

        if ((side9_a == side9_b && side9_b == side9_c && side9_c == side9_d && side9_d == side9_a) && (corner9_A == corner9_C && corner9_B == corner9_D) && (corner9_A + corner9_D) == 180 && (corner9_B + corner9_C) == 180)
        {
            answer = "Правильная";
        }
        else
        {
            answer = "Неправильная";
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << answer << std::endl;
        std::cout << "Стороны: " << "a=" << side9_a << " " << "b=" << side9_b << " " << "c=" << side9_c << " " << "d=" << side9_d << std::endl;
        std::cout << "Углы: " << "A=" << corner9_A << " " << "B=" << corner9_B << " " << "C=" << corner9_C << " " << "D=" << corner9_D << std::endl;
    }
};

void print_info(const Figures* figure)
{
    figure->print_info();
}



int main()
{
    setlocale(LC_ALL, "Russian");

    UnknownFig unknownFig;
    Triangle triangle(20, 30, 20, 55, 70, 55);
    Righttriangle righttriangle(30, 20, 30, 43, 47, 90);
    IsoscelesTriangle isoscelesTriangle(40, 20, 40, 50, 80, 50);
    EquilateralTriangle equilateralTriangle(35, 35, 35, 60, 60, 60);
    Quadrilateral quadrilateral(33, 26, 14, 43, 68, 72, 117, 103);
    Rectangle rectangle(35, 20, 35, 20, 90, 90, 90, 90);
    Square square(40, 40, 40, 40, 90, 90, 90, 90);
    Parallelogram parallelogram(32, 44, 32, 44, 65, 115, 65, 115);
    Rhombus rhombus(25, 25, 25, 25, 80, 100, 80, 100);

    unknownFig.check();
    triangle.check();
    righttriangle.check();
    isoscelesTriangle.check();
    equilateralTriangle.check();
    quadrilateral.check();
    rectangle.check();
    square.check();
    parallelogram.check();
    rhombus.check();

    print_info(&unknownFig);
    std::cout << std::endl;
    print_info(&triangle);
    std::cout << std::endl;
    print_info(&righttriangle);
    std::cout << std::endl;
    print_info(&isoscelesTriangle);
    std::cout << std::endl;
    print_info(&equilateralTriangle);
    std::cout << std::endl;
    print_info(&quadrilateral);
    std::cout << std::endl;
    print_info(&rectangle);
    std::cout << std::endl;
    print_info(&square);
    std::cout << std::endl;
    print_info(&parallelogram);
    std::cout << std::endl;
    print_info(&rhombus);
    std::cout << std::endl;
    
    return 0;
}
