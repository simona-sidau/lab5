//
// Created by user on 3/26/2022.
//
#include "../Rectangle/Rectangle.h"
#include "../Repository/Repository.h"

#ifndef LAB4COORDONATE_OPERATIONS_H
#define LAB4COORDONATE_OPERATIONS_H

/**
 * adds rectangles at the start of the program
 * @param repo
 */
void start(Repository &repo);

/**
 * gets the rectangles that are complete situated in the first quadrant
 * @param repo
 */
void first_quadrant(Repository &repo);

//auxiliary functions
/**
 * shows a rectangle
 * @param rectangle
 * @param i : position of the rectangle
 */
void show(Rectangle rectangle, int i);

/**
 * Checks if a rectangle is situated in the first quadrant
 * @param rectangle
 * @return true, if the condition is true, false if not
 */
bool check_first_quadrant(Rectangle rectangle);

/**
 * Checks if a point has positive coordinates
 * @param point
 * @return true, if both coordinates are positive, false, if not
 */
bool check(Point point);

/**
 * Gets the biggest rectangle from the repository (area)
 * @param repo
 * @return biggest rectangle
 */
Rectangle biggest_entity(Repository repo);

/**
 *Determines the biggest sequence of equal rectangles
 * @param repo
 * @param r
 * @param first - the beginning of the sequence
 * @param last - the end of the sequence
 */
void sequence(Repository repo, Rectangle &r, int &first, int &last);


#endif //LAB4COORDONATE_OPERATIONS_H
