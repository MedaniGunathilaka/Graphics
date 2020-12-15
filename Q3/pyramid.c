#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>


void createPyramid(){
    glClearColor(0.0,0.0,0.0,1.0);
    glShadeModel(GL_SMOOTH);
    glClear(GL_COLOR_BUFFER_BIT);
           
    glBegin(GL_TRIANGLES);//front face
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0,1);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-0.5,0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.5,0);
    glEnd();
    glFlush();
}
int main(int argc, char ** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Phyramid");
    glutInitWindowSize(1500,1500);
    glutInitWindowPosition(0,0);
    glutDisplayFunc(createPyramid);
    glutMainLoop();

    return 0;

}


