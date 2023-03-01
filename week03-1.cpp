
#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin( GL_POLYGON);
  glVertex2f(0.213, 0.747);
  glVertex2f(0.020, 0.693);
  glVertex2f(0.000, 0.667);
  glVertex2f(-0.120, 0.587);
  glVertex2f(-0.227, 0.460);
  glVertex2f(-0.247, 0.393);
  glVertex2f(-0.293, 0.293);
  glVertex2f(-0.300, 0.133);
  glVertex2f(-0.300, -0.013);
  glVertex2f(-0.293, -0.120);
  glVertex2f(-0.200, -0.287);
  glVertex2f(-0.060, -0.440);
  glVertex2f(0.033, -0.547);
  glVertex2f(0.200, -0.633);
  glVertex2f(0.327, -0.647);
  glVertex2f(0.413, -0.660);
  glVertex2f(0.467, -0.660);
  glVertex2f(0.493, -0.660);
  glVertex2f(0.527, -0.660);
  glVertex2f(0.507, -0.627);
  glVertex2f(0.427, -0.600);
  glVertex2f(0.367, -0.533);
  glVertex2f(0.293, -0.373);
  glVertex2f(0.207, -0.087);
  glVertex2f(0.200, 0.100);
  glVertex2f(0.213, 0.280);
  glVertex2f(0.280, 0.367);
  glVertex2f(0.427, 0.507);
  glVertex2f(0.473, 0.627);
  glVertex2f(0.567, 0.680);
  glVertex2f(0.573, 0.700);
  glVertex2f(0.553, 0.760);
  glVertex2f(0.507, 0.773);
  glVertex2f(0.387, 0.793);
  glVertex2f(0.300, 0.787);
  glVertex2f(0.213, 0.747);
  glVertex2f(0.087, 0.613);
  glVertex2f(-0.013, 0.580);
  glVertex2f(-0.060, 0.560);
  glVertex2f(-0.080, 0.447);
    glEnd();
    glutSwapBuffers();
}

void mouse (int button,int state,int x,int y)///小寫的
{
    float X = (x-150)/150.0;
    float Y = -(y-150)/150.0;///口訣:減一半,除一半,y負號
    if(state==GLUT_DOWN){
        printf("  glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

}
