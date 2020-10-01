#include <GL/glut.h>
#include <GL/gl.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);


glColor3f(0,1,1);
glBegin(GL_LINE_STRIP);
glVertex2f(-0.6,0.8);
glVertex2f(-0.6,1);
glVertex2f(-0.4,0.8);
glVertex2f(-0.4,1);
glEnd();

glBegin(GL_LINES);
glVertex2f(-1,0.8);
glVertex2f(-0.8,1);
glEnd();

glPointSize(3.0);
glColor3f(0,0,0);
glBegin(GL_POINTS);
glVertex2f(-1,0.6);
glVertex2f(-0.8,0.6);
glEnd();

glBegin(GL_QUADS);
glVertex2f(-0.6,0.2);
glVertex2f(-0.6,0);
glVertex2f(-0.4,0);
glVertex2f(-0.4,0.2);
glEnd();

glColor3f(0,1,1);
glBegin(GL_POLYGON);
glVertex2f(-0.6,0.7);
glVertex2f(-0.6,0.3);
glVertex2f(-0.4,0.4);
glVertex2f(-0.4,0.6);
glEnd();

glColor3f(0,1,1);
glBegin(GL_TRIANGLES);
glVertex2f(-1,0.4);
glVertex2f(-1,0.2);
glVertex2f(-0.8,0.2);
glEnd();

glRasterPos2f(-0.70,-0.70);
glutBitmapString(GLUT_BITMAP_HELVETICA_10,"Aarohi Mangal");
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(200,200);
glutCreateWindow("Primitives");
glClearColor(1,0,0,1);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
