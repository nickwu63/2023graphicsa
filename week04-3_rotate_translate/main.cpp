#include <GL/glut.h>
float angle =0;///step02-1 �ŧiglobal�����ܼ� angle
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );//�M�I��
    glPushMatrix(); ///step02-1 �ƥ��x�}
        glTranslatef(0.6,0,0);
        glRotatef(angle,0,1,0);//step02-1 ���� angle ����
        glColor3f(0,0,1);///�[�I��m
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///step02-1 �٭�x�}
    glPushMatrix();
        glRotatef(angle,0,1,0);
        glTranslatef(0.6,0,0);
        glColor3f(1,0,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
    angle++;//step02-1 �⨤��++
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutIdleFunc(display);///step02-1 ����idle��,�N���e�e��


    glutMainLoop();
}
