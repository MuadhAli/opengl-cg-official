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

    // Set color to white for text
    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(280, 300); // Position the text in the middle
    const char* text1 = "To see the classroom, press Enter";
    for (const char* c = text1; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
        glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(280, 270); // Position the text in the middle
    const char* text10 = "To see the Computer Lab, press D";
    for (const char* c = text10; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }

    // Set color to white for top text
    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(280, 550); // Position the top text
    const char* text2 = "welcome to the 3D simulation";
    for (const char* c = text2; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }

        glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(10, 400); // Position the top text
    const char* text3 = "This project was designed and developed by ";
    for (const char* c = text3; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
            glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(10, 360); // Position the top text
    const char* text4 = "Muadh Bin Mohammed Ali";
    for (const char* c = text4; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(10, 330); // Position the top text
    const char* text5 = "Mohammed Shaan A R";
    for (const char* c = text5; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(640, 400); // Position the top text
    const char* text6 = "Games";
    for (const char* c = text6; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }                glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(580, 370); // Position the top text
    const char* text7 = "Press A to play Dino Game";
    for (const char* c = text7; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(580, 340); // Position the top text
    const char* text8 = "Press B to play Diggerman Game";
    for (const char* c = text8; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(580, 310); // Position the top text
    const char* text9 = "Press C to play Towe of Hanoi Game";
    for (const char* c = text9; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                glColor3f(0.0f, 0.0f, 0.0f);
    glRasterPos2f(80, 150); // Position the top text
    const char* text11 = "Press A";
    for (const char* c = text11; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                glColor3f(0.0f, 0.0f, 0.0f);
    glRasterPos2f(280, 150); // Position the top text
    const char* text12 = "Press B";
    for (const char* c = text12; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                glColor3f(0.0f, 0.0f, 0.0f);
    glRasterPos2f(480, 150); // Position the top text
    const char* text13 = "Press C";
    for (const char* c = text13; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }
                glColor3f(0.0f, 0.0f, 0.0f);
    glRasterPos2f(680, 150); // Position the top text
    const char* text15 = "Press D";
    for (const char* c = text15; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use a bitmap font for the text
    }




    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Front Page");

    // Register display and keyboard callback functions
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);

    glutMainLoop();
    return 0;
}
