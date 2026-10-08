#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
	private:
			double x;
			doueble y;
			doueble z;
			bool holding;

	public:
				RoboticArm(doublex,double y,double z);

				double getX() const;
				double getY() const;
				double getZ() const;
				bool isHolding() const;

				void grab();
				void release();
				void move(double x,double y doueble,z);

};

#endif
