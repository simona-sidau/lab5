#include "../Repository/Repository.h"
//#include "../Rectangle/Rectangle.h"


//
// Created by user on 3/26/2022.
//
void start(Repository &repo) {
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
}

void show(Rectangle rectangle, int i) {
    std::cout << "Dreptunghiul " << i + 1 << " :" << std::endl;
    std::cout << rectangle;
    std::cout << "-----------------------------" << std::endl;
}

bool check(Point point) {
    if (point.getValueX() < 0)
        return false;
    if (point.getValueY() < 0)
        return false;
    return true;
}

bool check_first_quadrant(Rectangle rectangle) {
    if (!(check(rectangle.getPointA()))) {
        return false;
    }
    if (!(check(rectangle.getPointB()))) {
        return false;
    }
    if (!(check(rectangle.getPointC()))) {
        return false;
    }
    if (!(check(rectangle.getPointD()))) {
        return false;
    }
    return true;
}

void first_quadrant(Repository &repo) {
    int nr_rectangles = repo.getSize();
    for (int i = 0; i < nr_rectangles; i++) {
        if (check_first_quadrant(repo.getRectangleFromPosition(i)))
            show(repo.getRectangleFromPosition(i), i);
    }
}

Rectangle biggest_entity(Repository repo) {
    int nr = repo.getSize();
    Rectangle r = repo.getRectangleFromPosition(0);
    double area = r.calculateArea();
    for (int i = 1; i < nr; i++) {
        if (repo.getRectangleFromPosition(i).calculateArea() > area) {
            r = repo.getRectangleFromPosition(i);
            area = repo.getRectangleFromPosition(i).calculateArea();
        }
    }
    return r;
}

void sequence(Repository repo, Rectangle &r, int &first, int &last) {
    Rectangle cr;
    int copyf, copyl;
    int nr = repo.getSize();
    r = repo.getRectangleFromPosition(0);
    first = last = 0;
    cr = r;
    for (int i = 1; i < nr; i++) {
        if (!(repo.getRectangleFromPosition(i) == cr)) {
            if (i - copyf > last - first) {
                r = cr;
                first = copyf;
                last = i - 1;
            }
            copyf = i;
            cr = repo.getRectangleFromPosition(i);
        }
    }
}



