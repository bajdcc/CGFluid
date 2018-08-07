#include <GL/freeglut.h>

void init() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glMatrixMode(GL_PROJECTION);
    glOrtho(-5, 5, -5, 5, 5, 15);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);
    GLfloat position[4] = {0, 2, 5, 1};
    glLightfv(GL_LIGHT0, GL_POSITION, position);
    GLfloat diffuse[4] = {0.6, 0.6, 0.6, 1};
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
    GLfloat specular[4] = {0.4, 0.4, 0.4, 1};
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
    GLfloat ambient[4] = {0.2, 0.2, 0.2, 1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glColor3f(1, 0, 0);
    glutSolidTeapot(3);
    glFlush();
}

void reshape(int width, int height) {

}

void mouse(int button, int state, int x, int y) {

}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 27:
            glutLeaveMainLoop();
            break;
        default:
            break;
    }
}

void motion(int x, int y) {

}

void special(int key, int x, int y) {

}

void idle() {

}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(50, 50);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH);
    glutCreateWindow("CGFluid -- bajdcc");
    init();
    glutDisplayFunc(&display);
    glutReshapeFunc(&reshape);
    glutMouseFunc(&mouse);
    glutMotionFunc(&motion);
    glutSpecialFunc(&special);
    glutKeyboardFunc(&keyboard);
    glutIdleFunc(&idle);
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_CONTINUE_EXECUTION);
    glutMainLoop();
    return 0;
}