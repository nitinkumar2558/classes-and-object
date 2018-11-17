

#include <iostream>
using namespace std;

// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
void printpoint();

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::printpoint()
{
cout<<"("<<X<<","<<Y<<")"<<endl;
}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class Rectangle
{private:
	Point p1;
	Point p2;
	Point p3;
	Point p4;

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE:
 
//There are two constructors: one takes two points as arguments and creates a rectangle with the first point as the bottom left corner and the second as the top right corner
public:
Rectangle(Point pt1,Point pt2){
p1.Set_X(pt1.Get_X());
p1.Set_Y(pt1.Get_Y());
p2.Set_X(pt2.Get_X());
p2.Set_Y(pt2.Get_Y());
p3.Set_X(pt1.Get_X());
p3.Set_Y(pt2.Get_Y());
p4.Set_X(pt2.Get_X());
p4.Set_Y(pt1.Get_Y());
}
Rectangle(){
p1.Set_X(0);
p1.Set_Y(0);
p2.Set_X(1);
p2.Set_Y(1);
p3.Set_X(0);
p3.Set_Y(1);
p4.Set_X(1);
p4.Set_Y(0);
}

// print member function prints all 4 corners of the rectangle, using the member function print of the class Point. 
public:
void print(){
p1.printpoint();
p2.printpoint();
p3.printpoint();
p4.printpoint();//calling function which form by us
}

//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
//to find area
//Add two private member functions side1, side2 to the class Rectangle to compute the lengths of the two sides
private:
int side1(){
return (p4.Get_X()-p1.Get_X());
}
int side2(){
return (p2.Get_Y()-p4.Get_Y());
}

//area function 
public:
int area(){
return side1()*side2();
}
};
// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl<<endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
cout<<"printing of point by defalt constructor and parametrised constructor"<<endl;
p1.printpoint();
p2.printpoint();
cout <<endl;
//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
Rectangle h1;
h1.print();
cout<<endl;
Point ptr1(9,7);
Point ptr2(6,2);
Rectangle h2(ptr1,ptr2);
h2.print();

cout<<h1.area()<<endl;
cout<<h2.area()<<endl;

  return 0;
}

//---------------------- point.cpp ------------------------------------//


