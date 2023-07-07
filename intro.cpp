#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

// Function to be executed when a specific key is pressed
void executeFunction(unsigned char key) {
    switch (key) {
        case 13: // ASCII code for Enter key
            system("./classroom"); // Command for Enter key
            break;
        case 'a':
            system("./dino"); // Command for key 'a'
            break;
        case 'b':
            system("./tower"); // Command for key 'b'
            break;
        case 'c':
            system("./digger"); // Command for key 'c'
            break;
        case 'd':
            system("./demo"); // Command for key 'd'
            break;
        default:
            break;
    }
}

// Function to handle keyboard events
void handleKeypress(unsigned char key, int x, int y) {
    executeFunction(key);
}

// Function to handle drawing on the screen
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Set up orthographic projection
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 800, 0, 600, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Draw your front page design here

    // Set color to red and draw the first square
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(50, 100);
    glVertex2f(150, 100);
    glVertex2f(150, 200);
    glVertex2f(50, 200);
    glEnd();

    // Set color to green and draw the second square
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(250, 100);
    glVertex2f(350, 100);
    glVertex2f(350, 200);
    glVertex2f(250, 200);
    glEnd();

    // Set color to blue and draw the third square
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(450, 100);
    glVertex2f(550, 100);
    glVertex2f(550, 200);
    glVertex2f(450, 200);
    glEnd();

    // Set color to yellow and draw the fourth square
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(650, 100);
    glVertex2f(750, 100);
    glVertex2f(750, 200);
    glVertex2f(650, 200);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(1300, 700);
    glutCreateWindow("Front Page");

    // Register display and keyboard callback functions
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);

    glutMainLoop();
    return 0;
}
