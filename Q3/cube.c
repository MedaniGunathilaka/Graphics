

#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
void createCube(){
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(0,1.0,1.0);
        glVertex3f(-0.4,-0.2,0);
        glVertex3f(-0.4,0.4,0);
        glVertex3f(0.2,0.4,0);
        glVertex3f(0.2,-0.2,0);
    glEnd();
    glFlush();
}
int main(int argc, char ** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Cube");
    glutInitWindowSize(1500,1500);
    glutInitWindowPosition(0,0);
    glutDisplayFunc(Cube);
    glutMainLoop();

    return 0;

}


