#include <iostream>

double RingArea(double radius) {
    return 3.14 * radius * radius;
}

double RingArea(double innerRadius, double outerRadius) {
    return RingArea(outerRadius) - RingArea(innerRadius);
}

int main() {
    setlocale(0, "");
    double inRadius, outRadius;

    std::cout << "Введите значение внутренного радиуса: ";
    std::cin >> inRadius;

    std::cout << "Введите значение внешнего радиуса: ";
    std::cin >> outRadius;

    if (outRadius < inRadius) {
        std::cout << "Ошибка: внешний радиус не может быть меньше" << std::endl;

        std::cout << "Введите значение внутренного радиуса: ";
        std::cin >> inRadius;

        std::cout << "Введите значение внешнего радиуса: ";
        std::cin >> outRadius;
    }

    double ring_Area = RingArea(inRadius, outRadius);

    std::cout << "Площадь кольца с внутренним радиусом " << inRadius
        << " и внешним радиусом " << outRadius << " равна " << ring_Area << std::endl;

    return 0;
}