//
// Created by user on 3/23/2022.
//

#include "Point.h"

Point::Point() {
    this->x = 0;
    this->y = 0;

}

Point::Point(double a, double b) {
    this->x = a;
    this->y = b;
}

Point::Point(const Point &point) {
    this->x = point.x;
    this->y = point.y;
}

Point::~Point() = default;

void Point::setValueX(double a) {
    this->x = a;

}

void Point::setValueY(double b) {
    this->y = b;
}

double Point::getValueX() const {
    return x;
}

double Point::getValueY() const {
    return y;
}

bool operator==(const Point &point1, const Point &point2) {
    return ((point1.x == point2.x) && (point1.y == point2.y));
}

std::istream &operator>>(std::istream &is, Point &point) {
    float valX, valY;
    std::cout << "x = ";
    std::cin >> valX;
    point.x = valX;
    std::cout << "y = ";
    std::cin >> valY;
    point.y = valY;
    return is;
}

std::ostream &operator<<(std::ostream &os, const Point &point) {
    os << "Point{ x: " << point.getValueX() << " y: " << point.getValueY() << " }" << '\n';
    return os;
}


