//
// =================================================
// | Grafica pe calculator                         |
// =================================================
// | Laboratorul I - 01_03_puncte_segmente_OLD.cpp |
// =================================================
//
//	Program ce desenaza mai multe segmente de dreapta si puncte individuale, folosindu-se tehnicile OLD OpenGL;
//
//
//	Biblioteci

#include <windows.h>
#include <GL/freeglut.h>    


//  Setarea parametrilor necesari pentru fereastra de vizualizare
void Initialize(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);		//  Culoarea de fond a ecranului;
    glMatrixMode(GL_PROJECTION);			//	Se precizeaza ca este vorba de o reprezentare 2D, realizata prin proiectie ortogonala;
	gluOrtho2D(0.0, 1200.0, 0.0, 700.0);	//  Sunt indicate coordonatele extreme ale ferestrei de vizualizare;
}

//  Functia de desenarea a graficii pe ecran;
//	Comentati/decomentati linii de cod pentru afisari diferite;
void RenderFunction(void)  
{
	//	Toate primitivelele definite vor avea specificatiile de mai jos (culoare, dimensiune) pana la o noua schimbare a acestora;

	glPointSize(2.5);				//  Se seteaza dimensiunea punctelor;
	glColor3f(0.0, 0.0, 1.0);		//  Culoarea punctelor: albastru;
	glBegin(GL_POINTS); 
		glVertex2i(20, 20);
		glVertex2i(21, 21);
		glVertex2i(22, 22);
		glVertex2i(23, 23);
		glVertex2i(24, 24);
		glVertex2i(27, 27);
		glVertex2i(100, 100);
	glEnd();


	glColor3d(0.0, 0.05, 0.05);
	// glPointSize (6.0);
	glBegin(GL_POINTS);
		glVertex2i(100, 400);
		glColor3f(1.0, 0.0, 0.5);
		glVertex2i(300, 500);
	glEnd();


	glColor3f(1.0, 0.0, 0.0); 
	glBegin(GL_LINE_STRIP);
		glVertex2i(0, 100);
		glVertex2i(400, 500);
	glEnd();

	glColor3f(0.5, 0.0, 1.0);
	glBegin(GL_LINES);
		glVertex2i(400, 400);
		glVertex2i(600, 500);
		glVertex2i(700, 520);
		glVertex2i(655, 690);
	glEnd();


	glFlush(); 
}

//	Punctul de intrare in program, se ruleaza rutina OpenGL;
int main(int argc, char** argv)
{
	//  Se initializeaza GLUT si contextul OpenGL si se configureaza fereastra si modul de afisare;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);				//	Modul de afisare al ferestrei, se foloseste un singur buffer de afisare si culori RGB;
	glutInitWindowPosition(100, 100);							//  Pozitia initiala a ferestrei;
	glutInitWindowSize(600, 350);								//  Dimensiunea ferestrei;
	glutCreateWindow ("Puncte & Segmente - OpenGL <<vechi>>");	//	Creeaza fereastra de vizualizare, indicand numele acesteia;


	Initialize();									//  Setarea parametrilor necesari pentru fereastra de vizualizare; 
	glClear(GL_COLOR_BUFFER_BIT);
	glutDisplayFunc(RenderFunction);				//  Desenarea scenei in fereastra; 

	//  Bucla principala de procesare a evenimentelor GLUT (functiile care incep cu glut: glutInit etc.) este pornita;
	//  Prelucreaza evenimentele si deseneaza fereastra de vizualizare pana cand utilizatorul o inchide;

	glutMainLoop ();

	return 0;
}