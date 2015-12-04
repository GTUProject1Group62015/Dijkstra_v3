/*
 * Edge.h
 *
 *  Created on: 12 Kas 2015
 *      Author: Guner
 */

#ifndef INPUT_H_
#define INPUT_H_
#include <cmath>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Input {
public:
	int x;
	int y;
	int d;
	

	/*constructors*/
	Input(int xi, int yi, int di)
	{
		x=xi;
		y=yi;
		d=di;	
	}

	Input(string parseString)
	{
		//double dereceDouble;
		int fractionPart,floatPart;
		string s1 = parseString.substr(parseString.find_first_of('.') + 1);
		string p1 = s1.substr(0 ,s1.find_first_of(','));
		s1 = s1.substr(s1.find_first_of('.') + 1);
		string p2 = s1.substr(0 ,s1.find_first_of(','));
		string p3 = s1.substr(s1.find_last_of(' ') + 1);
		
		string p4 = p3.substr(p3.find_first_of('.') + 1);
		floatPart = atoi(p4.c_str());		
		x = atoi(p1.c_str());
		y = atoi(p2.c_str());
		//dereceDouble = atof(p3.c_str());
		d=atoi(p3.c_str());
		
		//control float part
		fractionPart = floatPart/10;
		while(fractionPart!=0){
			floatPart = fractionPart	;	
			fractionPart = floatPart/10;
		}	
		if(floatPart>=5){
			d+=1;
		}
		
		cerr << "coorX : " << x << endl << "coorY : " << y << endl << "Degree : " << d << endl;
	}
	int getCoorX(){return x;}
	int getCoorY(){return y;}
	int getDegree(){return d;}
};

#endif /* INPUT_H */
