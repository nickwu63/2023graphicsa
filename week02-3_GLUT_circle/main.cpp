///week02-3_circle_cos_sin
#include <GL/glut.h>
#include <math.h>///cos()和sin()要用
void myCircle(float r,float x,float y)
{
    glBegin(GL_POLYGON);///step02-1開始畫多邊形
    for(float a = 0; a< 2*3.1415926; a+=0.01){
            glVertex2f( r*cos(a)+x, r*sin(a)+y );
        }
    glEnd();///step02-1結束畫
}
void display()
{
    glColor3f(1,0,1); myCircle( 0.6, 0, 0 );///正中間

    glColor3f(1,0,0); myCircle( 0.3, 0.5, 0.5 );///右上角
    glColor3f(0,1,0); myCircle( 0.3,-0.5, 0.5 );///左上角
    glColor3f(1,1,0); myCircle( 0.3,-0.5,-0.5 );///左下角
    glColor3f(0,0,1); myCircle( 0.3, 0.5,-0.5 );///右下角

    glutSwapBuffers();///請GLUT把畫面swap送到顯示的地方
}
int main(int argc, char *argv[])
{///上面是特別的main()函式，有很多參數
	glutInit(&argc, argv);///把GLUT開起來
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///上面這行，把顯示設定好
	glutCreateWindow("GLUT Shapes");///要開視窗
	glutDisplayFunc(display);///要顯示對應函式
	glutMainLoop();///最後用main迴圈，壓在最後面
}
