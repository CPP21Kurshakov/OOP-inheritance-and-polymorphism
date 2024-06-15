#include <iostream>
#include <string>



class Figures
{
protected:
    std::string nameF;

public:
    Figures(const std::string& name) : nameF(name) {}

    virtual void print_info() const = 0;

    std::string getName()
    {
        return nameF;
    }
};

//В условии задания не сказано про треугольник, а вот в примере работы программы он есть;
class Triangle : public Figures
{
protected:
     float sid_a, sid_b, sid_c;
     float corner_A, corner_B, corner_C;

public:

    Triangle(float sidT1, float sidT2, float sidT3, float cornT1, float cornT2, float cornT3) : 
        Figures(nameF), sid_a(sidT1), sid_b(sidT2), sid_c(sidT3), corner_A(cornT1), corner_B(cornT2), corner_C(cornT3)
    {
        nameF = "Треугольник: ";
    }

    void check()
    {
        if (corner_C != 60)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах угла С (Triangle)!!! Угол С должен быть равен 60" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a << " " << "b=" << sid_b << " " << "c=" << sid_c << std::endl;
        std::cout << "Углы: " << "A=" << corner_A << " " << "B=" << corner_B << " " << "C=" << corner_C << std::endl;
    }
};

class RightTriangle : public Figures
{
protected:
    float sid_a1, sid_b1, sid_c1;
    float corner_A1, corner_B1, corner_C1;

public:
    RightTriangle(float sidRt1, float sidRt2, float sidRt3, float cornRt1, float cornRt2, float cornRt3) :
        Figures(nameF), sid_a1(sidRt1), sid_b1(sidRt2), sid_c1(sidRt3), corner_A1(cornRt1), corner_B1(cornRt2), corner_C1(cornRt3)
    {
        nameF = "Прямоугольный треугольник: ";
    }

    void check()
    {
        if (corner_C1 != 90)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах угла С (RightTriangle)!!! Угол С должен быть равен 90" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a1 << " " << "b=" << sid_b1 << " " << "c=" << sid_c1 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A1 << " " << "B=" << corner_B1 << " " << "C=" << corner_C1 << std::endl;
    }
};

class IsoscelesTriangle : public Figures
{
protected:
    float sid_a2, sid_b2, sid_c2;
    float corner_A2, corner_B2, corner_C2;

public:
    IsoscelesTriangle(float sidIt1, float sidIt2, float sidIt3, float cornIt1, float cornIt2, float cornIt3) :
        Figures(nameF), sid_a2(sidIt1), sid_b2(sidIt2), sid_c2(sidIt3), corner_A2(cornIt1), corner_B2(cornIt2), corner_C2(cornIt3)
    {
        nameF = "Равнобедренный треугольник: ";
    }

    void check()
    {
        if (sid_a2 != sid_c2)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон 'а' и 'с' (IsoscelesTriangle)!!! Стороны должны быть равны" << std::endl;
            exit(1);
        }
        else if (corner_A2 != corner_C2)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства углов 'А' и 'С' (IsoscelesTriangle)!!! Углы должны быть равны 45" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a2 << " " << "b=" << sid_b2 << " " << "c=" << sid_c2 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A2 << " " << "B=" << corner_B2 << " " << "C=" << corner_C2 << std::endl;
    }
};

class EquilateralTriangle : public Figures
{
protected:
    float sid_a3, sid_b3, sid_c3;
    float corner_A3, corner_B3, corner_C3;

public:
    EquilateralTriangle(float sidEt1, float sidEt2, float sidEt3, float cornEt1, float cornEt2, float cornEt3) :
        Figures(nameF), sid_a3(sidEt1), sid_b3(sidEt2), sid_c3(sidEt3), corner_A3(cornEt1), corner_B3(cornEt2), corner_C3(cornEt3)
    {
        nameF = "Равносторонний треугольник: ";
    }

    void check()
    {
        if (sid_a3 != sid_c3 || sid_a3 != sid_b3)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (EquilateralTriangle)!!! Стороны должны быть равны" << std::endl;
            exit(1);
        }
        else if (corner_A3 != corner_C3 || corner_A3 != corner_B3)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства углов (EquilateralTriangle)!!! Углы должны быть равны" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a3 << " " << "b=" << sid_b3 << " " << "c=" << sid_c3 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A3 << " " << "B=" << corner_B3 << " " << "C=" << corner_C3 << std::endl;
    }
};

