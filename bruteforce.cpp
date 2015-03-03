#include "bruteforce.h"
#include <cmath>
#include <iostream>
#include <stdio.h>

Bruteforce::Bruteforce(){ //isinya apa aja sih?
	int arrayNilai[0];
}

Bruteforce::Bruteforce(int n){
	int arrayNilai[n];
}
	
Bruteforce::~Bruteforce(){
}

void Bruteforce::setArrayNilai(int n, float k){
	arrayNilai[n] = k;
}

int Bruteforce::getArrayNilai(int n){
	return arrayNilai[n];
}

void Bruteforce::sortJarak(Point3d* pointsArray){
	int counter;
	while (pointsArray[counter] != NULL){
		counter++;
	}
	int i = pow(counter,2);
	Bruteforce ArrayBrute = new Bruteforce(pow(counter,2));
	int j,k;
	int temp, temp2; //temporary save
	//catat dulu semua antarpoint.
		for (j = 0; j<counter; j++){
			for(k = 0; k<counter; k++){
				int l = pointsArray[j].AntarPoint(pointsArray[j],pointsArray[k]);
				setArrayNilai(i, l);
				i++;
			}
		}
		int m,n;
		for (m = 0; m<counter; m++){
			for (n = 0; n<counter; n++){
				float k = getArrayNilai(n); //k = perbandingan point pertama dengan point kedua?
				float l = getArrayNilai(n+1); //l = perbandingan point pertama dengan point ketiga?
				if (k > l){ //kalau k > l, sort agar nilai l yang lebih kecil di kanan
				temp = k;
				temp2 = l;
				ArrayBrute[j].setArrayNilai(j,temp2);
				ArrayBrute[j+1].setArrayNilai(j+1,temp);
				} else {
				}
			}
		}
	}
		
void Bruteforce::printArray(){
	int n = 0;
	printf("Array sebagai berikut: ");
	while (getArrayNilai(n) != NULL){
		int x = getArrayNilai(n);
			printf("%f,",x);
			n++;
		}
	printf(".");	
	}