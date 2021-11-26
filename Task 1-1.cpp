#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \return значение функции
 */
double getA(const double x, const double y, const double z);
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return 0  значение функции
 */
double getB(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    const double x = -2.9;
    const double y = 15.5;
    const double z = 1.5;

    const double a = getA(x, y, z);
    const double b = getB(x, y, z);


    std::cout << std::setprecision(9) << "x = " << x << " y = " << y << " z = " << z 
        << " a = " << a << " b = " << b  << std::endl;
    return 0;
}



double getA(const double x, const double y, const double z)
{
    return (sqrt(pow(x,2) + y)) - pow(y,2)*sin((x + z)/x)*sin((x + z) / x);
}

double getB(const double x, const double y, const double z)
{
    return pow(cos(x*x*x),2) - x/(sqrt((pow(z,2)) + pow(y,2)));
}