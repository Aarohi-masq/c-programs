#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<stdlib.h>
#include<stdio.h>
float x_1,x_2,y_1,y_2;
 
void display()
{
	float dy,dx,x,y,p,m;
	int i;

	dx=x_2-x_1;
	dy=y_2-y_1;	 	
	
	x = x_1;
	y = y_1;

	p = (2*dx) + dy;

	m=dy/dx;

	glBegin(GL_POINTS);
	glVertex2f(x,y);
	glEnd();

	if(m<1)
	{
		for(i = x_1;i<= x_2;i++)
		{
			if(p<0)
			{
				p = p + (2*dy);
			}
			else
			{
				p = p + (2*dy) - (2*dx);
				y++;
			}
			glBegin(GL_POINTS);
			glVertex2f(i,y);
			glEnd();
		}
	}

	else if(m>=1)
	{
		for(i = y_1;i<= y_2;i++)
		{
			if(p<0)
			{
				p = p + (2*dx);
			}
			else
			{
				p = p + (2*dx) - (2*dy);
				x++;
			}
			glBegin(GL_POINTS);
			glVertex2f(x,i);
			glEnd();
		}
	}
	glFlush();

}
 
int main(int argc, char** argv) 
{
	printf("Enter the value of x1 : ");
	scanf("%f",&x_1);
	printf("Enter the value of y1 : ");
	scanf("%f",&y_1);
	printf("Enter the value of x2 : ");
	scanf("%f",&x_2);
	printf("Enter the value of y2 : ");
	scanf("%f",&y_2);
	 
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500,500);
	glutInitWindowPosition (100,100);
	glutCreateWindow ("Bresenham");
	glClearColor(1,1,1,1);
	gluOrtho2D(-100,100,-100,100);
	glutDisplayFunc(display);
	glutMainLoop();
 
	return 0;
}