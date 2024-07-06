#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "Menu.h"
#include "Tool.h"

// Default constructor
Tool::Tool()
{
  {
    mName = "";
    mPrice = 0;
    mDescription = "";
  }
}

// Overloaded constructor
Tool::Tool(string name, float price, string description)
{
  {
    mName = name;
    mPrice = price;
    mDescription = description;
  }
}

//Setter
void Tool::setName(string name)
{
  mName = name;
}
// Setter
void Tool::setPrice(float price)
{
  mPrice = price;
}

void Tool::setDescription(string description)
{
  mDescription = description;
}

// Print
void Tool::print()
{
  std::cout << std::fixed << std::setprecision(2) << "TOOL: \"" << mName << "\", $" << mPrice << std::endl;
  std::cout << "DESCRIPTION: " << mDescription << std::endl;
}