/*
 * CGLColor.h
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#ifndef CGLCOLOR_H_
#define CGLCOLOR_H_

#include "CGLVector4D.h"

/**
 *
 */
class CGLColor : public CGLEffect, public CGLVector4D
{
protected:

public:
	CGLColor();

	virtual ~CGLColor();

	void set(double rv, double gv, double bv, double av);
	void setR(double rv);
	void setG(double gv);
	void setB(double bv);
	void setA(double av);

	double getR();
	double getG();
	double getB();
	double getA();

	void drawObject(Uint32 timeEllapsed);
};

#endif /* CGLCOLOR_H_ */
