//
// Created by user on 3/24/2022.
//

#ifndef LAB4COORDONATE_REPOSITORY_H
#define LAB4COORDONATE_REPOSITORY_H

#include "../Rectangle/Rectangle.h"

class Repository {
private:
    //Rectangle* rectangle = new Rectangle[100];
    Rectangle rectangle[100];
    int nrRectangles;
public:
    /**
     * Constructor
     */
    Repository();

    /**
     * Destructor
     */
    ~Repository();

    /**
     * Adds a rectangle
     * @param r a rectangle
     */
    void addItem(Rectangle r);

    Rectangle getRectangleFromPosition(int position);

    /**
     * counts the memorized rectangles
     * @return the number of the memorized rectangles
     */
    int getSize();
};

#endif //LAB4COORDONATE_REPOSITORY_H
