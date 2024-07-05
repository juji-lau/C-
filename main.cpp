/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
#include <iomanip>
#include "Menu.h"
using namespace std;

class Tool {
    public: 
        Tool () {
            mName = "";
            mPrice = 0;
        }
        void setName (string name){
            mName = name;
        }
        void setPrice(float price){
            mPrice = price;
        }
        void print(){
            std::cout << std::fixed << std::setprecision(2) << "TOOL: \"" << mName << "\", $" << mPrice << std::endl;
        }
    private: 
        string mName;
        float mPrice;
    
};


// Clear the tool info
void clearToolFunction(Tool* mytool){
    mytool->setName("");
    mytool->setPrice(0);
}

// Store the global Tool:
void enterToolInfo(Tool* mytool){
    float price;
    string name;
    std::cout << "Enter new Tool Information: "  << std::endl;
    std::cout << "Enter a name: ";
    std::cin >> name;
    mytool->setName(name);
    std::cout << "Enter a price: ";
    std::cin >> price;
    mytool->setPrice(price);
}


// print global tool info: 
void printToolInfo(Tool* mytool){
    std::cout << "Current Tool Information: " << std::endl;
    mytool->print();
}

Tool globalTool;

int main()
{
    // Declare a Menu
    Menu myMenu;
    MenuItemCode choice;
    bool flag = true;
    
    // Enter into a loop: 
    while(flag){
        myMenu.showMenu();
        choice = myMenu.promptUser();
        switch(choice){
            case 1:
                // clear tool info
                clearToolFunction(&globalTool);
                break;
            case 2:
                enterToolInfo(&globalTool);
                globalTool.print();
                break;
            case 3:
                // print tool info
                printToolInfo(&globalTool);
                break;
            default:
                std::cout << "Quitting! " << std::endl;
                flag = false;
                break;
        }
    }
    return 0;
}

