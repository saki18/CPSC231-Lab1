# CPSC231-Lab1
CPSC231-Lab 1 Source Code

1.	Download the following zipped file.  It contains the three codes files shown.  Extract and compile them in a project.
https://www.msu.edu/~bowmanm/231/Lab01.zip
•	Lab01.sln, Lab01.vcxproj, Lab01.vcxproj.filters
•	Lab01.cpp
•	Box.h
•	Box.cpp

2.	You should get a link error – the put() function is missing.  Add a function to Box.cpp that will output the dimensions of the box in the form height x width.
Examples:  “3x5”  or  “4x6”.

3.	Compile the project again.  Run the program by using the CRTL-F5 key to pause the output at the end of execution.  Write down what you see.











4.	How many times do you see the constructor message?  The destructor message?

 




5.	The this data item shows the address of an object.  It is usually displayed as a hexidecimal number.  In what order are the boxes created and destroyed?







6.	What do you think the two extra pair of constructor/destructor messages represent?
 
7.	Modify your main() function so that it uses the get() function to take user input from the keyboard.  Prompt the user to enter values for both boxes, as shown below.  Use the put() function to verify that your input is correct.

partial listing
    :
    :
Enter box a: 10 3
Enter box b: 4 5
a = 10x3
b = 4x5
    :
    :


8.	Add area() and perimeter() functions to Box.cpp.  Add code to Lab01.cpp so that the program will call the area() and perimeter() functions.   Test your program and print out the code and output.



