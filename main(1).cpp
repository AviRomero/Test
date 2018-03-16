#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
	glClearColor(0.0f, 1.0f, 0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(20);
    
    //glClear();
    //glColor3f (0.0f, 1.0f, 0.0f);
    glTranslatef (0.0f,0.0f,-0.2f);
    glBegin(GL_LINES);
    glColor3f (1.0f, 1.0f,1.0f);
    glVertex3f(9.0f,7.0f,0.0f);
    glVertex3f(-9.0f,7.0f,0.0f);
    glVertex3f(-9.0f,7.0f,0.0f);
    glVertex3f(-9.0f,-7.0f,0.0f);
    glVertex3f(-9.0f,-7.0f,0.0f);
    glVertex3f(9.0f,-7.0f,0.0f);
    glVertex3f(9.0f,-7.0f,0.0f);
    glVertex3f(9.0f,7.0f,0.0f);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex3f(0.0f,7.0f,0.0f);
    glVertex3f(0.0f,-7.0f,0.0f);
    glEnd();
    //porteria 1
     glBegin(GL_LINES);
    glColor3f (1.0f, 1.0f,1.0f);
    glVertex3f(-6.0f,2.0f,0.0f);
    glVertex3f(-9.0f,2.0f,0.0f);
    glVertex3f(-9.0f,2.0f,0.0f);
    glVertex3f(-9.0f,-2.0f,0.0f);
    glVertex3f(-9.0f,-2.0f,0.0f);
    glVertex3f(-6.0f,-2.0f,0.0f);
    glVertex3f(-6.0f,-2.0f,0.0f);
    glVertex3f(-6.0f,2.0f,0.0f);
    glEnd();
    
     glBegin(GL_LINES);
    glColor3f (1.0f, 1.0f,1.0f);
    glVertex3f(-5.0f,3.0f,0.0f);
    glVertex3f(-9.0f,3.0f,0.0f);
    glVertex3f(-9.0f,3.0f,0.0f);
    glVertex3f(-9.0f,-3.0f,0.0f);
    glVertex3f(-9.0f,-3.0f,0.0f);
    glVertex3f(-5.0f,-3.0f,0.0f);
    glVertex3f(-5.0f,-3.0f,0.0f);
    glVertex3f(-5.0f,3.0f,0.0f);
    glEnd();
    
    
    //centro
    
    //porta 2
     glBegin(GL_LINES);
    glColor3f (1.0f, 1.0f,1.0f);
    glVertex3f(6.0f,2.0f,0.0f);
    glVertex3f(9.0f,2.0f,0.0f);
    glVertex3f(9.0f,2.0f,0.0f);
    glVertex3f(9.0f,-2.0f,0.0f);
    glVertex3f(9.0f,-2.0f,0.0f);
    glVertex3f(6.0f,-2.0f,0.0f);
    glVertex3f(6.0f,-2.0f,0.0f);
    glVertex3f(6.0f,2.0f,0.0f);
    glEnd();
    
     glBegin(GL_LINES);
    glColor3f (1.0f, 1.0f,1.0f);
    glVertex3f(5.0f,3.0f,0.0f);
    glVertex3f(9.0f,3.0f,0.0f);
    glVertex3f(9.0f,3.0f,0.0f);
    glVertex3f(9.0f,-3.0f,0.0f);
    glVertex3f(9.0f,-3.0f,0.0f);
    glVertex3f(5.0f,-3.0f,0.0f);
    glVertex3f(5.0f,-3.0f,0.0f);
    glVertex3f(5.0f,3.0f,0.0f);
    glEnd();
    
    //cir
    glPointSize(0.1);
    glBegin(GL_POINTS);
    double i;
    double cx;
    double cy;
    for (i=0; i<360; i+=0.01){
		cx=2*cos(i)+0;
		cy=2*sin(i)+0;
		glVertex3f(cx,cy,0.0);
	}
		
    glEnd();
    
    //ezsquina 1
     glPointSize(0.1);
    glBegin(GL_POINTS);
    i=0;
    cx=0;
    cy=0;
    GLfloat angulo;
    for (i=0; i<90; i+=0.01){
		angulo=i*M_PI/180.0f;
		cx=2*cos(angulo)-9;
		cy=2*sin(angulo)-7;
		glVertex2f(cx,cy);
		
		}
    glEnd();
    
    //ezquina 2
      glPointSize(0.1);
    glBegin(GL_POINTS);
    i=0;
    cx=0;
    cy=0;
    GLfloat ngulo;
    for (i=90; i<180; i+=0.01){
		ngulo=i*M_PI/180.0f;
		cx=2*cos(ngulo)+9;
		cy=2*sin(ngulo)-7;
		glVertex2f(cx,cy);
		
		}
    glEnd();
    //ezquina 3
    glPointSize(0.1);
    glBegin(GL_POINTS);
    i=0;
    cx=0;
    cy=0;
    GLfloat gulo;
    for (i=180; i<270; i+=0.01){
		gulo=i*M_PI/180.0f;
		cx=2*cos(gulo)+9;
		cy=2*sin(gulo)+7;
		glVertex2f(cx,cy);
		
		}
    glEnd();
    //ezquina 4
     glPointSize(0.1);
    glBegin(GL_POINTS);
    i=0;
    cx=0;
    cy=0;
    GLfloat ulo;
    for (i=270; i<360; i+=0.01){
		ulo=i*M_PI/180.0f;
		cx=2*cos(ulo)-9;
		cy=2*sin(ulo)+7;
		glVertex2f(cx,cy);
		
		}
    glEnd();
    
    //medio 
	
	glBegin(GL_POINTS);
	 glPointSize(0.01);
	 GLfloat lo;
   
    glBegin(GL_POINTS);
	for (i=270; i<450; i+=1)
	{
		lo =i*M_PI/180.0f;
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(lo)-5,  2.5*sin(lo), 0.0f);
	}
    
    glEnd();
    glFlush ();
	
	
	//medio 


	glBegin(GL_POINTS);
	 glPointSize(0.01);
	 GLfloat angu;
   
    glBegin(GL_POINTS);
	for (i=90; i<270; i+=1)
	{
		angu =i*M_PI/180.0f;
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(angu)+5,  2.5*sin(angu), 0.0f);
	}
    glEnd ();
   
    
  glFlush ();
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo lineas");
    glutDisplayFunc(display); 
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