//В условии не сказано про четырёхугольник (многоугольник), не сказано какой вид (взят за основу "выпуклый"), а в примере работы программы он есть;
class Quadrilateral : public Figures
{
protected:
    float sid_a4, sid_b4, sid_c4, sid_d4;
    float corner_A4, corner_B4, corner_C4, corner_D4;

public:
    Quadrilateral(float sidQl1, float sidQl2, float sidQl3, float sidQl4, float cornQl1, float cornQl2, float cornQl3, float cornQl4) :
        Figures(nameF), sid_a4(sidQl1), sid_b4(sidQl2), sid_c4(sidQl3), sid_d4(sidQl4), corner_A4(cornQl1), corner_B4(cornQl2), corner_C4(cornQl3), corner_D4(cornQl4)
    {
        nameF = "Четырёхугольник: ";
    }

    void check()
    {
        if ((corner_A4 + corner_B4 + corner_C4 + corner_D4) != 360)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах суммы углов (Quadrilateral)!!! Сумма углов должна быть равна 360" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a4 << " " << "b=" << sid_b4 << " " << "c=" << sid_c4 << " " << "d=" << sid_d4 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A4 << " " << "B=" << corner_B4 << " " << "C=" << corner_C4 << " " << "D=" << corner_D4 << std::endl;
    }
};

class Rectangle : public Figures
{
protected:
    float sid_a5, sid_b5, sid_c5, sid_d5;
    float corner_A5, corner_B5, corner_C5, corner_D5;

public:
    Rectangle(float sidR1, float sidR2, float sidR3, float sidR4, float cornR1, float cornR2, float cornR3, float cornR4) :
        Figures(nameF), sid_a5(sidR1), sid_b5(sidR2), sid_c5(sidR3), sid_d5(sidR4), corner_A5(cornR1), corner_B5(cornR2), corner_C5(cornR3), corner_D5(cornR4)
    {
        nameF = "Прямоугольник: ";
    }

    void check()
    {
        if (corner_A5 != 90 || corner_B5 != 90 || corner_C5 != 90 || corner_D5 != 90)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах углов (Rectangle)!!! Каждый угол должен быть равен 90" << std::endl;
            exit(1);
        }
        else if (sid_a5 != sid_c5 || sid_b5 != sid_d5)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (Rectangle)!!! Стороны 'а' и 'с', стороны 'b' и 'd' должны быть равны" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a5 << " " << "b=" << sid_b5 << " " << "c=" << sid_c5 << " " << "d=" << sid_d5 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A5 << " " << "B=" << corner_B5 << " " << "C=" << corner_C5 << " " << "D=" << corner_D5 << std::endl;
    }
};

class Square : public Figures
{
protected:
    float sid_a6, sid_b6, sid_c6, sid_d6;
    float corner_A6, corner_B6, corner_C6, corner_D6;

public:
    Square(float sidSq1, float sidSq2, float sidSq3, float sidSq4, float cornSq1, float cornSq2, float cornSq3, float cornSq4) :
        Figures(nameF), sid_a6(sidSq1), sid_b6(sidSq2), sid_c6(sidSq3), sid_d6(sidSq4), corner_A6(cornSq1), corner_B6(cornSq2), corner_C6(cornSq3), corner_D6(cornSq4)
    {
        nameF = "Квадрат: ";
    }

    void check()
    {
        if (corner_A6 != 90 || corner_B6 != 90 || corner_C6 != 90 || corner_D6 != 90)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах углов (Square)!!! Углы должны быть равны 90" << std::endl;
            exit(1);
        }
        else if (sid_a6 != sid_c6 || sid_b6 != sid_d6 || sid_b6 != sid_c6 || sid_c6 != sid_d6)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (Square)!!! Стороны должны быть равны" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a6 << " " << "b=" << sid_b6 << " " << "c=" << sid_c6 << " " << "d=" << sid_d6 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A6 << " " << "B=" << corner_B6 << " " << "C=" << corner_C6 << " " << "D=" << corner_D6 << std::endl;
    }
};

class Parallelogram : public Figures
{
protected:
    float sid_a7, sid_b7, sid_c7, sid_d7;
    float corner_A7, corner_B7, corner_C7, corner_D7;

public:
    Parallelogram(float sidPrl1, float sidPrl2, float sidPrl3, float sidPrl4, float cornPrl1, float cornPrl2, float cornPrl3, float cornPrl4) :
        Figures(nameF), sid_a7(sidPrl1), sid_b7(sidPrl2), sid_c7(sidPrl3), sid_d7(sidPrl4), corner_A7(cornPrl1), corner_B7(cornPrl2), corner_C7(cornPrl3), corner_D7(cornPrl4)
    {
        nameF = "Параллелограмм: ";
    }

