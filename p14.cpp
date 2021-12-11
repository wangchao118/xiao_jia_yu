#include <iostream>

#define FULL_GAS 85

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
    int running();
    void warning();
};

void Car::setColor(std::string col)
{
    color = col;
}

void Car::setEngine(std::string eng)
{
    engine = eng;
}

void Car::setwheel(unsigned int whe)
{
    wheel = whe;
}

void Car::filltank(float liter)     //作用域解析符
{
    gas_tank += liter;
}

int Car::running()
{
    std::cout<<"我正在以120的时速在往前移动\n";
    gas_tank--;
    std::cout<<"当前还剩"<<100*gas_tank/FULL_GAS<<"%"<<"油量！";

    return gas_tank;
}

void Car::warning()
{
    std::cout<<"Warning!!"<<"还剩"<<100*gas_tank/FULL_GAS<<"%"<<"油量！";
}

int main()
{
    char i;
    Car mycar;
    mycar.setColor("WHITE");
    mycar.setEngine("V8");
    mycar.setwheel(4);

    mycar.gas_tank = FULL_GAS;

    while(mycar.running())
    {
        if(mycar.running()<10)
        {
            mycar.warning();
            std::cout<<"请问是否需要加满油再行驶（Y/N）\n";
            std::cin>>i;
            if (i =='Y' || i == 'y')
            {
                mycar.filltank(FULL_GAS);
            }
        }
    }

    return 0;
}