#include <GL/glut.h>
#include <cmath>

void Dibujar();
void display();
void init();
void plano(int, int);
void butterfly();

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); 
	


	Dibujar();

	glFlush(); 
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(1000, 1000);

	glutCreateWindow("Equipo 6 - 8M"); //Window title
	glutDisplayFunc(display);
	init();
	glutReshapeFunc(plano); //Window resized behavior
	glutMainLoop(); //Start the loop

	return 0;
}
void init()
{
	glClearColor(0, 90, 0, 1.0); //Background color
}

void Dibujar()
{

	//glTranslatef(0.5, 0.5, 0);
	//glRotatef(25.0, 0, 0, 1);
	//glScalef(1.1, 1.1, 0);
	butterfly();
}

void plano(int WindowWidth, int WindowHeight)
{
	//Viewport - everything will be drawn in this area
	glViewport(0, 0, WindowWidth, WindowHeight); //Position and size of the viewport relative to the bottom left corner of the window

	//Projection
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-60, 60, -60, 60); //2D cartesian plane
	glMatrixMode(GL_MODELVIEW);
}

void butterfly()
{
	glColor3ub(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(51.4, 60.2);
	glVertex2f(28.9, 26.7);
	glVertex2f(33.1, 57.7);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(52.9, 54.3);
	glVertex2f(47.4, 9.9);
	glVertex2f(29.8, 22.7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(32.8, 0);
	glVertex2f(29.5, 18.3);
	glVertex2f(45, 6.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(30, 55.5);
	glVertex2f(27.1, 24.9);
	glVertex2f(16.5, 37);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(14.5, 34.1);
	glVertex2f(23.7, 22.3);
	glVertex2f(9.4, 9.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(26.8, 19.4);
	glVertex2f(29.9, -2.6);
	glVertex2f(10, 5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(10.9, 26.7);
	glVertex2f(3, 11.9);
	glVertex2f(6.3, 6.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(10.6, 0);
	glVertex2f(28.9, -6.3);
	glVertex2f(20.6, -17.2);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(30.7, -9.3);
	glVertex2f(23.1, -20.6);
	glVertex2f(35.2, -29.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(35.9, -34.4);
	glVertex2f(25.2, -26);
	glVertex2f(34.3, -41.3);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(21.9, -26.5);
	glVertex2f(32.2, -44.3);
	glVertex2f(20.9, -50.2);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(19.4, -24.1);
	glVertex2f(7.5, -25.1);
	glVertex2f(18.5, -47.7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(17.3, -18.2);
	glVertex2f(6, -20.6);
	glVertex2f(7.5, -0.9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4.9, -2.5);
	glVertex2f(1.4, -11.1);
	glVertex2f(3.9, -19);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4.7, 2.9);
	glVertex2f(1.4, -4.9);
	glVertex2f(2.6, 8.2);
	glEnd();

	glPointSize(10.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POINTS);
	glVertex2f(0.0f, 14.8f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0, 11);
	glVertex2f(-1.1, 6.4);
	glVertex2f(0, 1.1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-3.3, 9.3);
	glVertex2f(-6.2, 5);
	glVertex2f(-2.4, -5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-5.5, -3.3);
	glVertex2f(-1.8, -13.3);
	glVertex2f(-5.1, -18.6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-12.1, 27.3);
	glVertex2f(-4, 13.6);
	glVertex2f(-7.4, 7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-8.4, -0.9);
	glVertex2f(-7., -20.6);
	glVertex2f(-20, -20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-7.6, -25.6);
	glVertex2f(-20.4, -22.4);
	glVertex2f(-19.3, -47.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-22.9, -25.5);
	glVertex2f(-32.8, -44.8);
	glVertex2f(-22.1, -50);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-25.4, -25.7);
	glVertex2f(-36.7, -33.7);
	glVertex2f(-34.7, -42.1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-31.8, -8.4);
	glVertex2f(-35.7, -28.9);
	glVertex2f(-24.1, -19.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-11, 1);
	glVertex2f(-29.5, -6);
	glVertex2f(-21.6, -17.7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-9, 5.1);
	glVertex2f(-26, 21.7);
	glVertex2f(-15.9, 33.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-18.2, 38);
	glVertex2f(-31.1, 54.3);
	glVertex2f(-27.3, 24.1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-30.1, 27.6);
	glVertex2f(-33.5, 57.9);
	glVertex2f(-51.3, 59.7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-30.9, 21.8);
	glVertex2f(-53.9, 56.5);
	glVertex2f(-46.8, 9.8);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-30.2, 18.7);
	glVertex2f(-44.7, 6.4);
	glVertex2f(-33.1, -2.9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-11.2, 5.1);
	glVertex2f(-27.2, 18.2);
	glVertex2f(-30, 0);
	glEnd();


}