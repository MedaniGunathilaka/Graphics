#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>

int main(int argc, char ** argv){

    glutInit(&argc,argv);
    glutCreateWindow("My Cube");
    glutInitWindowSize(1500,1500);
    glutInitWindowPosition(0,0);
    glutDisplayFunc(createCube);
    glutMainLoop();
    return 0;
}
void createCube(){
       glClearColor(0.0,0.0,0.0,1.0);
       glClear(GL_COLOR_BUFFER_BIT);
       
        glBegin(GL_POLYGON);//Back face
        glColor3f(0.5,0,0.5);
        glVertex3f(-0.2,0,-0.4);
        glVertex3f(-0.2,0.4,-0.4);
        glVertex3f(0.2,0.4,-0.4);
        glVertex3f(0.2,0,-0.4);
        glEnd();
    
    glBegin(GL_POLYGON);//Bottom face
        glColor3f(1.0,0,0);
        glVertex3f(-0.4,-0.2,0);
        glVertex3f(-0.2,0,-0.4);
        glVertex3f(0.2,0,-0.4);
        glVertex3f(0,-0.2,0);
    glEnd();
    
    glBegin(GL_POLYGON);//Left face
        glColor3f(0,1.0,0);
        glVertex3f(-0.4,-0.2,0);
        glVertex3f(-0.4,0.2,0);
        glVertex3f(-0.2,0.4,-0.4);
        glVertex3f(-0.2,0,-0.4);
    glEnd();
    
        glBegin(GL_POLYGON);//Right face
        glColor3f(0,1.0,0);
        glVertex3f(0,-0.2,0);
        glVertex3f(0,0.2,0);
        glVertex3f(0.2,0.4,-0.4);
        glVertex3f(0.2,0,-0.4);
    glEnd();
 
    glBegin(GL_POLYGON);//Top face
        glColor3f(0,0,1.0);
        glVertex3f(-0.4,0.2,0);
        glVertex3f(-0.2,0.4,-0.4);
        glVertex3f(0.2,0.4,-0.4);
        glVertex3f(0,0.2,0);
    glEnd();

    glBegin(GL_POLYGON);//Front face
        glColor3f(1.0,1.0,1.0);
        glVertex3f(-0.4,-0.2,0);
        glVertex3f(-0.4,0.2,0);
        glVertex3f(0,0.2,0);
        glVertex3f(0,-0.2,0);
    glEnd();
    glFlush();
	}

