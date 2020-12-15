#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
void createFinale(){
    glClearColor(0.0,0.0,0.0,1.0);
    glShadeModel(GL_SMOOTH);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(0,1.0,1.0);
        glVertex3f(-0.4,-0.2,0);
        glVertex3f(-0.4,0.4,0);
        glVertex3f(0.2,0.4,0);
        glVertex3f(0.2,-0.2,0);
    glEnd();
    //left face
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(-1,0.1);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-0.4,0.4);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(-0.4,-0.2);
    glEnd();
    //right face
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.8,0.1);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(0.2,0.4);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.2,-0.2);
    glEnd();
    //top face
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(-0.1,1);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-0.4,0.4);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.2,0.4);
    glEnd();
    glFlush();
}
int main(int argc, char ** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow(" Finale");
    glutInitWindowSize(1500,1500);
    glutInitWindowPosition(0,0);
    glutDisplayFunc(createFinale);
    glutMainLoop();

    return 0;

}


