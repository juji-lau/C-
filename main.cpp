/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// g++ main.cpp Menu.cpp Tool.cpp -o out
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "Menu.h"
#include "Tool.h"
using namespace std;

// Clear the tool info
void clearToolFunction(Tool *mytool)
{
    std::cout << "Clearing Tool Information... " << std::endl;
    mytool->setName("");
    mytool->setPrice(0);
    mytool->setDescription("");
}

// Store the global Tool:
void enterToolInfo(Tool *mytool)
{
    float price;
    string name;
    string description;
    std::cout << "Enter new Tool Information: " << std::endl;
    std::cout << "Enter a name: ";
    std::cin >> name;
    mytool->setName(name);
    std::cout << "Enter a price: ";
    std::cin >> price;
    mytool->setPrice(price);
    std::cout << "Enter a description: " << std::endl;
    cin.ignore();
    getline(cin, description);
    mytool->setDescription(description);
}

// print global tool info:
void printToolInfo(Tool *mytool)
{
    std::cout << "Current Tool Information: " << std::endl;
    mytool->print();
}

int main()
{
    // Declare a Menu
    Menu myMenu;
    MenuItemCode choice;
    bool flag = true;

    // Declare a Tool
    Tool theTool("Hand Saw", 10.99, "Used for cutting wood");

    // Enter into a loop:
    while (flag)
    {
        myMenu.showMenu();
        choice = myMenu.promptUser();
        switch (choice)
        {
        case 1:
            // clear tool info
            clearToolFunction(&theTool);
            break;
        case 2:
            enterToolInfo(&theTool);
            theTool.print();
            break;
        case 3:
            // print tool info
            printToolInfo(&theTool);
            break;
        default:
            std::cout << "Quitting! " << std::endl;
            flag = false;
            break;
        }
    }
    return 0;
}
