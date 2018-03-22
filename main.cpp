//BR15014_AG_2018
//Ejercicio 6
#include <GL/gl.h>  // Librerias a utilizar
#include <GL/glut.h>
#include <math.h>
void display(void)
{
      glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);//Tamaño de los puntos
    glBegin(GL_POINTS);
    glPointSize(5);//Tamaño de los puntos
    GLfloat x, y,i;//Variables a utilizar 
    glColor3f(2.0f, 0.5f ,0.1f);//Color de la grafica
    //Graficacion de la funcion tangente inversa desde menos 3 pi hasta, 3 pi
    for (i=-3.0;i<=3.0; i+=0.01){//Limites de la funcion a evaluar 
		x=i;
		y=1/tan((M_PI)*x);//Funcion tangente inversa
		glVertex2f(x,y);  //Graficacion de la funcion contangente
		}
    glEnd();
    glFlush ();
    
    //Graficando el plano cartesiano
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9,0);
    glVertex2f(-9,0);
    glVertex2f(0,9);
    glVertex2f(0,-9);
    glEnd();
    glFlush ();
   
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);//Para iniciar el tipo de matriz
    glLoadIdentity();//Trasnformacion en la matriz
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);//Ortho mostrardo los 4 cuadrantes
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);//Modo de colores, en la pantalla
    glutInitWindowSize (500, 500);//Amplitud de la pantalla a mostrar
    glutInitWindowPosition (250, 100);//Ubicacion de la pantalla dentro del monitor 
    glutCreateWindow ("Funcion cotangente");//Nomnbre a mostrar del programa 
    init ();
    glutDisplayFunc(display);//Funcion  de devolucion de pantalla
    glutMainLoop();
    return 0;
}
