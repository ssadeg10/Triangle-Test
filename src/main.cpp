#include <GLUT/glut.h>
#include <iostream>

void render(void);
void keyboard(unsigned char, int, int);

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("OpenGL Triangle");

    glutDisplayFunc(render);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}

void render(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 0.5f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.5f, -0.5f, 0.0f);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(0.5f, -0.5f, 0.0f);
    glEnd();

    glutSwapBuffers();
}

void keyboard(unsigned char c, int x, int y){
    if(c){ exit(0); }
}
