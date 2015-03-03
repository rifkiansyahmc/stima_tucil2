#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H
#include "point3d.h"

class Bruteforce: public Point3d{
	public:
		Bruteforce();
		~Bruteforce();
		Bruteforce(int n);
		void sortJarak(Point3d* pointsArray);
		void setArrayNilai(int n, float k);
		int getArrayNilai(int n);
		void printArray();
	private:
		int* arrayNilai;
};

#endif

