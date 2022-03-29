//
// Created by user on 3/23/2022.
//

#include <valarray>
#include "Rectangle.h"

Rectangle::Rectangle() {
    this->A = Point(0, 0);
    this->B = Point(0, 0);
    this->C = Point(0, 0);
    this->D = Point(0, 0);


}

Rectangle::Rectangle(Point M, Point N, Point P, Point Q) {
    this->A = M;
    this->B = N;
    this->C = P;
    this->D = Q;

}

Rectangle::Rectangle(const Rectangle &rectangle) {
    this->A = rectangle.A;
    this->B = rectangle.B;
    this->C = rectangle.C;
    this->D = rectangle.D;

}

Rectangle::~Rectangle() = default;

void Rectangle::setPointA(Point newA) {
    this->A = newA;

}

void Rectangle::setPointB(Point newB) {
    this->B = newB;

}

void Rectangle::setPointC(Point newC) {
    this->C = newC;

}

void Rectangle::setPointD(Point newD) {
    this->D = newD;

}

Point Rectangle::getPointA() {
    return A;
}

Point Rectangle::getPointB() {
    return B;
}

Point Rectangle::getPointC() {
    return C;
}

Point Rectangle::getPointD() {
    return D;
}

double Rectangle::getSideAB() {
    double AB;
    AB = sqrt((B.getValueX() - A.getValueX()) * (B.getValueX() - A.getValueX()) +
              (B.getValueY() - A.getValueY()) * (B.getValueY() - A.getValueY()));
    return AB;
}

double Rectangle::getSideAC() {
    double AC;
    AC = sqrt((C.getValueX() - A.getValueX()) * (C.getValueX() - A.getValueX()) +
              (C.getValueY() - A.getValueY()) * (C.getValueY() - A.getValueY()));
    return AC;
}

double Rectangle::getSideCD() {
    double CD;
    CD = sqrt((D.getValueX() - C.getValueX()) * (D.getValueX() - C.getValueX()) +
              (D.getValueY() - C.getValueY()) * (D.getValueY() - C.getValueY()));
    return CD;
}

double Rectangle::getSideBD() {
    double BD;
    BD = sqrt((D.getValueX() - B.getValueX()) * (D.getValueX() - B.getValueX()) +
              (D.getValueY() - B.getValueY()) * (D.getValueY() - B.getValueY()));
    return BD;
}

bool Rectangle::validation() {
    double l1, l2, l3, l4;
    l1 = getSideAB();
    l2 = getSideAC();
    l3 = getSideCD();
    l4 = getSideBD();
    if ((l1 == l2 and l3 == l4) or (l1 == l3 and l2 == l4) or (l1 == l4 and l2 == l3)) {
        if (l1 > 0 and l2 > 0 and l3 > 0 and l4 > 0)
            return true;
    }
    return false;
}

double Rectangle::calculatePerimeter() {
    double p;
    p = getSideAB() + getSideCD() + getSideAC() + getSideBD();
    return p;
}

double Rectangle::calculateArea() {
    double l1 = getSideAB();
    double l2 = getSideBD();
    if (l1 == l2) {
        double l3 = getSideAC();
        return l1 * l3;
    } else {
        return l1 * l2;
    }
}

bool operator==(const Rectangle &rectangle1, const Rectangle &rectangle2) {
    return (rectangle1.A == rectangle2.A) && (rectangle1.B == rectangle2.B) &&
           (rectangle1.C == rectangle2.C) && (rectangle1.D == rectangle2.D);
}

std::istream &operator>>(std::istream &is, Rectangle &rectangle) {
    Point A, B, C, D;
    std::cout << "A: ";
    is >> A;
    rectangle.A = A;
    std::cout << "B: ";
    is >> B;
    rectangle.B = B;
    std::cout << "C: ";
    is >> C;
    rectangle.C = C;
    std::cout << "D: ";
    is >> D;
    rectangle.D = D;
}

std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle) {
    os << "Rectangle: " << '\n' << '{' << '\n' << "A: " << rectangle.A
       << "B: " << rectangle.B << " C: " << rectangle.C << " D: " << rectangle.D
       << '}' << '\n';
    return os;
}