    void check()
    {
        if (corner_A7 != corner_C7 || corner_B7 != corner_D7)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах углов (Parallelogram)!!! Углы 'A' и 'C','B' и 'D' должны быть равны" << std::endl;
            exit(1);
        }
        else if (sid_a7 != sid_c7 || sid_b7 != sid_d7)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (Parallelogram)!!! Стороны 'a' и 'c','b' и 'd' должны быть равны" << std::endl;
            exit(1);
        }
        else if (corner_A7 + corner_D7 != 180 || corner_B7 + corner_C7 != 180)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах углов (Parallelogram)!!! Суммы углов 'A' и 'D','B' и 'C' должны быть равны 180" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a7 << " " << "b=" << sid_b7 << " " << "c=" << sid_c7 << " " << "d=" << sid_d7 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A7 << " " << "B=" << corner_B7 << " " << "C=" << corner_C7 << " " << "D=" << corner_D7 << std::endl;
    }
};

class Rhombus : public Figures
{
protected:
    float sid_a8, sid_b8, sid_c8, sid_d8;
    float corner_A8, corner_B8, corner_C8, corner_D8;

public:
    Rhombus(float sidRh1, float sidRh2, float sidRh3, float sidRh4, float cornRh1, float cornRh2, float cornRh3, float cornRh4) :
        Figures(nameF), sid_a8(sidRh1), sid_b8(sidRh2), sid_c8(sidRh3), sid_d8(sidRh4), corner_A8(cornRh1), corner_B8(cornRh2), corner_C8(cornRh3), corner_D8(cornRh4)
    {
        nameF = "Ромб: ";
    }

    void check()
    {
        if (corner_A8 != corner_C8 || corner_B8 != corner_D8)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах углов (Rhombus)!!! Углы 'A' и 'C','B' и 'D' должны быть равны" << std::endl;
            exit(1);
        }
        else if (sid_a8 != sid_c8 || sid_b8 != sid_d8 || sid_a8 != sid_b8 || sid_b8 != sid_c8)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (Rhombus)!!! Стороны должны быть равны" << std::endl;
            exit(1);
        }
        else if (corner_A8 + corner_D8 != 180 || corner_B8 + corner_C8 != 180)
        {
            std::cout << "Обнаружены ошибки в указанных параметрах углов (Rhombus)!!! Суммы углов 'A' и 'D','B' и 'C' должны быть равны 180" << std::endl;
            exit(1);
        }
    }

    void print_info() const override
    {
        std::cout << nameF << std::endl;
        std::cout << "Стороны: " << "a=" << sid_a8 << " " << "b=" << sid_b8 << " " << "c=" << sid_c8 << " " << "d=" << sid_d8 << std::endl;
        std::cout << "Углы: " << "A=" << corner_A8 << " " << "B=" << corner_B8 << " " << "C=" << corner_C8 << " " << "D=" << corner_D8 << std::endl;
    }
};

void print_info(const Figures* figure)
{
    figure->print_info();
}



int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle(15, 22, 30, 40, 50, 60);
    RightTriangle rightTriangle(10, 20, 30, 44, 46, 90);
    IsoscelesTriangle isoscelesTriangle(20, 40, 20, 45, 90, 45);
    EquilateralTriangle equilateralTriangle(30, 30, 30, 60, 60, 60);
    Quadrilateral quadrilateral(25, 20, 40, 35, 97, 83, 76, 104);
    Rectangle rectangle(40, 20, 40, 20, 90, 90, 90, 90);
    Square square(55, 55, 55, 55, 90, 90, 90, 90);
    Parallelogram parallelogram(30, 50, 30, 50, 60, 120, 60, 120);
    Rhombus rhombus(40, 40, 40, 40, 70, 110, 70, 110);

    triangle.check();
    rightTriangle.check();
    isoscelesTriangle.check();
    equilateralTriangle.check();
    quadrilateral.check();
    rectangle.check();
    square.check();
    parallelogram.check();
    rhombus.check();

    print_info(&triangle);
    std::cout << std::endl;
    print_info(&rightTriangle);
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
    
    return 0;
}
