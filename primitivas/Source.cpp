#include <GL/GLUT.h>
#include <iostream>
#include <string>
using namespace std;

void matriz_Base()
{
    glColor3f(1, 1, 1);
    glLineWidth(1.0);
    glBegin(GL_LINES);                //Crear lineas centrales de nuestro plano cartesiano.
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, -1.0, 0.0);
    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glVertex3f(1.0, 0.05, 0.0);
    glVertex3f(-1.0, 0.05, 0.0);
    glVertex3f(1.0, 0.1, 0.0); 
    glVertex3f(-1.0, 0.1, 0.0);
    glVertex3f(1.0, 0.15, 0.0);
    glVertex3f(-1.0, 0.15, 0.0);
    glVertex3f(1.0, 0.2, 0.0);
    glVertex3f(-1.0, 0.2, 0.0);
    glVertex3f(1.0, 0.25, 0.0);
    glVertex3f(-1.0, 0.25, 0.0);
    glVertex3f(1.0, 0.3, 0.0);
    glVertex3f(-1.0, 0.3, 0.0);
    glVertex3f(1.0, 0.35, 0.0);
    glVertex3f(-1.0, 0.35, 0.0);
    glVertex3f(1.0, 0.4, 0.0);
    glVertex3f(-1.0, 0.4, 0.0);
    glVertex3f(1.0, 0.45, 0.0);
    glVertex3f(-1.0, 0.45, 0.0);
    glVertex3f(1.0, 0.5, 0.0);
    glVertex3f(-1.0, 0.5, 0.0);
    glVertex3f(1.0, 0.55, 0.0);
    glVertex3f(-1.0, 0.55, 0.0);
    glVertex3f(1.0, 0.6, 0.0);
    glVertex3f(-1.0, 0.6, 0.0);
    glVertex3f(1.0, 0.65, 0.0);
    glVertex3f(-1.0, 0.65, 0.0);
    glVertex3f(1.0, 0.7, 0.0);
    glVertex3f(-1.0, 0.7, 0.0);
    glVertex3f(1.0, 0.75, 0.0);
    glVertex3f(-1.0, 0.75, 0.0);
    glVertex3f(1.0, 0.8, 0.0);
    glVertex3f(-1.0, 0.8, 0.0);
    glVertex3f(1.0, 0.85, 0.0);
    glVertex3f(-1.0, 0.85, 0.0);
    glVertex3f(1.0, 0.9, 0.0);
    glVertex3f(-1.0, 0.9, 0.0);
    glVertex3f(1.0, 0.95, 0.0);
    glVertex3f(-1.0, 0.95, 0.0);


    glVertex3f(1.0, -0.05, 0.0);
    glVertex3f(-1.0, -0.05, 0.0);
    glVertex3f(1.0, -0.1, 0.0);
    glVertex3f(-1.0, -0.1, 0.0);
    glVertex3f(1.0, -0.15, 0.0);
    glVertex3f(-1.0, -0.15, 0.0);
    glVertex3f(1.0, -0.2, 0.0);
    glVertex3f(-1.0, -0.2, 0.0);
    glVertex3f(1.0, -0.25, 0.0);
    glVertex3f(-1.0, -0.25, 0.0);
    glVertex3f(1.0, -0.3, 0.0);
    glVertex3f(-1.0, -0.3, 0.0);
    glVertex3f(1.0, -0.35, 0.0);
    glVertex3f(-1.0, -0.35, 0.0);
    glVertex3f(1.0, -0.4, 0.0);
    glVertex3f(-1.0, -0.4, 0.0);
    glVertex3f(1.0, -0.45, 0.0);
    glVertex3f(-1.0, -0.45, 0.0);
    glVertex3f(1.0, -0.5, 0.0);
    glVertex3f(-1.0, -0.5, 0.0);
    glVertex3f(1.0, -0.55, 0.0);
    glVertex3f(-1.0, -0.55, 0.0);
    glVertex3f(1.0, -0.6, 0.0);
    glVertex3f(-1.0, -0.6, 0.0);
    glVertex3f(1.0, -0.65, 0.0);
    glVertex3f(-1.0, -0.65, 0.0);
    glVertex3f(1.0, -0.7, 0.0);
    glVertex3f(-1.0, -0.7, 0.0);
    glVertex3f(1.0, -0.75, 0.0);
    glVertex3f(-1.0, -0.75, 0.0);
    glVertex3f(1.0, -0.8, 0.0);
    glVertex3f(-1.0, -0.8, 0.0);
    glVertex3f(1.0, -0.85, 0.0);
    glVertex3f(-1.0, -0.85, 0.0);
    glVertex3f(1.0, -0.9, 0.0);
    glVertex3f(-1.0, -0.9, 0.0);
    glVertex3f(1.0, -0.95, 0.0);
    glVertex3f(-1.0, -0.95, 0.0);


    glVertex3f(0.05, 1.0, 0.0);
    glVertex3f(0.05, -1.0, 0.0);
    glVertex3f(0.1, 1.0, 0.0);
    glVertex3f(0.1, -1.0, 0.0);
    glVertex3f(0.15, 1.0, 0.0);
    glVertex3f(0.15, -1.0, 0.0);
    glVertex3f(0.2, 1.0, 0.0);
    glVertex3f(0.2, -1.0, 0.0);
    glVertex3f(0.25, 1.0, 0.0);
    glVertex3f(0.25, -1.0, 0.0);
    glVertex3f(0.3, 1.0, 0.0);
    glVertex3f(0.3, -1.0, 0.0);
    glVertex3f(0.35, 1.0, 0.0);
    glVertex3f(0.35, -1.0, 0.0);
    glVertex3f(0.4, 1.0, 0.0);
    glVertex3f(0.4, -1.0, 0.0);
    glVertex3f(0.45, 1.0, 0.0);
    glVertex3f(0.45, -1.0, 0.0);
    glVertex3f(0.5, 1.0, 0.0);
    glVertex3f(0.5, -1.0, 0.0);
    glVertex3f(0.55, 1.0, 0.0);
    glVertex3f(0.55, -1.0, 0.0);
    glVertex3f(0.6, 1.0, 0.0);
    glVertex3f(0.6, -1.0, 0.0);
    glVertex3f(0.65, 1.0, 0.0);
    glVertex3f(0.65, -1.0, 0.0);
    glVertex3f(0.7, 1.0, 0.0);
    glVertex3f(0.7, -1.0, 0.0);
    glVertex3f(0.75, 1.0, 0.0);
    glVertex3f(0.75, -1.0, 0.0);
    glVertex3f(0.8, 1.0, 0.0);
    glVertex3f(0.8, -1.0, 0.0);
    glVertex3f(0.85, 1.0, 0.0);
    glVertex3f(0.85, -1.0, 0.0);
    glVertex3f(0.9, 1.0, 0.0);
    glVertex3f(0.9, -1.0, 0.0);
    glVertex3f(0.95, 1.0, 0.0);
    glVertex3f(0.95, -1.0, 0.0);

    glVertex3f(-0.05, 1.0, 0.0);
    glVertex3f(-0.05, -1.0, 0.0);
    glVertex3f(-0.1, 1.0, 0.0);
    glVertex3f(-0.1, -1.0, 0.0);
    glVertex3f(-0.15, 1.0, 0.0);
    glVertex3f(-0.15, -1.0, 0.0);
    glVertex3f(-0.2, 1.0, 0.0);
    glVertex3f(-0.2, -1.0, 0.0);
    glVertex3f(-0.25, 1.0, 0.0);
    glVertex3f(-0.25, -1.0, 0.0);
    glVertex3f(-0.3, 1.0, 0.0);
    glVertex3f(-0.3, -1.0, 0.0);
    glVertex3f(-0.35, 1.0, 0.0);
    glVertex3f(-0.35, -1.0, 0.0);
    glVertex3f(-0.4, 1.0, 0.0);
    glVertex3f(-0.4, -1.0, 0.0);
    glVertex3f(-0.45, 1.0, 0.0);
    glVertex3f(-0.45, -1.0, 0.0);
    glVertex3f(-0.5, 1.0, 0.0);
    glVertex3f(-0.5, -1.0, 0.0);
    glVertex3f(-0.55, 1.0, 0.0);
    glVertex3f(-0.55, -1.0, 0.0);
    glVertex3f(-0.6, 1.0, 0.0);
    glVertex3f(-0.6, -1.0, 0.0);
    glVertex3f(-0.65, 1.0, 0.0);
    glVertex3f(-0.65, -1.0, 0.0);
    glVertex3f(-0.7, 1.0, 0.0);
    glVertex3f(-0.7, -1.0, 0.0);
    glVertex3f(-0.75, 1.0, 0.0);
    glVertex3f(-0.75, -1.0, 0.0);
    glVertex3f(-0.8, 1.0, 0.0);
    glVertex3f(-0.8, -1.0, 0.0);
    glVertex3f(-0.85, 1.0, 0.0);
    glVertex3f(-0.85, -1.0, 0.0);
    glVertex3f(-0.9, 1.0, 0.0);
    glVertex3f(-0.9, -1.0, 0.0);
    glVertex3f(-0.95, 1.0, 0.0);
    glVertex3f(-0.95, -1.0, 0.0);

    glEnd();
}


