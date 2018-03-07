#include <GL/gl.h>  // Librerias a utilizar
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    
  
    
    glColor3f(1.f,1.f,1.0f);
    GLfloat angulo;
    //glBegin(GL_POINTS):
    
    int i;
    glBegin(GL_LINES);
    for (i=0; i<360; i+=1)
    {
		
	angulo = i*M_PI/180.0f; //grados a radianes
    glVertex3f(0.0f,0.0f,0.0f);	
    glVertex3f(cos(angulo),sin(angulo),0.0);	
		
    }
   
    glEnd();
    glFlush ();
    
   

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);//Para iniciar el tipo de matriz
    glLoadIdentity();//Trasnformacion en la matriz
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);//Ortho mostrardo la ubicacion en 2PI  Y 4PI mas cerca.
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);//Modo de colores, en la pantalla
    glutInitWindowSize (600, 600);//Amplitud de la pantalla a mostrar
    glutInitWindowPosition (200, 150);//Ubicacion de la pantalla dentro del monitor 
    glutCreateWindow ("Ejemplo Cuadrado");//Nomnbre a mostrar del programa 
    init ();
    glutDisplayFunc(display);//Funcion  de devolucion de pantalla
    glutMainLoop();
    
    return 0;
}
