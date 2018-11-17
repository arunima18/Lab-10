/*Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) 
of user inputted length and breadth. Compare the areas and perimeter of the those rectangles. */

#include<iostream>
using namespace std;

//Define the class
class rectangle{
    //Name the datatype and parametres
    public:
    int length;
    int breadth;


//Write area function
int area(){
    int c=length*breadth;
    return c;
}
    
//Write perimeter function
int perimeter(){
    int z=2*(length+breadth);
    return z;
}
};
//Write main function
int main(){
    //declare variables of rectangle datatype for length and breadth of two rectangles
    rectangle rec1,rec2;
    //Input lenghths and breadhths from user
    cout<<"Enter the length of first rectangle"<<endl;
    cin>>rec1.length;
    cout<<"Enter the length of second rectangle"<<endl;
    cin>>rec2.length;
    cout<<"Enter the breadth of first rectangle"<<endl;
    cin>>rec1.breadth;
    cout<<"Enter the breadth od second rectangle"<<endl;
    cin>>rec2.breadth;


//Call area function

int area1=rec1.area();
int area2=rec2.area();

//Print area
cout<<"The area of the first rectangle is "<<area1<<endl;
cout<<"The area og the second rectangle is "<<area2<<endl;
//comapare area
if (area1>area2){
    cout<<"Area of the first rectangle is greater than the second rectangle"<<endl;
}
else{
    cout<<"Area of the second rectangle is greater than the first rectangle"<<endl;
}
//Call perimetre function
int peri1=rec1.perimeter();
int peri2=rec2.perimeter();
//Print perimetres
cout<<"The perimetre of the first rectangle is "<<peri1<<endl;
cout<<"The perimetre of the second rectangle is "<<peri2<<endl;
//Compare perimetres
if (peri1>peri2){
    cout<<"The perimetre of the first rectangle is greater than the second rectangle"<<endl;
}
else {
    cout<<"The perimetre od the second rectangle is greater than the first rectangle"<<endl;
}
return 0;

}



