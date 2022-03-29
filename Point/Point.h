//
// Created by user on 3/23/2022.
//

#ifndef LAB4COORDONATE_POINT_H
#define LAB4COORDONATE_POINT_H

#include<iostream>

class Point {
private:
    double x;
    double y;
public:
    /**
     * Constructor
     */
    Point();

    /**
     * Constructor with parameters
     * @param x : the value that represents the horizontal direction
     * @param y : the value that represents the vertical direction
     */
    Point(double x, double y);

    /**
     * Copy constructor
     * @param point
     */
    Point(const Point &point);

    /**
     * Deconstructor
     */
    ~Point();

    /**
     * sets a new value for x
     * @param x
     */
    void setValueX(double x);

    /**
     * sets a new value for y
     * @param y
     */
    void setValueY(double y);

    /**
     * gets value of x
     * @return value of x
     */
    double getValueX() const;

    /**
     * gets value for y
     * @return value for y
     */
    double getValueY() const;

    /**
     * verify if two points have the same value
     * @param point1
     * @param point2
     * @return True, if they have the same value, False, if not
     */
    friend bool operator==(const Point &point1, const Point &point2);

    /**
     * loads a Point from an input stream
     * @param is input stream
     * @param point Point
     * @return output stream
     */
    friend std::istream &operator>>(std::istream &is, Point &point);

    /**
     * saves a Point into an output stream
     * @param os output stream
     * @param point
     * @return input stream
     */
    friend std::ostream &operator<<(std::ostream &os, const Point &point);


};

#endif //LAB4COORDONATE_POINT_H
