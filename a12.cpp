
#include "graphics.h"
#include <iostream>
using namespace std;
void main()
{
 initwindow(800, 800, "Doraemon");
 int x = 800, y = 800;
 circle(x / 2, y / 2 - 20, 5);//nose
 line(x / 2, y / 2 - 20 + 5, x / 2, y / 2);//nose
 line(x / 2 - 20, y / 2, x / 2 + 20, y / 2);//mouth
 arc(x / 2, y / 2, 180, 360, 20);//mouth
 arc(x / 2, y / 2 + 20, 30, 150, 10);//toungue
 ellipse(x / 2 - 10, y / 2 - 35, 0, 360, 8, 15);//left eye
 ellipse(x / 2 - 10, y / 2 - 35, 0, 360, 2, 5);//left eye;//left eye dot
 ellipse(x / 2 + 10, y / 2 - 35, 0, 360, 8, 15);//right eye
 ellipse(x / 2 + 10, y / 2 - 35, 0, 360, 2, 5);//right eye dot
 arc(x / 2, y / 2 - 10, 110, 250, 40);//left curve
 arc(x / 2, y / 2 - 10, 290, 70, 40);//right curve
 line(x / 2 - 15, y / 2 + 29, x / 2 + 15, y / 2 + 29);//line joining two curve
 arc(x / 2, y / 2 - 20, 90, 270, 50);//left head
 arc(x / 2, y / 2 - 20, 270, 90, 50);//right head
 line(x / 2 - 20, y / 2 - 20, x / 2 - 45, y / 2 - 30);//left moustache
 line(x / 2 - 20, y / 2 - 10, x / 2 - 45, y / 2 - 10);//left moustache
 line(x / 2 - 20, y / 2, x / 2 - 45, y / 2 + 10);//left moustache
 line(x / 2 + 20, y / 2 - 20, x / 2 + 45, y / 2 - 30);//right moustache
 line(x / 2 + 20, y / 2 - 10, x / 2 + 45, y / 2 - 10);//right moustache
 line(x / 2 + 20, y / 2, x / 2 + 45, y / 2 + 10);//right moustache
             //body
 arc(x / 2 - 15, y / 2 + 70, 90, 200, 40);//left hand arc
 arc(x / 2 + 15, y / 2 + 70, 340, 90, 40);//right hand arc
 circle(x / 2 - 42, y / 2 + 80, 10);//left hand palm
 circle(x / 2 + 42, y / 2 + 80, 10);//right hand palm
 ellipse(x / 2 - 20, y / 2 + 65, 90, 250, 15, 40);//left body
 ellipse(x / 2 + 20, y / 2 + 65, 290, 90, 15, 40);//right body
 ellipse(x / 2 - 20, y / 2 + 110, 0, 360, 20, 10);//left shoe
 ellipse(x / 2 + 20, y / 2 + 110, 0, 360, 20, 10);//right shoe
 arc(x / 2, y / 2 + 60, 180, 360, 20);//pocket
 line(x / 2 - 20, y / 2 + 60, x / 2 + 20, y / 2 + 60);//pocket
 circle(x / 2, y / 2 + 39, 10);//bell
 arc(x / 2, y / 2 + 70, 180, 360, 25);//curve between body and pocket
 ellipse(x / 2 - 5, y / 2 + 60, 100, 200, 20, 30);//curve between body and pocket
 ellipse(x / 2 + 5, y / 2 + 60, 340, 100, 20, 30);//curve between body and pocket

 getch();
}

