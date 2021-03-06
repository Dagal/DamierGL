/*
 * Robot1.h
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#ifndef ROBOT1_H_
#define ROBOT1_H_

#include "Box.h"

namespace DGL
{
	class Robot1 : public Item
	{
	private:
		Uint32 lastTime, currentTime, ellapsedTime;
		Box tete;
		Box cou;
		double angleZCou, sensCou;
		Box tronc;
		Box brasGauche;
		Box brasDroit;
		Box jambeGauche;
		Box jambeDroite;
	public:
		Robot1();
		virtual ~Robot1();

		void drawObject(Uint32 timeEllapsed);
	};
}
#endif /* ROBOT1_H_ */
