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
    void Printval();
    

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

//Member function to print coordinates
void Point::Printval(){
    /*cout<<"The x coordinate is "<<Get_X()<<endl;
    cout<<"The y coordinate is "<<Get_Y()<<endl; */
    cout<<"Therefore the coordinates are ("<<Get_X()<<","<<Get_Y()<<")"<<endl;
}
    

//Lab 7 exercise 4.1. Add definition of member function print:


// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************
class Rectangle{
    //Four corner points of the rectangle are private
    private:
    Point p1,p2,p3,p4;
    
    public:
    //Constuctor that takes arguments
    Rectangle(Point a, Point b){
    p1=a;
	p2=Point(b.Get_X(),a.Get_Y());
	p3=b;
    p4=Point(a.Get_X(),b.Get_Y());
        
        
    }
    
    //Default constructor
    Rectangle(){
        p1=Point(0,0);
        p2=Point(1,0);
        p3=Point(1,1);
        p4=Point(0,1);
    }
    
    void printcorner(){
    		p1.Printval();
    		p2.Printval();
    		p3.Printval();
    		p4.Printval();
}

    double side1(){
        return (p2.Get_X()-p1.Get_X());
    }
    double side2(){
        return (p4.Get_Y()-p1.Get_Y());
    }
    double area(){
        return (side1()*side2());
    }
    
    
};

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 



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
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  

Rectangle rec1;
int x1,y1,x2,y2;

    cout<<"Enter X coordinate of bottom left corner of the rectangle : "<<endl;
	cin>>x1;
	cout<<"Enter Y coordinate of bottom left corner of the rectangle : "<<endl;
	cin>>y1;
	cout<<"Enter X coordinate of top right corner of the rectangle : "<<endl;
	cin>>x2;
	cout<<"Enter Y coordinate of top right corner of the rectangle : "<<endl;
    cin>>y2;
    
    //Declaring the corner points of rec1
    Point a,b;
    
    //assigning X and Y coordinates to the corners
	a.Set_X(x1);
	a.Set_Y(y1);
	b.Set_X(x2);
    b.Set_Y(y2);
    
    
    //Declaring second rectangle with default corners
    Rectangle rec2(a,b);
    
    cout<<"The four corners of the default rectangle are : "<<endl;
	rec1.printcorner();
	cout<<"The four corners of the given rectangle are : "<<endl;
    rec2.printcorner();
    
    //Print the area of both the triangles
    
    
	cout<<"The area of default rectangle : "<<rec1.area()<<endl;
	cout<<"The area of given rectangle : "<<rec2.area()<<endl;

    

  return 0;
}

//---------------------- point.cpp ------------------------------------//