void margen(){

    glColor3f(1, 1, 1);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    //(X,Y,Z)
    glVertex3f(-0.75, 0.75, 0.5);
    glVertex3f(-0.75, -0.75, -0.5);

    glColor3f(1, 1, 1);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    //(X,Y,Z)
    glVertex3f(-0.75, 0.75, 0.5);
    glVertex3f(0.75, 0.75, -0.5);

    glColor3f(1, 1, 1);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    //(X,Y,Z)
    glVertex3f(0.75, 0.75, 0.5);
    glVertex3f(0.75, -0.75, -0.5);

    glColor3f(1, 1, 1);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    //(X,Y,Z)
    glVertex3f(0.75, -0.75, 0.5);
    glVertex3f(-0.75, -0.75, -0.5);

    glEnd();
}

void puntos_Ejemplo()
{
    glColor3f(0.7, 0.0, 0.0);           // Estalecemos el color de la siguiente primitiva.
    glPointSize(10.0);                  // Estalecemos el tamano de pixel de la primitiva tipo punto.
    glBegin(GL_POINTS);                 // Definimos el tipo de primitiva como un punto.
    glVertex3f(0.9, 0.9, 0);        // definimos los puntos a graficar.
    glVertex3f(-1.0, -1.0, 0);
    glVertex3f(0.0025, 0.0, 0);
    glEnd();
}

