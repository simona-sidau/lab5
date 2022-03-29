//
// Created by user on 3/23/2022.
//

#ifndef LAB4COORDONATE_RECTANGLE_H
#define LAB4COORDONATE_RECTANGLE_H

#include <iostream>
#include "../Point/Point.h"

class Rectangle {
private:
    Point A;
    Point B;
    Point C;
    Point D;

public:
    /**
     * Constructor
     */
    Rectangle();

    /**
     * Constructor with parameters
     * @param M : the M point of the rectangle
     * @param N : the N point of the rectangle
     * @param P : the P point of the rectangle
     * @param Q : the Q point of the rectangle
     */
    Rectangle(Point M, Point N, Point P, Point Q);

    /**
     * Copy Constructor
     * @param rectangle
     */
    Rectangle(const Rectangle &rectangle);

    /**
     * Deconstructor
     */
    ~Rectangle();

    /**
     * sets new values for the A point's coordinates
     * @param newA
     */
    void setPointA(Point newA);

    /**
     * sets new values for the B point's coordinates
     * @param newB
     */
    void setPointB(Point newB);

    /**
     * sets new values for the C point's coordinates
     * @param newC
     */
    void setPointC(Point newC);

    /**
     * sets new values for the D point's coordinates
     * @param newD
     */
    void setPointD(Point newD);

    /**
     * gets the values of the A point's coordinates
     * @return the values of the A point's coordinates
     */
    Point getPointA();

    /**
     * gets the values of the B point's coordinates
     * @return the values of the B point's coordinates
     */
    Point getPointB();

    /**
     * gets the values of the C point's coordinates
     * @return the values of the C point's coordinates
     */
    Point getPointC();

    /**
     * gets the values of the D point's coordinates
     * @return the values of the D point's coordinates
     */
    Point getPointD();

    /**
     * calculates the value of the AB side
     * @return the value of the AB side
     */
    double getSideAB();

    /**
     * calculates the value of the AC side
     * @return the value of the AC side
     */
    double getSideAC();

    /**
     * calculates the value of the BC side
     * @return the value of the BC side
     */
    double getSideCD();

    /**
     * calculates the value of the BC side
     * @return the value of the BC side
     */
    double getSideBD();

    /**
     * checks if it is possible to create a rectangle with AB, AC, BD, BC
     * @return true, if ABCD is a rectangle, false if not
     */
    bool validation();

    /**
     * Calculates the perimeter of the rectangle
     * @return the rectangle's perimeter
     */
    double calculatePerimeter();

    /**
     * calculates the area of the rectangle
     * @return the rectangle's area
     */
    double calculateArea();

    /**
     * verifies if two rectangles are equal
     * @param rectangle1
     * @param rectangle2
     * @return true, if they are equal, false, ig they are not
     */
    friend bool operator==(const Rectangle &rectangle1, const Rectangle &rectangle2);

    /**
     * loads a rectangle from an input stream
     * @param is input stream
     * @param rectangle
     * @return output stream
     */
    friend std::istream &operator>>(std::istream &is, Rectangle &rectangle);

    /**
     * loads a rectngle from an input stream
     * @param is input stream
     * @param rectangle
     * @return output stream
     */
    friend std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle);


};

#endif //LAB4COORDONATE_RECTANGLE_H
