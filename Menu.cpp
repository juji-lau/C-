#include <stdio.h>
#include <iostream> 
#include <iomanip>
#include "Menu.h"
using namespace std;

void Menu::showMenu(){
    std::cout << "---- MENU ---- " << std::endl;
    std::cout << "(1)" << " Clear Tool Information" << std::endl;
    std::cout << "(2)" << " Enter Tool Information" << std::endl;
    std::cout << "(3)" << " Print Tool Information" << std::endl;
    std::cout << "(4)" << " Quit" << std::endl;
}

MenuItemCode Menu::promptUser(){
    int choice;
    std::cout << "Enter Choice> ";
    std::cin >> choice;
    return MenuItemCode(choice);
}
