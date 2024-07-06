#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

class Tool
{
public:
  Tool();
  Tool(string name, float price, string description);
  void setName(string name);
  void setPrice(float price);
  void setDescription(string description);
  void print();

private:
  string mName;
  float mPrice;
  string mDescription;
};