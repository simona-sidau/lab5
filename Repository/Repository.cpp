//
// Created by user on 3/24/2022.
//

#include "Repository.h"

Repository::Repository() {
    this->nrRectangles = 0;
}

Repository::~Repository() = default;

void Repository::addItem(Rectangle r) {
    if (r.validation())
        this->rectangle[nrRectangles++] = r;

}

int Repository::getSize() {
    return nrRectangles;
}

Rectangle Repository::getRectangleFromPosition(int position) {
    return this->rectangle[position];
}


