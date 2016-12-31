/***********************************
 * Lab 01 Box driver
 * Written by Mark Bowman 09-Nov-06
 * Updated by Masaki Takahashi
 ***********************************/

#include <iostream>
using namespace std;

#include "Box.h"

/***********************************
 * Main()
 ***********************************/
void main()
{ class box a,b,c;

// Display Boxes 
cout << "Enter Box A:"; a.get (cin);
cout << "Enter Box B:"; b.get (cin);

cout << "a = "; a.put (cout);
cout << "b = "; b.put (cout);

cout << "Area of A is: "; cout << a.area () << endl; 
cout << "Parameter of A is: "; cout << a.parameter() << endl;

cout << "Area of B is: "; cout << b.area () << endl; 
cout << "Parameter of B is: "; cout << b.parameter () << endl;

  }

