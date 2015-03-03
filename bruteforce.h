#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H
#include "point3d.h"

class Bruteforce: public Point3d{
	public:
		Bruteforce();
		~Bruteforce();
		Bruteforce(int n);
		float sortJarak(int n);
		void setArrayNilai(int n);
		int getArrayNilai(int n);
		void printArray();
	private:
		int* arrayNilai;
}

#endif

