//
// Created by user on 3/24/2022.
//
#include "RunMenu.h"
#include "option.h"
#include "../Rectangle/Rectangle.h"
#include "../Repository/Repository.h"
#include "../Rectangle/Operations.h"

int first, last;
char choice;
Rectangle abcd, r;
Repository repo;
bool consoleOn = true;

void add_rectangle() {
    int ok;
    ok = repo.getSize();
    std::cin >> abcd;
    repo.addItem(abcd);
    if (repo.getSize() == ok)
        std::cout << "Nu s-a putut adauga dreptunghiul!" << std::endl;
}

void show_all() {
    int nrRectangles;
    nrRectangles = repo.getSize();
    for (int i = 0; i < nrRectangles; i++) {
        std::cout << "Dreptunghiul " << i + 1 << " :" << std::endl;
        r = repo.getRectangleFromPosition(i);
        std::cout << r;
        std::cout << "Perimetrul: " << r.calculatePerimeter() << std::endl;
        std::cout << "Aria: " << r.calculateArea() << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }
}

void console() {
    start(repo);
    while (consoleOn) {
        runMenu();
        choice = option();
        switch (choice) {
            case '1': {
                add_rectangle();
                break;
            }
            case '2': {
                show_all();
                break;
            }
            case '3': {
                r = biggest_entity(repo);
                std::cout << r;
                std::cout << "Perimetrul: " << r.calculatePerimeter() << std::endl;
                std::cout << "Aria: " << r.calculateArea() << std::endl;
                std::cout << "-----------------------------" << std::endl;
                break;
            }
            case '4': {
                first_quadrant(repo);
                break;
            }
            case '5': {
                sequence(repo, r, first, last);
                std::cout << "Dreptunghiul :" << r << " apare de " << last - first + 1 << " ori, de la pozitia "
                          << first + 1 << " pana la pozitia " << last + 1 << std::endl;
                break;
            }
            case 'x' : {
                consoleOn = false;
                break;
            }
            default: {
                std::cout << "Optiune gresita! Reincercati!" << std::endl;
            }

        }
    }
}
