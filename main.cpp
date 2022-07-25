#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

static void display(void)
{

 // Root Tree

  glBegin(GL_QUADS);
  glColor3d(1,1,1);

  glVertex2f(0,0);
  glVertex2f(0.1,0);
  glVertex2f(0.1,0.8);
  glVertex2f(0,0.8);
  glEnd();

  // Tree Leap
  glBegin(GL_TRIANGLES);
  glColor3f(0,1,0);

  glVertex2f(-0.1,0.8);
  glVertex2f(0.2,0.8);
  glVertex2f(0.1, 0.9);
  glEnd();


 // House Reactangle Shape
  glBegin(GL_QUADS);
  glColor3d(1,1,1);

  glVertex2f(0,0);
  glVertex2f(0.6,0);
  glVertex2f(0.6,0.6);
  glVertex2f(0,0.6);
  glEnd();

  // House Top
  glBegin(GL_TRIANGLES);
  glColor3f(1,0,0);

  glVertex2f(0.6,0.6);
  glVertex2f(0,0.6);
  glVertex2f(0.3, 0.9);
  glEnd();

  // House Door
  glBegin(GL_QUADS);
  glColor3d(1,0,0);

  glVertex2f(0.2,0.1);
  glVertex2f(0.4,0.1);
  glVertex2f(0.4,0.5);
  glVertex2f(0.2,0.5);
  glEnd();

  // Left Window
  glBegin(GL_QUADS);
  glColor3d(0,0,1);

  glVertex2f(0,0.2);
  glVertex2f(0.1,0.2);
  glVertex2f(0.1,0.4);
  glVertex2f(0,0.4);
  glEnd();

  // Right window

  glBegin(GL_QUADS);
  glColor3d(0,0,1);

  glVertex2f(0.5,0.2);
  glVertex2f(0.6,0.2);
  glVertex2f(0.6,0.4);
  glVertex2f(0.5,0.4);
  glEnd();


  // 1st Stair
  glBegin(GL_QUADS);
  glColor3d(0,1,0);

  glVertex2f(0.1,0);
  glVertex2f(0.5,0);
  glVertex2f(0.5,-0.1);
  glVertex2f(0.1,-0.1);
  glEnd();

  // 2nd Stair
  glBegin(GL_QUADS);
  glColor3d(0,0,1);

  glVertex2f(0.2,-0.1);
  glVertex2f(0.4,-0.1);
  glVertex2f(0.4,-0.2);
  glVertex2f(0.2,-0.2);
  glEnd();

  glFlush();
}


int main(int argc, char *argv[])
{
   glutInit(&argc, argv);
   glutCreateWindow("LAB2 | RONY HOSSEN");
   glutInitWindowSize(230, 230);
   glutInitWindowPosition(1,1);
   glutDisplayFunc(display);
   glutMainLoop();
}