void fondo() {
    glColor3f(0.1f, 0.40f, 0.0f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.8f, 0.8f); // vertex 1
    glVertex2f(-0.8f, -0.8f); // vertex 2
    glVertex2f(0.8f, -0.8f); // vertex 3
    glVertex2f(0.8f, 0.8f); // vertex 4
    glEnd();
}

void camisa(){

    /*
   *  (vertex1)----(vertex4)
   *   |                  |
   *   |                  |
   *  (vertex2)----(vertex3)
   */

    glColor3f(0.65f, 0.90f, 0.93f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.25f, 0.2f); // vertex 1
    glVertex2f(-0.25f, -0.15f); // vertex 2
    glVertex2f(0.25f, -0.15f); // vertex 3
    glVertex2f(0.25f, 0.2f); // vertex 4
    glEnd();

    glColor3f(0.65f, 0.70f, 0.93f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.35f, 0.2f); // vertex 1
    glVertex2f(-0.35f, -0.15f); // vertex 2
    glVertex2f(-0.25f, -0.15f); // vertex 3
    glVertex2f(-0.25f, 0.2f); // vertex 4
    glEnd();

    //manga Derecha

    glColor3f(0.65f, 0.90f, 0.93f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.45f, 0.25f); // vertex 1
    glVertex2f(-0.35f, 0.15f); // vertex 2
    glVertex2f(-0.25f, 0.15f); // vertex 3
    glVertex2f(-0.35f, 0.25f); // vertex 4

    glVertex2f(-0.35f, 0.15f); // vertex 1
    glVertex2f(-0.45f, 0.05f); // vertex 2
    glVertex2f(-0.35f, 0.05f); // vertex 3
    glVertex2f(-0.25f, 0.15f); // vertex 4

    glEnd();

    glColor3f(0.65f, 0.70f, 0.93f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.45f, 0.25f); // vertex 1
    glVertex2f(-0.55f, 0.15f); // vertex 2
    glVertex2f(-0.45f, 0.05f); // vertex 3
    glVertex2f(-0.35f, 0.15f); // vertex 4

    glEnd();

    //manga Izquierda

    glColor3f(0.65f, 0.70f, 0.93f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(0.25f, 0.2f); // vertex 1
    glVertex2f(0.25f, 0.05f); // vertex 2
    glVertex2f(0.35f, -0.05f); // vertex 3
    glVertex2f(0.35f, 0.1f); // vertex 4

    glEnd();

    glColor3f(0.65f, 0.90f, 0.93f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(0.25f, 0.2f); // vertex 1
    glVertex2f(0.35f, 0.1f); // vertex 2
    glVertex2f(0.5f, 0.1f); // vertex 3
    glVertex2f(0.4f, 0.2f); // vertex 4
    glEnd();



}

void pantalon()
{
    glColor3f(0.19f, 0.44f, 0.73f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.25f, -0.1f); // vertex 1
    glVertex2f(-0.25f, -0.2f); // vertex 2
    glVertex2f(0.25f, -0.2f); // vertex 3
    glVertex2f(0.25f, -0.1f); // vertex 4
    glEnd();

    glColor3f(0.0f, 0.19f, 0.43f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.35f, -0.1f); // vertex 1
    glVertex2f(-0.35f, -0.2f); // vertex 2
    glVertex2f(-0.25f, -0.2f); // vertex 3
    glVertex2f(-0.25f, -0.1f); // vertex 4
    glEnd();

    //pierna drecha
    glColor3f(0.19f, 0.44f, 0.73f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(0.05f, -0.2f); // vertex 1
    glVertex2f(-0.15f, -0.4f); // vertex 2
    glVertex2f(0.05f, -0.4f); // vertex 3
    glVertex2f(0.25f, -0.2f); // vertex 4
    glEnd();


    glColor3f(0.0f, 0.19f, 0.43f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.05f, -0.2f); // vertex 1
    glVertex2f(-0.20f, -0.35f); // vertex 2
    glVertex2f(-0.15f, -0.4f); // vertex 3
    glVertex2f(0.05f, -0.2f); // vertex 4
    glEnd();

    //pierna izquierda
    glColor3f(0.19f, 0.44f, 0.73f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.25f, -0.2f); // vertex 1
    glVertex2f(-0.05f, -0.4f); // vertex 2
    glVertex2f(0.15f, -0.4f); // vertex 3
    glVertex2f(-0.05f, -0.2f); // vertex 4
    glEnd();

    glColor3f(0.0f, 0.19f, 0.43f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)

    glVertex2f(-0.35f, -0.2f); // vertex 1
    glVertex2f(-0.35f, -0.30f); // vertex 2
    glVertex2f(-0.25f, -0.30f); // vertex 3
    glVertex2f(-0.25f, -0.2f); // vertex 4

    glVertex2f(-0.35f, -0.30f); // vertex 1
    glVertex2f(-0.15f, -0.5f); // vertex 2
    glVertex2f(-0.05f, -0.4f); // vertex 3
    glVertex2f(-0.25f, -0.2f); // vertex 4
    glEnd();
    

}

void zapato() {

    glColor3f(0.65f, 0.65f, 0.65f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.15f, -0.4f); // vertex 1
    glVertex2f(-0.25f, -0.50f); // vertex 2
    glVertex2f(-0.05f, -0.50f); // vertex 3
    glVertex2f(0.05f, -0.4f); // vertex 4

    glVertex2f( 0.15f, -0.4f); // vertex 1
    glVertex2f(0.25f, -0.50f); // vertex 2
    glVertex2f(0.05f, -0.50f); // vertex 3
    glVertex2f(-0.05f, -0.4f); // vertex 4

    glEnd();



    glColor3f(0.30f, 0.30f, 0.30f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)

    glVertex2f(-0.15f, -0.40f); // vertex 1
    glVertex2f(-0.25f, -0.50f); // vertex 2
    glVertex2f(-0.35f, -0.40f); // vertex 3
    glVertex2f(-0.25f, -0.30f); // vertex 4

    glVertex2f(-0.05f, -0.40f); // vertex 1
    glVertex2f(0.05f, -0.50f); // vertex 2
    glVertex2f(-0.05f, -0.60f); // vertex 3
    glVertex2f(-0.15f, -0.50f); // vertex 4

    glVertex2f( 0.05f, -0.5f); // vertex 1
    glVertex2f(-0.05f, -0.60f); // vertex 2
    glVertex2f(0.15f, -0.60f); // vertex 3
    glVertex2f(0.25f, -0.5f); // vertex 4

    glEnd();

}

void Piel(){
    
    //manos
    glColor3f(0.91f, 0.80f, 0.68f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(0.35f, 0.1f); // vertex 1
    glVertex2f(0.5f, -0.05f); // vertex 2
    glVertex2f(0.65f, -0.05f); // vertex 3
    glVertex2f(0.5f, 0.1f); // vertex 4

    glVertex2f(0.5f, -0.05f); // vertex 1
    glVertex2f(0.5f, -0.2f); // vertex 2
    glVertex2f(0.65f, -0.2f); // vertex 3
    glVertex2f(0.65f, -0.05f); // vertex 4

    glVertex2f(-0.45f, 0.05f); // vertex 1
    glVertex2f(-0.6f, -0.1f); // vertex 2
    glVertex2f(-0.50f, -0.1f); // vertex 3
    glVertex2f(-0.35f, 0.05f); // vertex 4

    glVertex2f(-0.2f, 0.2f); // vertex 1
    glVertex2f( 0.2f, 0.2f); // vertex 2
    glVertex2f( 0.2f, 0.6f); // vertex 3
    glVertex2f(-0.2f, 0.6f); // vertex 4

    glEnd();

    glColor3f(0.77f, 0.49f, 0.38f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(0.35f, 0.1f); // vertex 1
    glVertex2f(0.35f, -0.05f); // vertex 2
    glVertex2f(0.5f, -0.20f); // vertex 3
    glVertex2f(0.5f, -0.05f); // vertex 4

    glVertex2f(-0.55f, 0.15f); // vertex 1
    glVertex2f(-0.7f, -0.0f); // vertex 2
    glVertex2f(-0.6f, -0.1f); // vertex 3
    glVertex2f(-0.45f, 0.05f); // vertex 4

    glVertex2f(-0.3f, 0.6f); // vertex 1
    glVertex2f(-0.3f, 0.2f); // vertex 2
    glVertex2f(-0.2f, 0.2f); // vertex 3
    glVertex2f(-0.2f, 0.6f); // vertex 4

    glEnd();

}

void cara(){

    glColor3f(0.43f, 0.26f, 0.06f); // Color
    glBegin(GL_QUADS);
    //(X.Xf, Y.Yf)
    glVertex2f(-0.1f, 0.25f); // vertex 1
    glVertex2f(-0.1f, 0.20f); // vertex 2
    glVertex2f( 0.1f, 0.20f); // vertex 3
    glVertex2f( 0.1f, 0.25f); // vertex 4

    glVertex2f(-0.1f, 0.30f); // vertex 1
    glVertex2f(-0.1f, 0.25f); // vertex 2
    glVertex2f(-0.05f, 0.25f); // vertex 3
    glVertex2f(-0.05f, 0.30f); // vertex 4

    glVertex2f(0.1f, 0.30f); // vertex 1
    glVertex2f(0.1f, 0.25f); // vertex 2
    glVertex2f(0.05f, 0.25f); // vertex 3
    glVertex2f(0.05f, 0.30f); // vertex 4

    glEnd();

    glColor3f(0.82f, 0.54f, 0.36f); // Color
    glBegin(GL_QUADS);

    glVertex2f(-0.05f, 0.35f); // vertex 1
    glVertex2f(-0.05f, 0.30f); // vertex 2
    glVertex2f(0.05f, 0.30f); // vertex 3
    glVertex2f(0.05f, 0.35f); // vertex 4

    glEnd();

    glColor3f(10.82f, 10.54f, 10.36f); // Color
    glBegin(GL_QUADS);

    glVertex2f(-0.15f, 0.4f); // vertex 1
    glVertex2f(-0.15f, 0.35f); // vertex 2
    glVertex2f(-0.05f, 0.35f); // vertex 3
    glVertex2f(-0.05f, 0.4f); // vertex 4

    glVertex2f(0.15f, 0.4f); // vertex 1
    glVertex2f(0.15f, 0.35f); // vertex 2
    glVertex2f(0.05f, 0.35f); // vertex 3
    glVertex2f(0.05f, 0.4f); // vertex 4

    //ojos
    glColor3f(0.19f, 0.44f, 0.73f);

    glVertex2f(0.05f, 0.4f); // vertex 1
    glVertex2f(0.05f, 0.35f); // vertex 2
    glVertex2f(0.1f, 0.35f); // vertex 3
    glVertex2f(0.1f, 0.4f); // vertex 4

    glVertex2f(-0.05f, 0.4f); // vertex 1
    glVertex2f(-0.05f, 0.35f); // vertex 2
    glVertex2f(-0.1f, 0.35f); // vertex 3
    glVertex2f(-0.1f, 0.4f); // vertex 4

    glEnd();


}
 
void cuadrado_Ejemplo()
{


    /* 
    *  (vertex2)----(vertex3)
    *   |                  |
    *   |                  |
    *  (vertex1)----(vertex4)
    */ 

    glColor3f(0.4f, 0.4f, 0.8f); // Color
    glBegin(GL_QUADS);
              //(X.Xf, Y.Yf)
    glVertex2f(-0.1f, 0.1f); // vertex 1
    glVertex2f(-0.1f, -0.1f); // vertex 2
    glVertex2f(0.1f, -0.1f); // vertex 3
    glVertex2f(0.1f, 0.1f); // vertex 4
    glEnd();

    glColor3f(0.9f, 0.8f, 0.6f); // Color
    glBegin(GL_QUADS);
               //(X.Xf, Y.Yf)
    glVertex2f(-0.1f-(0.3f), 0.3f); // vertex 1
    glVertex2f(-0.1f-(0.3f), 0.6f); // vertex 2
    glVertex2f(0.1f+(0.6f), 0.6f); // vertex 3
    glVertex2f(0.1f+(0.6f), 0.3f); // vertex 4
    glEnd();

}

void lineas_Ejemplo()
{
    glColor3f(0.2, 0.2, 0.8);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glEnd();
}

void triangulo_Ejemplo()
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES); // Todas las primitivas inician con un glBegin
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 0.5, 0.0);
    glEnd();

    glColor3f(1.0, 0, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, -0.5, 0.0);
    glEnd();
}

void myDisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);   //glClear es una funcion que nos permite limpiar la imagen de fondo, por defecto se usa negro, pero puede ser cambiado.
   
    
   
    //lineas_Ejemplo();
    //triangulo_Ejemplo();
    //cuadrado_Ejemplo();

    margen();
    fondo();

    zapato();
    pantalon();
    camisa();
    Piel();
    cara();
    
    

    //matriz_Base();
    //puntos_Ejemplo();

    glFlush();

}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(1000, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Hola mundo con OpenGL :)");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}
