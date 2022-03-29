//
// Created by user on 3/23/2022.
//
#include <cassert>
#include "../point/point.h"
#include "../Rectangle/Rectangle.h"
#include "../Repository/Repository.h"
#include "../Rectangle/Operations.h"

void testPoint() {
    //constructor
    Point p = Point(1, 2);
    assert(p.getValueX() == 1);
    assert(p.getValueY() == 2);
    //setters
    p.setValueX(3);
    p.setValueY(4);
    assert(p.getValueX() == 3);
    assert(p.getValueY() == 4);
    //bool operator
    Point q(1, 2);
    assert((p == q) == false);
    Point s(3, 4);
    assert((p == s) == true);
}

void testConstructorsSettersGetters() {
    Point A = Point(1, 1);
    Point B = Point(3, 1);
    Point C = Point(1, 2);
    Point D = Point(3, 2);
    //constructor with parameters
    Rectangle abcd = Rectangle(A, B, C, D);
    assert(abcd.getPointA() == Point(1, 1));
    assert(abcd.getPointB() == Point(3, 1));
    assert(abcd.getPointC() == Point(1, 2));
    assert(abcd.getPointD() == Point(3, 2));
    //copy constructor
    Rectangle mnpq = abcd;
    assert(mnpq.getPointA() == Point(1, 1));
    assert(mnpq.getPointB() == Point(3, 1));
    assert(mnpq.getPointC() == Point(1, 2));
    assert(mnpq.getPointD() == Point(3, 2));
    //setters
    abcd.setPointA(Point(5, 3));
    abcd.setPointB(Point(9, 3));
    abcd.setPointC(Point(5, 5));
    abcd.setPointD(Point(9, 5));
    assert(abcd.getPointA() == Point(5, 3));
    assert(abcd.getPointB() == Point(9, 3));
    assert(abcd.getPointC() == Point(5, 5));
    assert(abcd.getPointD() == Point(9, 5));
    //getters
    assert(abcd.getPointA() == Point(5, 3));
    assert(abcd.getPointB() == Point(9, 3));
    assert(abcd.getPointC() == Point(5, 5));
    assert(abcd.getPointD() == Point(9, 5));

}

void testPerimeterArea() {
    Point A = Point(1, 1);
    Point B = Point(3, 1);
    Point C = Point(1, 2);
    Point D = Point(3, 2);
    Rectangle abcd = Rectangle(A, B, C, D);
    assert(abcd.calculatePerimeter() == 6);
    assert(abcd.calculateArea() == 2);
    Point M = Point(5, 3);
    Point N = Point(9, 3);
    Point P = Point(5, 5);
    Point Q = Point(9, 5);
    Rectangle mnpq = Rectangle(M, N, P, Q);
    assert(mnpq.calculatePerimeter() == 12);
    assert(mnpq.calculateArea() == 8);


}

void testBoolOperator() {
    Point A = Point(1, 1);
    Point B = Point(3, 1);
    Point C = Point(1, 2);
    Point D = Point(3, 2);
    Rectangle abcd = Rectangle(A, B, C, D);
    Point M = Point(5, 3);
    Point N = Point(9, 3);
    Point P = Point(5, 5);
    Point Q = Point(9, 5);
    Rectangle mnpq = Rectangle(M, N, P, Q);
    assert((mnpq == abcd) == false);
    Rectangle q = abcd;
    assert(q == abcd);
}

void testRepositoryFirstQuadrant() {
    Repository repo;
    Point A = Point(1, 1);
    Point B = Point(3, 1);
    Point C = Point(1, 2);
    Point D = Point(3, 2);
    Rectangle abcd = Rectangle(A, B, C, D);
    repo.addItem(abcd);
    assert(check_first_quadrant(abcd));

    Point M = Point(-5, 3);
    Point N = Point(9, 3);
    Point P = Point(-5, 5);
    Point Q = Point(9, 5);
    Rectangle mnpq = Rectangle(M, N, P, Q);
    repo.addItem(mnpq);
    assert(!(check_first_quadrant(mnpq)));
    assert(repo.getSize() == 2);

    Point S = Point(5, 3);
    Point T = Point(9, 3);
    Point U = Point(5, 5);
    Point V = Point(9, 6);
    Rectangle stuv = Rectangle(S, T, U, V);
    repo.addItem(stuv);
    assert(repo.getSize() == 2);

}

void testBiggestEntity() {
    Repository repo;
    Point A = Point(1, 1);
    Point B = Point(3, 1);
    Point C = Point(1, 2);
    Point D = Point(3, 2);
    Rectangle abcd = Rectangle(A, B, C, D);
    repo.addItem(abcd);
    Point M = Point(-5, 3);
    Point N = Point(9, 3);
    Point P = Point(-5, 5);
    Point Q = Point(9, 5);
    Rectangle mnpq = Rectangle(M, N, P, Q);
    repo.addItem(mnpq);
    Point S = Point(5, 3);
    Point T = Point(9, 3);
    Point U = Point(5, 5);
    Point V = Point(9, 5);
    Rectangle stuv = Rectangle(S, T, U, V);
    repo.addItem(stuv);
    assert(biggest_entity(repo) == mnpq);
}

void testSequence() {
    Repository repo;
    Rectangle r;
    int first, last;
    Point A = Point(1, 1);
    Point B = Point(3, 1);
    Point C = Point(1, 2);
    Point D = Point(3, 2);
    Rectangle abcd = Rectangle(A, B, C, D);
    repo.addItem(abcd);
    repo.addItem(abcd);

    Point M = Point(-5, 3);
    Point N = Point(9, 3);
    Point P = Point(-5, 5);
    Point Q = Point(9, 5);
    Rectangle mnpq = Rectangle(M, N, P, Q);
    repo.addItem(mnpq);
    repo.addItem(mnpq);
    repo.addItem(mnpq);
    repo.addItem(abcd);
    sequence(repo, r, first, last);
    assert(r == mnpq);
    assert(first == 2);
    assert(last == 4);
}

void runAllTests() {
    testPoint();
    testConstructorsSettersGetters();
    testPerimeterArea();
    testBoolOperator();
    testRepositoryFirstQuadrant();
    testBiggestEntity();
    testSequence();
    std::cout << "Tests passed! :)" << std::endl;
}