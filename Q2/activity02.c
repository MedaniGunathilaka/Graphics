#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
int main(int argc, char ** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("My Pyramid");
    glutInitWindowSize(1500,1500);
    glutInitWindowPosition(0,0);
    glutDisplayFunc(createPyramid);
    glRotatef(200,0,1,0);
    glutMainLoop();
return 0;
}

void createPyramid(){
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);//Back face
        glColor3f(0,0,1);
        glVertex3f(0,1,0);
        glVertex3f(-0.5,0,-0.5);
        glVertex3f(0.5,0,-0.5);
    glEnd();
   
    glBegin(GL_TRIANGLES);//Half 01 bottom
        glColor3f(1.0,0.5,0);
        glVertex3f(-0.5,0,0.5);
        glVertex3f(-0.5,0,-0.5);
        glVertex3f(0.5,0,0.5);
    glEnd();
   
    glBegin(GL_TRIANGLES);//Half 02 bottom
        glColor3f(1.0,0.5,0);
        glVertex3f(-0.5,0,-0.5);
        glVertex3f(0.5,0,-0.5);
        glVertex3f(0.5,0,0.5);
    glEnd();
    
    glBegin(GL_TRIANGLES);//Right face
        glColor3f(1,1,1);
        glVertex3f(0,1,0);
        glVertex3f(0.5,0,0.5);
        glVertex3f(0.5,0,-0.5);
    glEnd();
    
    glBegin(GL_TRIANGLES);//Left face
        glColor3f(1,1,0);
        glVertex3f(0,1,0);
        glVertex3f(-0.5,0,0.5);
        glVertex3f(-0.5,0,-0.5);
    glEnd();
   
    glBegin(GL_TRIANGLES);//Front face
        glColor3f(0.5,0.5,0.5);
        glVertex3f(0,1,0);
        glVertex3f(-0.5,0,0.5);
        glVertex3f(0.5,0,0.5);
    glEnd();
    glFlush();
    glutSwapBuffers();
}

