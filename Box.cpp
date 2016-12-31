#include <iostream>
using namespace std;

#include "Box.h"

/**************************************
 * Constructor - no parameters
 **************************************/
box::box()
{ cout << "Box " << this << " created\n";
  height = 0;
  width = 0;
}

/**************************************
 * Constructor - all parameters
 **************************************/
box::box(int h,int w)
{ cout << "Box " << this << " created\n";
  height = h;
  width = w;
}

/**************************************
 * Destructor - optional
 **************************************/
box::~box()
{ cout << "Box " << this << " destroyed\n";
}

/**************************************
 * Get
 **************************************/
bool box::get(istream &in)
{ in >> height;
  in >> width;
  return in.good();
}
/**************************************** 
Put Function 
****************************************/
void box:: put (ostream &out)
{ 
	cout << height << "x" << width << endl; 
}
/**************************************
Area
***************************************/
float box::area ()
{
	return (height*width);
}

/**************************************
Parameter 
***************************************/
float box::parameter()
{
	return (2*height + 2*width);
}
