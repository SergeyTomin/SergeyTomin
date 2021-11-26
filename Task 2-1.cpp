#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

/// <summary>
/// Расчитывает площадь прямоугольника.
/// </summary>
/// <param name="side1"> сторна прямоугольника. </param>
/// <param name="side2"> сторона прямоугольника. </param>. 
/// <returns>площадь прямоугольника. </returns>
double getArea( const double side1, const double side2);

/// <summary>
/// Рассчитывает периметр.
/// </summary>
/// <param name="side1"> сторна прямоугольника. </param>
/// <param name="side2"> сторона прямоугольника. </param>
/// <returns> периметр прямоугольника.</returns>
double getPerimeter(const double side1, const double side2 );
/// <summary>
/// Рассчитывает диагональ.
/// </summary>
/// <param name="side1"> сторна прямоугольника. </param>
/// <param name="side2"> сторона прямоугольника. </param>
/// <returns> диагональ </returns>
double getDiagonal ( const double side1,  const double side2);
/// <summary>
/// Перечисления измерений.
/// </summary>
/// <params> AREA площадь прямоугольника. </params>
/// <params> PERIMETER периметр </params>
///<params> DIAGONAL диагональ </params>
enum class Measuares { AREA = 1, PERIMETER, DIAGONAL };

/// <summary>
/// Точка входа в программу.
/// </summary>
/// <returns>0 в случае успеха.</returns>
int main()
{
std::cout << "Введите для" << "\nрасчета площади прямоугольника - "
<< static_cast<int>(Measuares::AREA)
<< "\nрасчета периметра - "
<< static_cast<int>(Measuares::PERIMETER)
<< "\n"<<"расчета диагонали - "<< static_cast<int> (Measuares::DIAGONAL);

int temp;
std::cin >> temp;
std::cout << "Введите 1 сторону прямоугольника" << "\n";
double side1;
std::cin >> side1;
std::cout << "Введите 2 сторону\n";
double side2;
std::cin >> side2;
Measuares action = static_cast<Measuares>(temp);
switch (action)
{
case Measuares::AREA:
{


const double Area = getArea(side1, side2);
std::cout << "Площадь прямоугольника = " << Area;
break;
}
case Measuares::PERIMETER:
{
double radius;
const double perimeter = getPerimeter(side1, side2);
std::cout << "Периметр = " << perimeter;
break;
}
  case Measuares::DIAGONAL:
{
;
const double diagonal = getDiagonal(side1, side2);
std::cout << "Диагональ = " << diagonal;
break;
  }
default:
break;
}
return 0;
}
double getArea(const double side1, const double side2)
{
return side1 * side2;
}
double getPerimeter( const double side1, const double side2)
{
return (side1 *side2) * 2;
}
double getDiagonal ( const double side1,  const double side2) 
{
 return sqrt( pow( side1, 2) + pow( side2, 2 ) ); 
   }