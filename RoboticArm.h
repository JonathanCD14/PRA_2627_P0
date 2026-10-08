#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
	private:
			double x;
			double y;
			double z;
			bool holding;

	public:
				RoboticArm(double x,double y,double z);

				double getX() const;
				double getY() const;
				double getZ() const;
				bool isHolding() const;

				void grab();
				void release();
				void move(double x,double y, double z);

};

#endif
