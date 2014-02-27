/*
 * CGLQuad.cpp
 *
 *  Created on: 20 janv. 2014
 *      Author: dagal
 */

#include "CGLQuad.h"

CGLQuad::CGLQuad() : CGLItem()
{
	longueur = 1;
	CGLQuad(0,0,0,1);
}

CGLQuad::CGLQuad(double x,double y,double z,double r) : CGLItem()
{
	longueur = r;
}

CGLQuad::~CGLQuad()
{
}

void CGLQuad::drawObject(Uint32 timeEllapsed)
{
	//cout << "Dessin d'un CGLQuad." << endl;

	glPushMatrix();
	glNormal3d(0,0,1);
	glBegin(GL_QUADS);
	double x = 0;
	double y = 0;
	double z = 0;
	glVertex3d(x, y, z);
	glVertex3d(x + longueur, y, z);
	glVertex3d(x + longueur, y + longueur, z);
	glVertex3d(x, y + longueur, z);
	glEnd();

	drawChildren(timeEllapsed);

	glPopMatrix();
}

