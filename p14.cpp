#include <iostream>

class Car
{
public:
    std::string color;
    std::string engine;
    float gas_tank;
    unsigned int wheel;

    void setColor(std::string col);
    void setEngine(std::string eng);
    void setwheel(unsigned int whe);
    void filltank(float liter);
    void running();
};

void Car::setColor(std::string col)
{
    color = col;
}

void Car::setEngine(std::string eng)
{
    engine = eng;
}

void Car::filltank(float liter)     //作用域解析符
{
    gas_tank += liter;
}

void Car::running()
{

}

int main()
{
    std::cout<<"123333"<<std::endl;
    return 0;
}