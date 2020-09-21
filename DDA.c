#include<GL/glut.h>
#include<GL/gl.h>
#include<stdio.h>
#include <math.h>
void display()
{
float y,dx,dy,m,x0,x1,y0,y1,x;
printf("Starting point ");
scanf("%f %f",&x0, &y0);
printf("Ending point ");
scanf("%f %f",&x1,&y1);
dx=x1-x0;
dy=y1-y0;
m=dy/dx;
if(m<1)
{
y=y0;
int p=0,i;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,1,0);
glBegin(GL_LINE_STRIP);
for(x=x0;x<x1;x+=1)
{
glVertex2f(x,y);
y=y+m;
}
glEnd();
glFlush();
}
if(m==1)
{
printf("Value of m= %f ",m);
y=y0;
int p=0,i;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
for(x=x0;x<x1;x+=1)
{
glVertex2f(x,y);
y=y+1;
}
glEnd();
glFlush();
}
if(m>1)
{
printf("Value of m= %f ",m);
y=y0;
int p=0,i;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,1,0);
glBegin(GL_LINE_STRIP);
for(x=x0;x<x1;x+=(1/m))
{
glVertex2f(x,y);
y=y+1;
}
glEnd();
glFlush();
}
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(750,600);
glutInitWindowPosition(100,100);
glutCreateWindow("line");
glClearColor(0,0,0,0);
gluOrtho2D(-12.0,12.0,-12.0,12.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}