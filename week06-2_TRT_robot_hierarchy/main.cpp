#include <GL/glut.h>
float angle =0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

        glutSolidSphere(0.02,30,30);///�����߶�y

        glutSolidTeapot(0.3);///step02-1 ����

        glPushMatrix();///�k���u
            glTranslatef(0.49,0.13,0);///�s��
            glRotatef(angle,0,0,1);///(2) �N�i�H��ʤF
            glTranslatef(0.46,-0.05,0);///(1) ����ʪ�����,�񤤤�
            glutSolidTeapot(0.3);

        glPushMatrix();///�k��b
            glTranslatef(0.49,0.13,0);///�s��
            glRotatef(angle,0,0,1);///(2) �N�i�H��ʤF
            glTranslatef(0.46,-0.05,0);///(1) ����ʪ�����,�񤤤�
            glutSolidTeapot(0.3);
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
