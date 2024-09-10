// fracturing.c
// Author: Brandon Bradley
// Class: COP 3223, Professor Parra
// Purpose: This program ask the user for 2 different points and, 
// should find the distance,perimeter,area,width and, height of the given city.
// Input: 2 different points using 4 coordinates
//
// Output: Return the correct answers based of users given data.

// The libraries needed
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
// Calling the functions ahead of main so it can access it.
void userpoints(int *x1,int *y1,int *x2,int *y2);
void userInputs(int x1,int y1,int x2,int y2);
double calculateDistance(int x1,int y1,int x2,int y2);
double calculatePerimeter(int x1,int y1,int x2,int y2);
double calculateArea(int x1,int y1,int x2,int y2);
double calculateWidth(x1,y1,x2,y2);
double calculateHeight(x1,y1,x2,y2);
// Created main function which stores the variables and called the functions
int main(int argc, char **argv) {
    int x1;
    int y1;
    int x2;
    int y2;
    int distance;
    // Calling the functions used.
    userInputs(&x1,&y1,&x2,&y2); 

    calculateDistance(x1,y1,x2,y2); 
    calculatePerimeter(x1,y1,x2,y2);
    calculateArea(x1,y1,x2,y2);
    calculateWidth(x1,y1,x2,y2);
    calculateHeight(x1,y1,x2,y2);

    return 0;
}
// Stores and reads the users points.
void userInputs(x1,y1,x2,y2){
    printf("Enter x1: ");
    scanf("%d",x1);
    printf("Enter y1: ");
    scanf("%d",y1);
    printf("Enter x2: ");
    scanf("%d",x2);
    printf("Enter y2: ");
    scanf("%d",y2);
}
// Used to call the given points in faster for the other functions.
void userpoints(int *x1,int *y1,int *x2,int *y2){
    printf("Point #1 entered: x1= %d; y1 =%d\n",x1,y1);
    printf("Point #2 entered: x2= %d; y2 =%d\n",x2,y2);
}
// Calculate the distance between the two points
double calculateDistance(int x1,int y1,int x2,int y2) {
    userpoints(x1,y1,x2,y2);
    double distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("The distance between the two points is: %.2f\n",distance); // Prints out distance to 2 decimal places
    return 0;
}
// Calculate the perimeter 
double calculatePerimeter(int x1,int y1,int x2,int y2) {
    userpoints(x1,y1,x2,y2);
    double distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    double perimeter = M_PI * distance;
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeter);
    double difficulty;
    difficulty = 4;
    printf("Difficulty level = %.1f \n", difficulty);
    return difficulty;
}
// Calcualte the area 
double calculateArea(int x1,int y1,int x2,int y2){
    userpoints(x1,y1,x2,y2);
    double diameter = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    double radius = (diameter/2);
    double area = (radius*radius)*M_PI;
    printf("The area of the city encompassed by your request is: %.2f\n", area);
    double difficulty;
    difficulty = 3;
    printf("Difficulty level = %.1f \n", difficulty);
    return difficulty;

}
// Calculate the width
double calculateWidth(int x1,int y1,int x2,int y2){
    userpoints(x1,y1,x2,y2);
    double width = fabs(x2-x1); // Fabs to get absolute value for floating number
    printf("The width of the city encompassed by your request is: %.2f\n", width);
    double difficulty;
    difficulty = 2;
    printf("Difficulty level = %.1f \n", difficulty);
    return difficulty;
}
// Calculate the height of the city.
double calculateHeight(int x1,int y1,int x2,int y2){
    userpoints(x1,y1,x2,y2); 
    double height = fabs(y2-y1); // Fabs to get absolute value for floating number
    printf("The height of the city encompassed by your request is: %.2f\n", height);
    double difficulty;
    difficulty = 2;
    printf("Difficulty level = %.1f \n", difficulty);
    return difficulty;
}