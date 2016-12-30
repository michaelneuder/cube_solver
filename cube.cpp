//---------------------
//author: Michael Neuder
//function: analyzes the 
//position of a rubiks 
//cube and outputs a 
//series of steps to 
//solve!
//----------------------

#include <iostream>
#include <string>
#include "cube.hpp"

using namespace std;

cube::cube()
{
	cout << "cube created!" << endl;
	defaultCube();
	updateEdges();
	updateCorners();
}

void cube::listFaces()
{
	cout << "-----------------"<< endl;
	cout << "front face" << endl;
	cout << "-----------------"<< endl;
	cout << front_face.s11 << endl;
	cout << front_face.s12 << endl;
	cout << front_face.s13 << endl;
	cout << front_face.s21 << endl;
	cout << front_face.s22 << endl;
	cout << front_face.s23 << endl;
	cout << front_face.s31 << endl;
	cout << front_face.s32 << endl;
	cout << front_face.s33 << endl;
	cout << "-----------------"<< endl;

	cout << "top face" << endl;
	cout << "-----------------"<< endl;
	cout << top_face.s11 << endl;
	cout << top_face.s12 << endl;
	cout << top_face.s13 << endl;
	cout << top_face.s21 << endl;
	cout << top_face.s22 << endl;
	cout << top_face.s23 << endl;
	cout << top_face.s31 << endl;
	cout << top_face.s32 << endl;
	cout << top_face.s33 << endl;
	cout << "-----------------"<< endl;

	cout << "left face" << endl;
	cout << "-----------------"<< endl;
	cout << left_face.s11 << endl;
	cout << left_face.s12 << endl;
	cout << left_face.s13 << endl;
	cout << left_face.s21 << endl;
	cout << left_face.s22 << endl;
	cout << left_face.s23 << endl;
	cout << left_face.s31 << endl;
	cout << left_face.s32 << endl;
	cout << left_face.s33 << endl;
	cout << "-----------------"<< endl;	
	
	cout << "right face" << endl;
	cout << "-----------------"<< endl;
	cout << right_face.s11 << endl;
	cout << right_face.s12 << endl;
	cout << right_face.s13 << endl;
	cout << right_face.s21 << endl;
	cout << right_face.s22 << endl;
	cout << right_face.s23 << endl;
	cout << right_face.s31 << endl;
	cout << right_face.s32 << endl;
	cout << right_face.s33 << endl;
	cout << "-----------------"<< endl;

	cout << "bottom face" << endl;
	cout << "-----------------"<< endl;
	cout << bottom_face.s11 << endl;
	cout << bottom_face.s12 << endl;
	cout << bottom_face.s13 << endl;
	cout << bottom_face.s21 << endl;
	cout << bottom_face.s22 << endl;
	cout << bottom_face.s23 << endl;
	cout << bottom_face.s31 << endl;
	cout << bottom_face.s32 << endl;
	cout << bottom_face.s33 << endl;
	cout << "-----------------"<< endl;

	cout << "back face" << endl;
	cout << "-----------------"<< endl;
	cout << back_face.s11 << endl;
	cout << back_face.s12 << endl;
	cout << back_face.s13 << endl;
	cout << back_face.s21 << endl;
	cout << back_face.s22 << endl;
	cout << back_face.s23 << endl;
	cout << back_face.s31 << endl;
	cout << back_face.s32 << endl;
	cout << back_face.s33 << endl;
	cout << "-----------------"<< endl;
}

void cube::setCube()
{
	cout << "set the front face" << endl;
	cout << "------------------" << endl;
	cout << "enter square 11: " << endl;
	getline(cin, front_face.s11);
	cout << "enter square 12: " << endl;
	getline(cin, front_face.s12);
	cout << "enter square 13: " << endl;
	getline(cin, front_face.s13);
	cout << "enter square 21: " << endl;
	getline(cin, front_face.s21);
	cout << "enter square 22: " << endl;
	getline(cin, front_face.s22);
	cout << "enter square 23: " << endl;
	getline(cin, front_face.s23);
	cout << "enter square 31: " << endl;
	getline(cin, front_face.s31);
	cout << "enter square 32: " << endl;
	getline(cin, front_face.s32);
	cout << "enter square 33: " << endl;
	getline(cin, front_face.s33);
	cout << "front face set" << endl;
	cout << "------------------" << endl;

	cout << "set the top face" << endl;
	cout << "------------------" << endl;
	cout << "enter square 11: " << endl;
	getline(cin, top_face.s11);
	cout << "enter square 12: " << endl;
	getline(cin, top_face.s12);
	cout << "enter square 13: " << endl;
	getline(cin, top_face.s13);
	cout << "enter square 21: " << endl;
	getline(cin, top_face.s21);
	cout << "enter square 22: " << endl;
	getline(cin, top_face.s22);
	cout << "enter square 23: " << endl;
	getline(cin, top_face.s23);
	cout << "enter square 31: " << endl;
	getline(cin, top_face.s31);
	cout << "enter square 32: " << endl;
	getline(cin, top_face.s32);
	cout << "enter square 33: " << endl;
	getline(cin, top_face.s33);
	cout << "top face set" << endl;
	cout << "------------------" << endl;

	cout << "setting left face" << endl;
	cout << "------------------" << endl;
	cout << "enter square 11: " << endl;
	getline(cin, left_face.s11);
	cout << "enter square 12: " << endl;
	getline(cin, left_face.s12);
	cout << "enter square 13: " << endl;
	getline(cin, left_face.s13);
	cout << "enter square 21: " << endl;
	getline(cin, left_face.s21);
	cout << "enter square 22: " << endl;
	getline(cin, left_face.s22);
	cout << "enter square 23: " << endl;
	getline(cin, left_face.s23);
	cout << "enter square 31: " << endl;
	getline(cin, left_face.s31);
	cout << "enter square 32: " << endl;
	getline(cin, left_face.s32);
	cout << "enter square 33: " << endl;
	getline(cin, left_face.s33);
	cout << "left face set" << endl;
	cout << "------------------" << endl;

	cout << "setting right face" << endl;
	cout << "------------------" << endl;
	cout << "enter square 11: " << endl;
	getline(cin, right_face.s11);
	cout << "enter square 12: " << endl;
	getline(cin, right_face.s12);
	cout << "enter square 13: " << endl;
	getline(cin, right_face.s13);
	cout << "enter square 21: " << endl;
	getline(cin, right_face.s21);
	cout << "enter square 22: " << endl;
	getline(cin, right_face.s22);
	cout << "enter square 23: " << endl;
	getline(cin, right_face.s23);
	cout << "enter square 31: " << endl;
	getline(cin, right_face.s31);
	cout << "enter square 32: " << endl;
	getline(cin, right_face.s32);
	cout << "enter square 33: " << endl;
	getline(cin, right_face.s33);
	cout << "right face set" << endl;
	cout << "------------------" << endl;

	cout << "setting bottom face" << endl;
	cout << "------------------" << endl;
	cout << "enter square 11: " << endl;
	getline(cin, bottom_face.s11);
	cout << "enter square 12: " << endl;
	getline(cin, bottom_face.s12);
	cout << "enter square 13: " << endl;
	getline(cin, bottom_face.s13);
	cout << "enter square 21: " << endl;
	getline(cin, bottom_face.s21);
	cout << "enter square 22: " << endl;
	getline(cin, bottom_face.s22);
	cout << "enter square 23: " << endl;
	getline(cin, bottom_face.s23);
	cout << "enter square 31: " << endl;
	getline(cin, bottom_face.s31);
	cout << "enter square 32: " << endl;
	getline(cin, bottom_face.s32);
	cout << "enter square 33: " << endl;
	getline(cin, bottom_face.s33);
	cout << "bottom face set" << endl;
	cout << "------------------" << endl;

	cout << "setting back face" << endl;
	cout << "------------------" << endl;
	cout << "enter square 11: " << endl;
	getline(cin, back_face.s11);
	cout << "enter square 12: " << endl;
	getline(cin, back_face.s12);
	cout << "enter square 13: " << endl;
	getline(cin, back_face.s13);
	cout << "enter square 21: " << endl;
	getline(cin, back_face.s21);
	cout << "enter square 22: " << endl;
	getline(cin, back_face.s22);
	cout << "enter square 23: " << endl;
	getline(cin, back_face.s23);
	cout << "enter square 31: " << endl;
	getline(cin, back_face.s31);
	cout << "enter square 32: " << endl;
	getline(cin, back_face.s32);
	cout << "enter square 33: " << endl;
	getline(cin, back_face.s33);
	cout << "front face set" << endl;
	cout << "------------------" << endl;

	if(front_face.s11 == "w") front_face.s11 = "white";
	else if(front_face.s11 == "o") front_face.s11 = "orange";
	else if(front_face.s11 == "g") front_face.s11 = "green";
	else if(front_face.s11 == "b") front_face.s11 = "blue";
	else if(front_face.s11 == "y") front_face.s11 = "yellow";
	else if(front_face.s11 == "r") front_face.s11 = "red";

	if(front_face.s12 == "w") front_face.s12 = "white";
	else if(front_face.s12 == "o") front_face.s12 = "orange";
	else if(front_face.s12 == "g") front_face.s12 = "green";
	else if(front_face.s12 == "b") front_face.s12 = "blue";
	else if(front_face.s12 == "y") front_face.s12 = "yellow";
	else if(front_face.s12 == "r") front_face.s12 = "red";

	if(front_face.s13 == "w") front_face.s13 = "white";
	else if(front_face.s13 == "o") front_face.s13 = "orange";
	else if(front_face.s13 == "g") front_face.s13 = "green";
	else if(front_face.s13 == "b") front_face.s13 = "blue";
	else if(front_face.s13 == "y") front_face.s13 = "yellow";
	else if(front_face.s13 == "r") front_face.s13 = "red";

	if(front_face.s21 == "w") front_face.s21 = "white";
	else if(front_face.s21 == "o") front_face.s21 = "orange";
	else if(front_face.s21 == "g") front_face.s21 = "green";
	else if(front_face.s21 == "b") front_face.s21 = "blue";
	else if(front_face.s21 == "y") front_face.s21 = "yellow";
	else if(front_face.s21 == "r") front_face.s21 = "red";

	if(front_face.s22 == "w") front_face.s22 = "white";
	else if(front_face.s22 == "o") front_face.s22 = "orange";
	else if(front_face.s22 == "g") front_face.s22 = "green";
	else if(front_face.s22 == "b") front_face.s22 = "blue";
	else if(front_face.s22 == "y") front_face.s22 = "yellow";
	else if(front_face.s22 == "r") front_face.s22 = "red";

	if(front_face.s23 == "w") front_face.s23 = "white";
	else if(front_face.s23 == "o") front_face.s23 = "orange";
	else if(front_face.s23 == "g") front_face.s23 = "green";
	else if(front_face.s23 == "b") front_face.s23 = "blue";
	else if(front_face.s23 == "y") front_face.s23 = "yellow";
	else if(front_face.s23 == "r") front_face.s23 = "red";

	if(front_face.s31 == "w") front_face.s31 = "white";
	else if(front_face.s31 == "o") front_face.s31 = "orange";
	else if(front_face.s31 == "g") front_face.s31 = "green";
	else if(front_face.s31 == "b") front_face.s31 = "blue";
	else if(front_face.s31 == "y") front_face.s31 = "yellow";
	else if(front_face.s31 == "r") front_face.s31 = "red";

	if(front_face.s32 == "w") front_face.s32 = "white";
	else if(front_face.s32 == "o") front_face.s32 = "orange";
	else if(front_face.s32 == "g") front_face.s32 = "green";
	else if(front_face.s32 == "b") front_face.s32 = "blue";
	else if(front_face.s32 == "y") front_face.s32 = "yellow";
	else if(front_face.s32 == "r") front_face.s32 = "red";

	if(front_face.s33 == "w") front_face.s33 = "white";
	else if(front_face.s33 == "o") front_face.s33 = "orange";
	else if(front_face.s33 == "g") front_face.s33 = "green";
	else if(front_face.s33 == "b") front_face.s33 = "blue";
	else if(front_face.s33 == "y") front_face.s33 = "yellow";
	else if(front_face.s33 == "r") front_face.s33 = "red";



	if(top_face.s11 == "w") top_face.s11 = "white";
	else if(top_face.s11 == "o") top_face.s11 = "orange";
	else if(top_face.s11 == "g") top_face.s11 = "green";
	else if(top_face.s11 == "b") top_face.s11 = "blue";
	else if(top_face.s11 == "y") top_face.s11 = "yellow";
	else if(top_face.s11 == "r") top_face.s11 = "red";

	if(top_face.s12 == "w") top_face.s12 = "white";
	else if(top_face.s12 == "o") top_face.s12 = "orange";
	else if(top_face.s12 == "g") top_face.s12 = "green";
	else if(top_face.s12 == "b") top_face.s12 = "blue";
	else if(top_face.s12 == "y") top_face.s12 = "yellow";
	else if(top_face.s12 == "r") top_face.s12 = "red";

	if(top_face.s13 == "w") top_face.s13 = "white";
	else if(top_face.s13 == "o") top_face.s13 = "orange";
	else if(top_face.s13 == "g") top_face.s13 = "green";
	else if(top_face.s13 == "b") top_face.s13 = "blue";
	else if(top_face.s13 == "y") top_face.s13 = "yellow";
	else if(top_face.s13 == "r") top_face.s13 = "red";

	if(top_face.s21 == "w") top_face.s21 = "white";
	else if(top_face.s21 == "o") top_face.s21 = "orange";
	else if(top_face.s21 == "g") top_face.s21 = "green";
	else if(top_face.s21 == "b") top_face.s21 = "blue";
	else if(top_face.s21 == "y") top_face.s21 = "yellow";
	else if(top_face.s21 == "r") top_face.s21 = "red";

	if(top_face.s22 == "w") top_face.s22 = "white";
	else if(top_face.s22 == "o") top_face.s22 = "orange";
	else if(top_face.s22 == "g") top_face.s22 = "green";
	else if(top_face.s22 == "b") top_face.s22 = "blue";
	else if(top_face.s22 == "y") top_face.s22 = "yellow";
	else if(top_face.s22 == "r") top_face.s22 = "red";

	if(top_face.s23 == "w") top_face.s23 = "white";
	else if(top_face.s23 == "o") top_face.s23 = "orange";
	else if(top_face.s23 == "g") top_face.s23 = "green";
	else if(top_face.s23 == "b") top_face.s23 = "blue";
	else if(top_face.s23 == "y") top_face.s23 = "yellow";
	else if(top_face.s23 == "r") top_face.s23 = "red";

	if(top_face.s31 == "w") top_face.s31 = "white";
	else if(top_face.s31 == "o") top_face.s31 = "orange";
	else if(top_face.s31 == "g") top_face.s31 = "green";
	else if(top_face.s31 == "b") top_face.s31 = "blue";
	else if(top_face.s31 == "y") top_face.s31 = "yellow";
	else if(top_face.s31 == "r") top_face.s31 = "red";

	if(top_face.s32 == "w") top_face.s32 = "white";
	else if(top_face.s32 == "o") top_face.s32 = "orange";
	else if(top_face.s32 == "g") top_face.s32 = "green";
	else if(top_face.s32 == "b") top_face.s32 = "blue";
	else if(top_face.s32 == "y") top_face.s32 = "yellow";
	else if(top_face.s32 == "r") top_face.s32 = "red";

	if(top_face.s33 == "w") top_face.s33 = "white";
	else if(top_face.s33 == "o") top_face.s33 = "orange";
	else if(top_face.s33 == "g") top_face.s33 = "green";
	else if(top_face.s33 == "b") top_face.s33 = "blue";
	else if(top_face.s33 == "y") top_face.s33 = "yellow";
	else if(top_face.s33 == "r") top_face.s33 = "red";


	if(left_face.s11 == "w") left_face.s11 = "white";
	else if(left_face.s11 == "o") left_face.s11 = "orange";
	else if(left_face.s11 == "g") left_face.s11 = "green";
	else if(left_face.s11 == "b") left_face.s11 = "blue";
	else if(left_face.s11 == "y") left_face.s11 = "yellow";
	else if(left_face.s11 == "r") left_face.s11 = "red";

	if(left_face.s12 == "w") left_face.s12 = "white";
	else if(left_face.s12 == "o") left_face.s12 = "orange";
	else if(left_face.s12 == "g") left_face.s12 = "green";
	else if(left_face.s12 == "b") left_face.s12 = "blue";
	else if(left_face.s12 == "y") left_face.s12 = "yellow";
	else if(left_face.s12 == "r") left_face.s12 = "red";

	if(left_face.s13 == "w") left_face.s13 = "white";
	else if(left_face.s13 == "o") left_face.s13 = "orange";
	else if(left_face.s13 == "g") left_face.s13 = "green";
	else if(left_face.s13 == "b") left_face.s13 = "blue";
	else if(left_face.s13 == "y") left_face.s13 = "yellow";
	else if(left_face.s13 == "r") left_face.s13 = "red";

	if(left_face.s21 == "w") left_face.s21 = "white";
	else if(left_face.s21 == "o") left_face.s21 = "orange";
	else if(left_face.s21 == "g") left_face.s21 = "green";
	else if(left_face.s21 == "b") left_face.s21 = "blue";
	else if(left_face.s21 == "y") left_face.s21 = "yellow";
	else if(left_face.s21 == "r") left_face.s21 = "red";

	if(left_face.s22 == "w") left_face.s22 = "white";
	else if(left_face.s22 == "o") left_face.s22 = "orange";
	else if(left_face.s22 == "g") left_face.s22 = "green";
	else if(left_face.s22 == "b") left_face.s22 = "blue";
	else if(left_face.s22 == "y") left_face.s22 = "yellow";
	else if(left_face.s22 == "r") left_face.s22 = "red";

	if(left_face.s23 == "w") left_face.s23 = "white";
	else if(left_face.s23 == "o") left_face.s23 = "orange";
	else if(left_face.s23 == "g") left_face.s23 = "green";
	else if(left_face.s23 == "b") left_face.s23 = "blue";
	else if(left_face.s23 == "y") left_face.s23 = "yellow";
	else if(left_face.s23 == "r") left_face.s23 = "red";

	if(left_face.s31 == "w") left_face.s31 = "white";
	else if(left_face.s31 == "o") left_face.s31 = "orange";
	else if(left_face.s31 == "g") left_face.s31 = "green";
	else if(left_face.s31 == "b") left_face.s31 = "blue";
	else if(left_face.s31 == "y") left_face.s31 = "yellow";
	else if(left_face.s31 == "r") left_face.s31 = "red";

	if(left_face.s32 == "w") left_face.s32 = "white";
	else if(left_face.s32 == "o") left_face.s32 = "orange";
	else if(left_face.s32 == "g") left_face.s32 = "green";
	else if(left_face.s32 == "b") left_face.s32 = "blue";
	else if(left_face.s32 == "y") left_face.s32 = "yellow";
	else if(left_face.s32 == "r") left_face.s32 = "red";

	if(left_face.s33 == "w") left_face.s33 = "white";
	else if(left_face.s33 == "o") left_face.s33 = "orange";
	else if(left_face.s33 == "g") left_face.s33 = "green";
	else if(left_face.s33 == "b") left_face.s33 = "blue";
	else if(left_face.s33 == "y") left_face.s33 = "yellow";
	else if(left_face.s33 == "r") left_face.s33 = "red";


	if(bottom_face.s11 == "w") bottom_face.s11 = "white";
	else if(bottom_face.s11 == "o") bottom_face.s11 = "orange";
	else if(bottom_face.s11 == "g") bottom_face.s11 = "green";
	else if(bottom_face.s11 == "b") bottom_face.s11 = "blue";
	else if(bottom_face.s11 == "y") bottom_face.s11 = "yellow";
	else if(bottom_face.s11 == "r") bottom_face.s11 = "red";

	if(bottom_face.s12 == "w") bottom_face.s12 = "white";
	else if(bottom_face.s12 == "o") bottom_face.s12 = "orange";
	else if(bottom_face.s12 == "g") bottom_face.s12 = "green";
	else if(bottom_face.s12 == "b") bottom_face.s12 = "blue";
	else if(bottom_face.s12 == "y") bottom_face.s12 = "yellow";
	else if(bottom_face.s12 == "r") bottom_face.s12 = "red";

	if(bottom_face.s13 == "w") bottom_face.s13 = "white";
	else if(bottom_face.s13 == "o") bottom_face.s13 = "orange";
	else if(bottom_face.s13 == "g") bottom_face.s13 = "green";
	else if(bottom_face.s13 == "b") bottom_face.s13 = "blue";
	else if(bottom_face.s13 == "y") bottom_face.s13 = "yellow";
	else if(bottom_face.s13 == "r") bottom_face.s13 = "red";

	if(bottom_face.s21 == "w") bottom_face.s21 = "white";
	else if(bottom_face.s21 == "o") bottom_face.s21 = "orange";
	else if(bottom_face.s21 == "g") bottom_face.s21 = "green";
	else if(bottom_face.s21 == "b") bottom_face.s21 = "blue";
	else if(bottom_face.s21 == "y") bottom_face.s21 = "yellow";
	else if(bottom_face.s21 == "r") bottom_face.s21 = "red";

	if(bottom_face.s22 == "w") bottom_face.s22 = "white";
	else if(bottom_face.s22 == "o") bottom_face.s22 = "orange";
	else if(bottom_face.s22 == "g") bottom_face.s22 = "green";
	else if(bottom_face.s22 == "b") bottom_face.s22 = "blue";
	else if(bottom_face.s22 == "y") bottom_face.s22 = "yellow";
	else if(bottom_face.s22 == "r") bottom_face.s22 = "red";

	if(bottom_face.s23 == "w") bottom_face.s23 = "white";
	else if(bottom_face.s23 == "o") bottom_face.s23 = "orange";
	else if(bottom_face.s23 == "g") bottom_face.s23 = "green";
	else if(bottom_face.s23 == "b") bottom_face.s23 = "blue";
	else if(bottom_face.s23 == "y") bottom_face.s23 = "yellow";
	else if(bottom_face.s23 == "r") bottom_face.s23 = "red";

	if(bottom_face.s31 == "w") bottom_face.s31 = "white";
	else if(bottom_face.s31 == "o") bottom_face.s31 = "orange";
	else if(bottom_face.s31 == "g") bottom_face.s31 = "green";
	else if(bottom_face.s31 == "b") bottom_face.s31 = "blue";
	else if(bottom_face.s31 == "y") bottom_face.s31 = "yellow";
	else if(bottom_face.s31 == "r") bottom_face.s31 = "red";

	if(bottom_face.s32 == "w") bottom_face.s32 = "white";
	else if(bottom_face.s32 == "o") bottom_face.s32 = "orange";
	else if(bottom_face.s32 == "g") bottom_face.s32 = "green";
	else if(bottom_face.s32 == "b") bottom_face.s32 = "blue";
	else if(bottom_face.s32 == "y") bottom_face.s32 = "yellow";
	else if(bottom_face.s32 == "r") bottom_face.s32 = "red";

	if(bottom_face.s33 == "w") bottom_face.s33 = "white";
	else if(bottom_face.s33 == "o") bottom_face.s33 = "orange";
	else if(bottom_face.s33 == "g") bottom_face.s33 = "green";
	else if(bottom_face.s33 == "b") bottom_face.s33 = "blue";
	else if(bottom_face.s33 == "y") bottom_face.s33 = "yellow";
	else if(bottom_face.s33 == "r") bottom_face.s33 = "red";


	if(back_face.s11 == "w") back_face.s11 = "white";
	else if(back_face.s11 == "o") back_face.s11 = "orange";
	else if(back_face.s11 == "g") back_face.s11 = "green";
	else if(back_face.s11 == "b") back_face.s11 = "blue";
	else if(back_face.s11 == "y") back_face.s11 = "yellow";
	else if(back_face.s11 == "r") back_face.s11 = "red";

	if(back_face.s12 == "w") back_face.s12 = "white";
	else if(back_face.s12 == "o") back_face.s12 = "orange";
	else if(back_face.s12 == "g") back_face.s12 = "green";
	else if(back_face.s12 == "b") back_face.s12 = "blue";
	else if(back_face.s12 == "y") back_face.s12 = "yellow";
	else if(back_face.s12 == "r") back_face.s12 = "red";

	if(back_face.s13 == "w") back_face.s13 = "white";
	else if(back_face.s13 == "o") back_face.s13 = "orange";
	else if(back_face.s13 == "g") back_face.s13 = "green";
	else if(back_face.s13 == "b") back_face.s13 = "blue";
	else if(back_face.s13 == "y") back_face.s13 = "yellow";
	else if(back_face.s13 == "r") back_face.s13 = "red";

	if(back_face.s21 == "w") back_face.s21 = "white";
	else if(back_face.s21 == "o") back_face.s21 = "orange";
	else if(back_face.s21 == "g") back_face.s21 = "green";
	else if(back_face.s21 == "b") back_face.s21 = "blue";
	else if(back_face.s21 == "y") back_face.s21 = "yellow";
	else if(back_face.s21 == "r") back_face.s21 = "red";

	if(back_face.s22 == "w") back_face.s22 = "white";
	else if(back_face.s22 == "o") back_face.s22 = "orange";
	else if(back_face.s22 == "g") back_face.s22 = "green";
	else if(back_face.s22 == "b") back_face.s22 = "blue";
	else if(back_face.s22 == "y") back_face.s22 = "yellow";
	else if(back_face.s22 == "r") back_face.s22 = "red";

	if(back_face.s23 == "w") back_face.s23 = "white";
	else if(back_face.s23 == "o") back_face.s23 = "orange";
	else if(back_face.s23 == "g") back_face.s23 = "green";
	else if(back_face.s23 == "b") back_face.s23 = "blue";
	else if(back_face.s23 == "y") back_face.s23 = "yellow";
	else if(back_face.s23 == "r") back_face.s23 = "red";

	if(back_face.s31 == "w") back_face.s31 = "white";
	else if(back_face.s31 == "o") back_face.s31 = "orange";
	else if(back_face.s31 == "g") back_face.s31 = "green";
	else if(back_face.s31 == "b") back_face.s31 = "blue";
	else if(back_face.s31 == "y") back_face.s31 = "yellow";
	else if(back_face.s31 == "r") back_face.s31 = "red";

	if(back_face.s32 == "w") back_face.s32 = "white";
	else if(back_face.s32 == "o") back_face.s32 = "orange";
	else if(back_face.s32 == "g") back_face.s32 = "green";
	else if(back_face.s32 == "b") back_face.s32 = "blue";
	else if(back_face.s32 == "y") back_face.s32 = "yellow";
	else if(back_face.s32 == "r") back_face.s32 = "red";

	if(back_face.s33 == "w") back_face.s33 = "white";
	else if(back_face.s33 == "o") back_face.s33 = "orange";
	else if(back_face.s33 == "g") back_face.s33 = "green";
	else if(back_face.s33 == "b") back_face.s33 = "blue";
	else if(back_face.s33 == "y") back_face.s33 = "yellow";
	else if(back_face.s33 == "r") back_face.s33 = "red";


	if(right_face.s11 == "w") right_face.s11 = "white";
	else if(right_face.s11 == "o") right_face.s11 = "orange";
	else if(right_face.s11 == "g") right_face.s11 = "green";
	else if(right_face.s11 == "b") right_face.s11 = "blue";
	else if(right_face.s11 == "y") right_face.s11 = "yellow";
	else if(right_face.s11 == "r") right_face.s11 = "red";

	if(right_face.s12 == "w") right_face.s12 = "white";
	else if(right_face.s12 == "o") right_face.s12 = "orange";
	else if(right_face.s12 == "g") right_face.s12 = "green";
	else if(right_face.s12 == "b") right_face.s12 = "blue";
	else if(right_face.s12 == "y") right_face.s12 = "yellow";
	else if(right_face.s12 == "r") right_face.s12 = "red";

	if(right_face.s13 == "w") right_face.s13 = "white";
	else if(right_face.s13 == "o") right_face.s13 = "orange";
	else if(right_face.s13 == "g") right_face.s13 = "green";
	else if(right_face.s13 == "b") right_face.s13 = "blue";
	else if(right_face.s13 == "y") right_face.s13 = "yellow";
	else if(right_face.s13 == "r") right_face.s13 = "red";

	if(right_face.s21 == "w") right_face.s21 = "white";
	else if(right_face.s21 == "o") right_face.s21 = "orange";
	else if(right_face.s21 == "g") right_face.s21 = "green";
	else if(right_face.s21 == "b") right_face.s21 = "blue";
	else if(right_face.s21 == "y") right_face.s21 = "yellow";
	else if(right_face.s21 == "r") right_face.s21 = "red";

	if(right_face.s22 == "w") right_face.s22 = "white";
	else if(right_face.s22 == "o") right_face.s22 = "orange";
	else if(right_face.s22 == "g") right_face.s22 = "green";
	else if(right_face.s22 == "b") right_face.s22 = "blue";
	else if(right_face.s22 == "y") right_face.s22 = "yellow";
	else if(right_face.s22 == "r") right_face.s22 = "red";

	if(right_face.s23 == "w") right_face.s23 = "white";
	else if(right_face.s23 == "o") right_face.s23 = "orange";
	else if(right_face.s23 == "g") right_face.s23 = "green";
	else if(right_face.s23 == "b") right_face.s23 = "blue";
	else if(right_face.s23 == "y") right_face.s23 = "yellow";
	else if(right_face.s23 == "r") right_face.s23 = "red";

	if(right_face.s31 == "w") right_face.s31 = "white";
	else if(right_face.s31 == "o") right_face.s31 = "orange";
	else if(right_face.s31 == "g") right_face.s31 = "green";
	else if(right_face.s31 == "b") right_face.s31 = "blue";
	else if(right_face.s31 == "y") right_face.s31 = "yellow";
	else if(right_face.s31 == "r") right_face.s31 = "red";

	if(right_face.s32 == "w") right_face.s32 = "white";
	else if(right_face.s32 == "o") right_face.s32 = "orange";
	else if(right_face.s32 == "g") right_face.s32 = "green";
	else if(right_face.s32 == "b") right_face.s32 = "blue";
	else if(right_face.s32 == "y") right_face.s32 = "yellow";
	else if(right_face.s32 == "r") right_face.s32 = "red";

	if(right_face.s33 == "w") right_face.s33 = "white";
	else if(right_face.s33 == "o") right_face.s33 = "orange";
	else if(right_face.s33 == "g") right_face.s33 = "green";
	else if(right_face.s33 == "b") right_face.s33 = "blue";
	else if(right_face.s33 == "y") right_face.s33 = "yellow";
	else if(right_face.s33 == "r") right_face.s33 = "red";

	cout << "all faces set!" << endl;
	updateEdges();
	updateCorners();
}

void cube::defaultCube()
{
	front_face.s11 = "white";
	front_face.s12 = "white";
	front_face.s13 = "white";
	front_face.s21 = "white";
	front_face.s22 = "white";
	front_face.s23 = "white";
	front_face.s31 = "white";
	front_face.s32 = "white";
	front_face.s33 = "white";

	top_face.s11 = "orange";
	top_face.s12 = "orange";
	top_face.s13 = "orange";
	top_face.s21 = "orange";
	top_face.s22 = "orange";
	top_face.s23 = "orange";
	top_face.s31 = "orange";
	top_face.s32 = "orange";
	top_face.s33 = "orange";

	left_face.s11 = "green";
	left_face.s12 = "green";
	left_face.s13 = "green";
	left_face.s21 = "green";
	left_face.s22 = "green";
	left_face.s23 = "green";
	left_face.s31 = "green";
	left_face.s32 = "green";
	left_face.s33 = "green";

	right_face.s11 = "blue";
	right_face.s12 = "blue";
	right_face.s13 = "blue";
	right_face.s21 = "blue";
	right_face.s22 = "blue";
	right_face.s23 = "blue";
	right_face.s31 = "blue";
	right_face.s32 = "blue";
	right_face.s33 = "blue";

	bottom_face.s11 = "red";
	bottom_face.s12 = "red";
	bottom_face.s13 = "red";
	bottom_face.s21 = "red";
	bottom_face.s22 = "red";
	bottom_face.s23 = "red";
	bottom_face.s31 = "red";
	bottom_face.s32 = "red";
	bottom_face.s33 = "red";

	back_face.s11 = "yellow";
	back_face.s12 = "yellow";
	back_face.s13 = "yellow";
	back_face.s21 = "yellow";
	back_face.s22 = "yellow";
	back_face.s23 = "yellow";
	back_face.s31 = "yellow";
	back_face.s32 = "yellow";
	back_face.s33 = "yellow";

	cout << "default cube (solved) set!" << endl;
	updateEdges();
	updateCorners();
}

void cube::front()//clockwise
{
	string temp1, temp2, temp3; 
	//these will hold colors that will be rotated from right to bottom
	temp1 = right_face.s11;
	temp2 = right_face.s21;
	temp3 = right_face.s31;

	//top face three rotated to the right face
	right_face.s11 = top_face.s31;
	right_face.s21 = top_face.s32;
	right_face.s31 = top_face.s33;

	//left face three rotated to the top face
	top_face.s31 = left_face.s33;
	top_face.s32 = left_face.s23;
	top_face.s33 = left_face.s13;

	//bottom face three rotated to the left face
	left_face.s13 = bottom_face.s11;
	left_face.s23 = bottom_face.s12;
	left_face.s33 = bottom_face.s13;

	//right face three rotated to the bottom
	bottom_face.s11 = temp3;
	bottom_face.s12 = temp2;
	bottom_face.s13 = temp1;

	//rotate the squares on the front face
	string temp4 = front_face.s12;
	string temp5 = front_face.s11;
	front_face.s12 = front_face.s21;
	front_face.s21 = front_face.s32;
	front_face.s32 = front_face.s23;
	front_face.s23 = temp4;
	front_face.s11 = front_face.s31;
	front_face.s31 = front_face.s33;
	front_face.s33 = front_face.s13;
	front_face.s13 = temp5;
	updateEdges();
	updateCorners();
}

void cube::frontI()//counterclockwise
{//front inverted is equivalent to three front rotations
	front();
	front();
	front();
	updateEdges();
	updateCorners();
}

void cube::right()//rotating the right face away from you
{
	string temp1, temp2, temp3; 
	//these will hold colors top three that will be rotated to the back
	temp1 = top_face.s13;
	temp2 = top_face.s23;
	temp3 = top_face.s33;

	//front triple to top
	top_face.s13 = front_face.s13;
	top_face.s23 = front_face.s23;
	top_face.s33 = front_face.s33;

	//bottom triple to front
	front_face.s13 = bottom_face.s13;
	front_face.s23 = bottom_face.s23;
	front_face.s33 = bottom_face.s33;

	//back triple to bottom
	bottom_face.s13 = back_face.s31;
	bottom_face.s23 = back_face.s21;
	bottom_face.s33 = back_face.s11;

	//top triple to back
	back_face.s11 = temp3;
	back_face.s21 = temp2;
	back_face.s31 = temp1;

	//rotate the squares on the right face
	string temp4 = right_face.s12;
	string temp5 = right_face.s11;
	right_face.s12 = right_face.s21;
	right_face.s21 = right_face.s32;
	right_face.s32 = right_face.s23;
	right_face.s23 = temp4;
	right_face.s11 = right_face.s31;
	right_face.s31 = right_face.s33;
	right_face.s33 = right_face.s13;
	right_face.s13 = temp5;
	updateEdges();
	updateCorners();
}

void cube::rightI()//right face towards you
{
	right();
	right();
	right();
	updateEdges();
	updateCorners();
}

void cube::left()//left face away from you 
{
	string temp1, temp2, temp3; 
	//these will hold colors top three that will be rotated to the back
	temp1 = top_face.s11;
	temp2 = top_face.s21;
	temp3 = top_face.s31;

	//front triple to top
	top_face.s11 = front_face.s11;
	top_face.s21 = front_face.s21;
	top_face.s31 = front_face.s31;

	//bottom triple to front
	front_face.s11 = bottom_face.s11;
	front_face.s21 = bottom_face.s21;
	front_face.s31 = bottom_face.s31;

	//back triple to bottom
	bottom_face.s11 = back_face.s33;
	bottom_face.s21 = back_face.s23;
	bottom_face.s31 = back_face.s13;

	//top triple to back
	back_face.s13 = temp3;
	back_face.s23 = temp2;
	back_face.s33 = temp1;

	//rotate the squares on the left face
	string temp4 = left_face.s12;
	string temp5 = left_face.s11;
	left_face.s12 = left_face.s23;
	left_face.s23 = left_face.s32;
	left_face.s32 = left_face.s21;
	left_face.s21 = temp4;
	left_face.s11 = left_face.s13;
	left_face.s13 = left_face.s33;
	left_face.s33 = left_face.s31;
	left_face.s31 = temp5;
	updateEdges();
	updateCorners();
}

void cube::leftI()
{
	left();
	left();
	left(); 
	updateEdges();
	updateCorners();
}

void cube::top() //clockwise
{
	string temp1, temp2, temp3; 
	//these will hold colors front three that will be rotated to the left
	temp1 = front_face.s11;
	temp2 = front_face.s12;
	temp3 = front_face.s13;

	//right top triple rotated to front top triple
	front_face.s11 = right_face.s11;
	front_face.s12 = right_face.s12;
	front_face.s13 = right_face.s13;

	//back top triple rotated to right top triple
	right_face.s11 = back_face.s11;
	right_face.s12 = back_face.s12;
	right_face.s13 = back_face.s13;

	//left top triple rotated to back top triple
	back_face.s11 = left_face.s11;
	back_face.s12 = left_face.s12;
	back_face.s13 = left_face.s13;

	//front triple rotated to the lef top triple
	left_face.s11 = temp1;
	left_face.s12 = temp2;
	left_face.s13 = temp3;

	//rotate the squares on the front face
	string temp4 = top_face.s12;
	string temp5 = top_face.s11;
	top_face.s12 = top_face.s21;
	top_face.s21 = top_face.s32;
	top_face.s32 = top_face.s23;
	top_face.s23 = temp4;
	top_face.s11 = top_face.s31;
	top_face.s31 = top_face.s33;
	top_face.s33 = top_face.s13;
	top_face.s13 = temp5;
	updateEdges();
	updateCorners();
}

void cube::topI()
{
	top();
	top();
	top();
	updateEdges();
	updateCorners();
}

void cube::bottom()//this is the left rotation of the bottom face
{
	string temp1, temp2, temp3; 
	//these will hold colors front three that will be rotated to the left
	temp1 = front_face.s31;
	temp2 = front_face.s32;
	temp3 = front_face.s33;

	//right bottom triple rotated to front bottom triple
	front_face.s31 = right_face.s31;
	front_face.s32 = right_face.s32;
	front_face.s33 = right_face.s33;

	//back bottom triple rotated to right bottom triple
	right_face.s31 = back_face.s31;
	right_face.s32 = back_face.s32;
	right_face.s33 = back_face.s33;

	//left bottom triple rotated to back bottom triple
	back_face.s31 = left_face.s31;
	back_face.s32 = left_face.s32;
	back_face.s33 = left_face.s33;

	//front triple rotated to the lef top triple
	left_face.s31 = temp1;
	left_face.s32 = temp2;
	left_face.s33 = temp3;

	//rotate the squares on the bottom face
	string temp4 = bottom_face.s12;
	string temp5 = bottom_face.s11;
	bottom_face.s12 = bottom_face.s23;
	bottom_face.s23 = bottom_face.s32;
	bottom_face.s32 = bottom_face.s21;
	bottom_face.s21 = temp4;
	bottom_face.s11 = bottom_face.s13;
	bottom_face.s13 = bottom_face.s33;
	bottom_face.s33 = bottom_face.s31;
	bottom_face.s31 = temp5;
	updateEdges();
	updateCorners();
}

void cube::bottomI()
{
	bottom();
	bottom();
	bottom();
	updateEdges();
	updateCorners();
}

/*
void cube::leftInsert()
{
	topI();
	left();
	top();
	leftI();
	top();
	front();
	topI();
	frontI();
	updateEdges();
	updateCorners();
}

void cube::rightInsert()
{
	top();
	right();
	topI();
	rightI();
	topI();
	frontI();
	top();
	front();
	updateEdges();
	updateCorners();
}

	
void cube::sortCorners()
{
	top();
	right();
	topI();
	left();
	top();
	rightI();
	topI();
	leftI();
	updateEdges();
	updateCorners();
}

		
void cube::solveCorners()
{
	rightI();
	bottom();
	right();
	bottomI();
	updateEdges();
	updateCorners();
}
*/
/*		
void cube::rotate(face new_front, face new_top)
{
	face whiteF = front_face;
	face yellowF = back_face;
	face blueF = right_face;
	face greenF = left_face;
	face orangeF = top_face;
	face redF = bottom_face;

	if(new_front.s22 == "white")
	{
		if(new_top.s22 == "orange")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = greenF;
			right_face = blueF;
			bottom_face = redF;
			back_face = yellowF;

		}
		else if(new_top.s22 == "green")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = redF;
			right_face = orangeF;
			bottom_face = blueF;
			back_face = yellowF;	
		}

		else if(new_top.s22 == "red")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = blueF;
			right_face = greenF;
			bottom_face = orangeF;
			back_face = yellowF;	
		}

		else if(new_top.s22 == "blue")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = orangeF;
			right_face = redF;
			bottom_face = greenF;
			back_face = yellowF;	
		}

		else
		{
			cout << "houston we have a problem :/" << endl;
		}
	}

	else if(new_front.s22 == "orange")
	{
		if(new_top.s22 == "white")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = blueF;
			right_face = greenF;
			bottom_face = yellowF;
			back_face = redF;
		}
		else if(new_top.s22 == "blue")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = yellowF;
			right_face = whiteF;
			bottom_face = greenF;
			back_face = redF;	
		}

		else if(new_top.s22 == "yellow")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = greenF;
			right_face = blueF;
			bottom_face = whiteF;
			back_face = redF;	
		}

		else if(new_top.s22 == "green")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = whiteF;
			right_face = yellowF;
			bottom_face = blueF;
			back_face = redF;	
		}

		else
		{
			cout << "houston we have a problem :/" << endl;
		}
	}

	else if(new_front.s22 == "green")
	{
		if(new_top.s22 == "white")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = orangeF;
			right_face = redF;
			bottom_face = yellowF;
			back_face = blueF;
		}
		else if(new_top.s22 == "orange")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = yellowF;
			right_face = whiteF;
			bottom_face = redF;
			back_face = blueF;	
		}

		else if(new_top.s22 == "yellow")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = redF;
			right_face = orangeF;
			bottom_face = whiteF;
			back_face = blueF;	
		}

		else if(new_top.s22 == "red")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = whiteF;
			right_face = yellowF;
			bottom_face = orangeF;
			back_face = blueF;	
		}

		else
		{
			cout << "houston we have a problem :/" << endl;
		}
	}

	else if(new_front.s22 == "red")
	{
		if(new_top.s22 == "blue")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = whiteF; 
			right_face = yellowF;
			bottom_face = greenF;
			back_face = orangeF;
		}
		else if(new_top.s22 == "white")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = greenF;
			right_face = blueF;
			bottom_face = yellowF;
			back_face = orangeF;	
		}

		else if(new_top.s22 == "green")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = yellowF;
			right_face = whiteF;
			bottom_face = blueF;
			back_face = orangeF;	
		}

		else if(new_top.s22 == "yellow")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = blueF;
			right_face = greenF;
			bottom_face = whiteF;
			back_face = orangeF;	
		}

		else
		{
			cout << "houston we have a problem :/" << endl;
		}
	}

	else if(new_front.s22 == "yellow")
	{
		if(new_top.s22 == "orange")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = blueF;
			right_face = greenF;
			bottom_face = redF;
			back_face = whiteF;
		}
		else if(new_top.s22 == "blue")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = redF;
			right_face = orangeF;
			bottom_face = greenF;
			back_face = whiteF;	
		}

		else if(new_top.s22 == "red")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = greenF;
			right_face = blueF;
			bottom_face = orangeF;
			back_face = whiteF;	
		}

		else if(new_top.s22 == "green")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = orangeF;
			right_face = redF;
			bottom_face = blueF;
			back_face = whiteF;	
		}

		else
		{
			cout << "houston we have a problem :/" << endl;
		}
	}

	else if(new_front.s22 == "blue")
	{
		if(new_top.s22 == "yellow")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = orangeF;
			right_face = redF;
			bottom_face = whiteF;
			back_face = greenF;
		}
		else if(new_top.s22 == "orange")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = whiteF;
			right_face = yellowF;
			bottom_face = redF;
			back_face = greenF;	
		}

		else if(new_top.s22 == "white")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = redF;
			right_face = orangeF;
			bottom_face = yellowF;
			back_face = greenF;	
		}

		else if(new_top.s22 == "redF")
		{
			front_face = new_front;
			top_face = new_top;
			left_face = yellowF;
			right_face = whiteF;
			bottom_face = orangeF;
			back_face = greenF;	
		}

		else
		{
			cout << "houston we have a problem :/" << endl;
		}
	}

	else
	{
		cout << "houston we have a MAJOR problem :(" << endl;
	}
}
*/

void cube::rotateUp()
{
	face tempFace;
	tempFace = front_face;
	front_face = bottom_face;
	bottom_face = back_face;//have to reassign these colors
	back_face = top_face;//have to resassign these colors
	top_face = tempFace;

	//left must be rotated
	string tempCorner, tempEdge;
	tempCorner = left_face.s11;
	tempEdge = left_face.s12;

	left_face.s11 = left_face.s13;//left corners reassigned
	left_face.s13 = left_face.s33;
	left_face.s33 = left_face.s31;
	left_face.s31 = tempCorner;

	left_face.s12 = left_face.s23; // left edges reassigned
	left_face.s23 = left_face.s32;
	left_face.s32 = left_face.s21;
	left_face.s21 = tempEdge;

	//right must be rotated
	tempCorner = right_face.s11;
	tempEdge = right_face.s12;

	right_face.s11 = right_face.s31; //right corners reassigned
	right_face.s31 = right_face.s33;
	right_face.s33 = right_face.s13;
	right_face.s13 = tempCorner;

	right_face.s12 = right_face.s21;//right edges reassigned
	right_face.s21 = right_face.s32;
	right_face.s32 = right_face.s23;
	right_face.s23 = tempEdge;

	//back to bottom reassignment
	tempFace = bottom_face;
	string tempColor = bottom_face.s11;
	bottom_face.s11 = tempFace.s33;
	bottom_face.s33  = tempColor;

	tempColor = bottom_face.s12;
	bottom_face.s12 = tempFace.s32;
	bottom_face.s32 = tempColor;

	tempColor = bottom_face.s13;
	bottom_face.s13 = tempFace.s31;
	bottom_face.s31 = tempColor;

	tempColor = bottom_face.s21;
	bottom_face.s21 = tempFace.s23;
	bottom_face.s23 = tempColor;

	//top to back reassignment
	tempFace = back_face;
	tempColor = back_face.s11;
	back_face.s11 = tempFace.s33;
	back_face.s33  = tempColor;

	tempColor = back_face.s12;
	back_face.s12 = tempFace.s32;
	back_face.s32 = tempColor;

	tempColor = back_face.s13;
	back_face.s13 = tempFace.s31;
	back_face.s31 = tempColor;

	tempColor = back_face.s21;
	back_face.s21 = tempFace.s23;
	back_face.s23 = tempColor;
	updateEdges();
	updateCorners();

}

void cube::rotateLeft()
{
	face tempFace;
	tempFace = front_face;
	front_face = right_face;
	right_face = back_face;//have to reassign these colors
	back_face = left_face;//have to resassign these colors
	left_face = tempFace;

	//bottom must be rotated
	string tempCorner, tempEdge;
	tempCorner = bottom_face.s11;
	tempEdge = bottom_face.s12;

	bottom_face.s11 = bottom_face.s13;//bottom corners reassigned
	bottom_face.s13 = bottom_face.s33;
	bottom_face.s33 = bottom_face.s31;
	bottom_face.s31 = tempCorner;

	bottom_face.s12 = bottom_face.s23; // bottom edges reassigned
	bottom_face.s23 = bottom_face.s32;
	bottom_face.s32 = bottom_face.s21;
	bottom_face.s21 = tempEdge;

	//top must be rotated
	tempCorner = top_face.s11;
	tempEdge = top_face.s12;

	top_face.s11 = top_face.s31; //top corners reassigned
	top_face.s31 = top_face.s33;
	top_face.s33 = top_face.s13;
	top_face.s13 = tempCorner;

	top_face.s12 = top_face.s21;//top edges reassigned
	top_face.s21 = top_face.s32;
	top_face.s32 = top_face.s23;
	top_face.s23 = tempEdge;
	updateEdges();
	updateCorners();
}

void cube::updateEdges()
{
	//updateing front layer edges
	edgeF1.color1 = top_face.s32;
	edgeF1.color2 = front_face.s12;

	edgeF2.color1 = right_face.s21;
	edgeF2.color2 = front_face.s23;

	edgeF3.color1 = bottom_face.s12;
	edgeF3.color2 = front_face.s32;

	edgeF4.color1 = left_face.s23;
	edgeF4.color2 = front_face.s21;

	//updating mid layer edges
	edgeM1.color1 = top_face.s21;
	edgeM1.color2 = left_face.s12;

	edgeM2.color1 = top_face.s23;
	edgeM2.color2 = right_face.s12;

	edgeM3.color1 = right_face.s32;
	edgeM3.color2 = bottom_face.s23;

	edgeM4.color1 = left_face.s32;
	edgeM4.color2 = bottom_face.s21;

	//updating top layer edges
	edgeBa1.color1 = top_face.s12;
	edgeBa1.color2 = back_face.s12;

	edgeBa2.color1 = right_face.s23;
	edgeBa2.color2 = back_face.s21;

	edgeBa3.color1 = bottom_face.s32;
	edgeBa3.color2 = back_face.s32;

	edgeBa4.color1 = left_face.s21;
	edgeBa4.color2 = back_face.s23;
}

void cube::updateCorners()
{
	//updating front corners
	cornerF1.color1 = top_face.s31;
	cornerF1.color2 = front_face.s11;
	cornerF1.color3 = left_face.s13;

	cornerF2.color1 = top_face.s33;
	cornerF2.color2 = front_face.s13;
	cornerF2.color3 = right_face.s11;

	cornerF3.color1 = bottom_face.s13;
	cornerF3.color2 = front_face.s33;
	cornerF3.color3 = right_face.s31;

	cornerF4.color1 = bottom_face.s11;
	cornerF4.color2 = front_face.s31;
	cornerF4.color3 = left_face.s33;

	//updating back corners
	cornerB1.color1 = top_face.s11;
	cornerB1.color2 = back_face.s13;
	cornerB1.color3 = left_face.s11;

	cornerB2.color1 = top_face.s13;
	cornerB2.color2 = back_face.s11;
	cornerB2.color3 = right_face.s13;

	cornerB3.color1 = back_face.s31;
	cornerB3.color2 = right_face.s33;
	cornerB3.color3 = bottom_face.s33;

	cornerB4.color1 = back_face.s33;
	cornerB4.color2 = bottom_face.s31;
	cornerB4.color3 = left_face.s31;

}

void cube::printEdges()
{
	cout << "edge f1: " << edgeF1.color1 << ", " << edgeF1.color2 << endl;
	cout << "edge f2: " << edgeF2.color1 << ", " << edgeF2.color2 << endl;
	cout << "edge f3: " << edgeF3.color1 << ", " << edgeF3.color2 << endl;
	cout << "edge f4: " << edgeF4.color1 << ", " << edgeF4.color2 << endl;

	cout << "edge m1: " << edgeM1.color1 << ", " << edgeM1.color2 << endl;
	cout << "edge m2: " << edgeM2.color1 << ", " << edgeM2.color2 << endl;
	cout << "edge m3: " << edgeM3.color1 << ", " << edgeM3.color2 << endl;
	cout << "edge m4: " << edgeM4.color1 << ", " << edgeM4.color2 << endl;

	cout << "edge ba1: " << edgeBa1.color1 << ", " << edgeBa1.color2 << endl;
	cout << "edge ba2: " << edgeBa2.color1 << ", " << edgeBa2.color2 << endl;
	cout << "edge ba3: " << edgeBa3.color1 << ", " << edgeBa3.color2 << endl;
	cout << "edge ba4: " << edgeBa4.color1 << ", " << edgeBa4.color2 << endl;
}

void cube::printCorners()
{
	cout << "corner f1: " << cornerF1.color1 << ", " << cornerF1.color2 << ", " << cornerF1.color3 << endl; 
	cout << "corner f2: " << cornerF2.color1 << ", " << cornerF2.color2 << ", " << cornerF2.color3 << endl; 
	cout << "corner f3: " << cornerF3.color1 << ", " << cornerF3.color2 << ", " << cornerF3.color3 << endl; 
	cout << "corner f4: " << cornerF4.color1 << ", " << cornerF4.color2 << ", " << cornerF4.color3 << endl; 

	cout << "corner b1: " << cornerB1.color1 << ", " << cornerB1.color2 << ", " << cornerB1.color3 << endl; 
	cout << "corner b2: " << cornerB2.color1 << ", " << cornerB2.color2 << ", " << cornerB2.color3 << endl; 
	cout << "corner b3: " << cornerB3.color1 << ", " << cornerB3.color2 << ", " << cornerB3.color3 << endl; 
	cout << "corner b4: " << cornerB4.color1 << ", " << cornerB4.color2 << ", " << cornerB4.color3 << endl; 
}

string cube::findEdge(string _color1, string _color2)
{
	//searching front edges
	if((edgeF1.color1 == _color1 && edgeF1.color2 == _color2) or (edgeF1.color1 == _color2 && edgeF1.color2 == _color1))
		return "edge F1";
	else if((edgeF2.color1 == _color1 && edgeF2.color2 == _color2) or (edgeF2.color1 == _color2 && edgeF2.color2 == _color1))
		return "edge F2";
	else if((edgeF3.color1 == _color1 && edgeF3.color2 == _color2) or (edgeF3.color1 == _color2 && edgeF3.color2 == _color1))
		return "edge F3";
	else if((edgeF4.color1 == _color1 && edgeF4.color2 == _color2) or (edgeF4.color1 == _color2 && edgeF4.color2 == _color1))
		return "edge F4";

	//searching middle edges
	else if((edgeM1.color1 == _color1 && edgeM1.color2 == _color2) or (edgeM1.color1 == _color2 && edgeM1.color2 == _color1))
		return "edge M1";
	else if((edgeM2.color1 == _color1 && edgeM2.color2 == _color2) or (edgeM2.color1 == _color2 && edgeM2.color2 == _color1))
		return "edge M2";
	else if((edgeM3.color1 == _color1 && edgeM3.color2 == _color2) or (edgeM3.color1 == _color2 && edgeM3.color2 == _color1))
		return "edge M3";
	else if((edgeM4.color1 == _color1 && edgeM4.color2 == _color2) or (edgeM4.color1 == _color2 && edgeM4.color2 == _color1))
		return "edge M4";

	//searching back edges
	else if((edgeBa1.color1 == _color1 && edgeBa1.color2 == _color2) or (edgeBa1.color1 == _color2 && edgeBa1.color2 == _color1))
		return "edge Ba1";
	else if((edgeBa2.color1 == _color1 && edgeBa2.color2 == _color2) or (edgeBa2.color1 == _color2 && edgeBa2.color2 == _color1))
		return "edge Ba2";
	else if((edgeBa3.color1 == _color1 && edgeBa3.color2 == _color2) or (edgeBa3.color1 == _color2 && edgeBa3.color2 == _color1))
		return "edge Ba3";
	else if((edgeBa4.color1 == _color1 && edgeBa4.color2 == _color2) or (edgeBa4.color1 == _color2 && edgeBa4.color2 == _color1))
		return "edge Ba4";

	else //not good at all
		{
			cout << "MAJOR problem :/" << endl;
			return "ouch";
		} 
}

string cube::findCorner(string _color1, string _color2, string _color3)
{
	//search front corners
	if((cornerF1.color1 == _color1 && cornerF1.color2 == _color2 && cornerF1.color3 == _color3)
	or (cornerF1.color1 == _color1 && cornerF1.color2 == _color3 && cornerF1.color3 == _color2)
	or (cornerF1.color1 == _color2 && cornerF1.color2 == _color1 && cornerF1.color3 == _color3)
	or (cornerF1.color1 == _color2 && cornerF1.color2 == _color3 && cornerF1.color3 == _color1)
	or (cornerF1.color1 == _color3 && cornerF1.color2 == _color1 && cornerF1.color3 == _color2)
	or (cornerF1.color1 == _color3 && cornerF1.color2 == _color2 && cornerF1.color3 == _color1))
		return "corner F1";

	else if((cornerF2.color1 == _color1 && cornerF2.color2 == _color2 && cornerF2.color3 == _color3)
	 or (cornerF2.color1 == _color1 && cornerF2.color2 == _color3 && cornerF2.color3 == _color2)
	 or (cornerF2.color1 == _color2 && cornerF2.color2 == _color1 && cornerF2.color3 == _color3)
	 or (cornerF2.color1 == _color2 && cornerF2.color2 == _color3 && cornerF2.color3 == _color1)
	 or (cornerF2.color1 == _color3 && cornerF2.color2 == _color1 && cornerF2.color3 == _color2)
	 or (cornerF2.color1 == _color3 && cornerF2.color2 == _color2 && cornerF2.color3 == _color1))
		return "corner F2";

	else if((cornerF3.color1 == _color1 && cornerF3.color2 == _color2 && cornerF3.color3 == _color3)
	 or (cornerF3.color1 == _color1 && cornerF3.color2 == _color3 && cornerF3.color3 == _color2)
	 or (cornerF3.color1 == _color2 && cornerF3.color2 == _color1 && cornerF3.color3 == _color3)
	 or (cornerF3.color1 == _color2 && cornerF3.color2 == _color3 && cornerF3.color3 == _color1)
	 or (cornerF3.color1 == _color3 && cornerF3.color2 == _color1 && cornerF3.color3 == _color2)
	 or (cornerF3.color1 == _color3 && cornerF3.color2 == _color2 && cornerF3.color3 == _color1))
		return "corner F3";

	else if((cornerF4.color1 == _color1 && cornerF4.color2 == _color2 && cornerF4.color3 == _color3)
	 or (cornerF4.color1 == _color1 && cornerF4.color2 == _color3 && cornerF4.color3 == _color2)
	 or (cornerF4.color1 == _color2 && cornerF4.color2 == _color1 && cornerF4.color3 == _color3)
	 or (cornerF4.color1 == _color2 && cornerF4.color2 == _color3 && cornerF4.color3 == _color1)
	 or (cornerF4.color1 == _color3 && cornerF4.color2 == _color1 && cornerF4.color3 == _color2)
	 or (cornerF4.color1 == _color3 && cornerF4.color2 == _color2 && cornerF4.color3 == _color1))
		return "corner F4";

	else if((cornerB1.color1 == _color1 && cornerB1.color2 == _color2 && cornerB1.color3 == _color3)
	 or (cornerB1.color1 == _color1 && cornerB1.color2 == _color3 && cornerB1.color3 == _color2)
	 or (cornerB1.color1 == _color2 && cornerB1.color2 == _color1 && cornerB1.color3 == _color3)
	 or (cornerB1.color1 == _color2 && cornerB1.color2 == _color3 && cornerB1.color3 == _color1)
	 or (cornerB1.color1 == _color3 && cornerB1.color2 == _color1 && cornerB1.color3 == _color2)
	 or (cornerB1.color1 == _color3 && cornerB1.color2 == _color2 && cornerB1.color3 == _color1))
		return "corner B1";

	else if((cornerB2.color1 == _color1 && cornerB2.color2 == _color2 && cornerB2.color3 == _color3)
	 or (cornerB2.color1 == _color1 && cornerB2.color2 == _color3 && cornerB2.color3 == _color2)
	 or (cornerB2.color1 == _color2 && cornerB2.color2 == _color1 && cornerB2.color3 == _color3)
	 or (cornerB2.color1 == _color2 && cornerB2.color2 == _color3 && cornerB2.color3 == _color1)
	 or (cornerB2.color1 == _color3 && cornerB2.color2 == _color1 && cornerB2.color3 == _color2)
	 or (cornerB2.color1 == _color3 && cornerB2.color2 == _color2 && cornerB2.color3 == _color1))
		return "corner B2";

	else if((cornerB3.color1 == _color1 && cornerB3.color2 == _color2 && cornerB3.color3 == _color3)
	 or (cornerB3.color1 == _color1 && cornerB3.color2 == _color3 && cornerB3.color3 == _color2)
	 or (cornerB3.color1 == _color2 && cornerB3.color2 == _color1 && cornerB3.color3 == _color3)
	 or (cornerB3.color1 == _color2 && cornerB3.color2 == _color3 && cornerB3.color3 == _color1)
	 or (cornerB3.color1 == _color3 && cornerB3.color2 == _color1 && cornerB3.color3 == _color2)
	 or (cornerB3.color1 == _color3 && cornerB3.color2 == _color2 && cornerB3.color3 == _color1))
		return "corner B3";

	else if((cornerB4.color1 == _color1 && cornerB4.color2 == _color2 && cornerB4.color3 == _color3)
	 or (cornerB4.color1 == _color1 && cornerB4.color2 == _color3 && cornerB4.color3 == _color2)
	 or (cornerB4.color1 == _color2 && cornerB4.color2 == _color1 && cornerB4.color3 == _color3)
	 or (cornerB4.color1 == _color2 && cornerB4.color2 == _color3 && cornerB4.color3 == _color1)
	 or (cornerB4.color1 == _color3 && cornerB4.color2 == _color1 && cornerB4.color3 == _color2)
	 or (cornerB4.color1 == _color3 && cornerB4.color2 == _color2 && cornerB4.color3 == _color1))
		return "corner B4";

	else 
		return "error corner not found";
}

void cube::firstEdge(string location)
{
	if(location == "edge F1")
	{//edge is already in the correct location
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is already in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge F2")
	{
		cout << "-the edge is almost in the right spot, perform one FI rotation" << endl;
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge F3")
	{
		cout << "-the edge is almost in the right spot, perform two FI rotations" << endl;
		frontI();
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge F4")
	{
		cout << "-the edge is almost in the right spot, perform one F rotation" << endl;
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge M1")
	{
		cout << "-the we need to put the edge in the right spot. Do one UI" << endl;
		topI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge M2")
	{
		cout << "-the we need to put the edge in the right spot. Do one U" << endl;
		top();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge M3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B F F" << endl;
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge M4")
	{
		cout << "-the we need to put the edge in the right spot. Do: BI F F" << endl;
		bottomI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge Ba1")
	{
		cout << "-the we need to put the edge in the right spot. Do: U U" << endl;
		top();
		top();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge Ba2")
	{
		cout << "-the we need to put the edge in the right spot. Do: R B F F" << endl;
		right();
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge Ba3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B B F F" << endl;
		bottom();
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else if(location == "edge Ba4")
	{
		cout << "-the we need to put the edge in the right spot. Do: L BI F F" << endl;
		left();
		bottomI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and white edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-white edge is in the right location but oriented wrong"<< endl;
			cout << "- orient it with this algorithm: F R U" << endl;
			front();
			right();
			top();
		}
	}

	else cout << "Error 1" << endl;
}

void cube::secondEdge(string location)
{
	cout << "-the blue and orange edge piece is located at: " << location << endl;
	
	if(location == "edge F1")
	{//edge is already in the correct location
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is already in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge F2")
	{
		cout << "-the edge is almost in the right spot, perform one FI rotation" << endl;
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge F3")
	{
		cout << "-the edge is almost in the right spot, perform two FI rotations" << endl;
		frontI();
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge F4")
	{
		cout << "-the edge is almost in the right spot, perform one F rotation" << endl;
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge M1")
	{
		cout << "error 2" << endl;
	}

	else if(location == "edge M2")
	{
		cout << "-the we need to put the edge in the right spot. Do: RI FI" << endl;
		rightI();
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge M3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B F F" << endl;
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge M4")
	{
		cout << "-the we need to put the edge in the right spot. Do: BI F F" << endl;
		bottomI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge Ba1")
	{
		cout << "-the we need to put the edge in the right spot. Do: U RI UI FI " << endl;
		top();
		top();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge Ba2")
	{
		cout << "-the we need to put the edge in the right spot. Do: R B F F" << endl;
		right();
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge Ba3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B B F F" << endl;
		bottom();
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge Ba4")
	{
		cout << "-the we need to put the edge in the right spot. Do: L BI LI F F" << endl;
		left();
		bottomI();
		leftI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and blue edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-blue edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else cout << "Error 1" << endl;
}

void cube::thirdEdge(string location)
{
	cout << "-the yellow and orange edge piece is located at: " << location << endl;
	
	if(location == "edge F1")
	{//edge is already in the correct location
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is already in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge F2")
	{
		cout << "-the edge is almost in the right spot, perform one FI rotation" << endl;
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge F3")
	{
		cout << "-the edge is almost in the right spot, perform two FI rotations" << endl;
		frontI();
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge F4")
	{
		cout << "-the edge is almost in the right spot, perform one F rotation" << endl;
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge M1")
	{
		cout << "error 3" << endl;
	}

	else if(location == "edge M2")
	{
		cout << "-the we need to put the edge in the right spot. Do: RI FI" << endl;
		rightI();
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge M3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B F F" << endl;
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge M4")
	{
		cout << "-the we need to put the edge in the right spot. Do: BI F F" << endl;
		bottomI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge Ba1")
	{
		cout << "error 4" << endl;
	}

	else if(location == "edge Ba2")
	{
		cout << "-the we need to put the edge in the right spot. Do: R B F F" << endl;
		right();
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge Ba3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B B F F" << endl;
		bottom();
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else if(location == "edge Ba4")
	{
		cout << "-the we need to put the edge in the right spot. Do: L BI LI F F" << endl;
		left();
		bottomI();
		leftI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and yellow edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-yellow edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B F F" << endl;
			front();
			rightI();
			bottom();
			front();
			front();
		}
	}

	else cout << "Error 5" << endl;
}

void cube::fourthEdge(string location)
{
	cout << "-the green and orange edge piece is located at: " << location << endl;
	
	if(location == "edge F1")
	{//edge is already in the correct location
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is already in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge F2")
	{
		cout << "-the edge is almost in the right spot, perform one FI rotation" << endl;
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge F3")
	{
		cout << "-the edge is almost in the right spot, perform two FI rotations" << endl;
		frontI();
		frontI();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge F4")
	{
		cout << "-the edge is almost in the right spot, perform one F rotation" << endl;
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge M1")
	{
		cout << "error 6" << endl;
	}

	else if(location == "edge M2")
	{
		cout << "error 7" << endl;
	}

	else if(location == "edge M3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B F F" << endl;
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge M4")
	{
		cout << "-the we need to put the edge in the right spot. Do: BI F F" << endl;
		bottomI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge Ba1")
	{
		cout << "error 8" << endl;
	}

	else if(location == "edge Ba2")
	{
		cout << "-the we need to put the edge in the right spot. Do: R B RI F F" << endl;
		right();
		bottom();
		rightI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge Ba3")
	{
		cout << "-the we need to put the edge in the right spot. Do: B B F F" << endl;
		bottom();
		bottom();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else if(location == "edge Ba4")
	{
		cout << "-the we need to put the edge in the right spot. Do: L BI LI F F" << endl;
		left();
		bottomI();
		leftI();
		front();
		front();
		if(edgeF1.color1 == "orange") 
		{
			cout << "-the orange and green edge is in place!" << endl;
		}
		else
		{
			cout << "-the orange-green edge is in the right location but oriented wrong"<< endl;
			cout << "-orient it with this algorithm: F RI B R F F" << endl;
			front();
			rightI();
			bottom();
			right();
			front();
			front();
		}
	}

	else cout << "Error 9" << endl;
}

void cube::corner(string location)
{
	cout << "-the location of our desired corner is: " << location << endl;
	if(location == "corner F1")
	{
		cout << "-we need to get that corner piece out of its position and place it underneath its final location" << endl;
		cout << "do: FI BI F BI" << endl;
		frontI();
		bottomI();
		front();
		bottomI();

		cout << "now we will put that corner in the correct place" << endl;
		if(cornerF3.color3 == "orange")
		{
			cout << "do: RI B R" << endl;
			rightI();
			bottom();
			right();
		}

		else if(cornerF3.color2 == "orange")
		{
			cout << "do: B RI BI R" << endl;
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF3.color1 == "orange")
		{
			cout << "do: RI B B R BI RI B R" << endl;
			rightI();
			bottom();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 12" << endl;
	}

	else if(location == "corner F2")
	{
		cout << "-our corner piece is already in the right spot!" << endl;
		
		cout << "-now we check if it is oriented correctly" << endl;
		if(cornerF2.color1 == "orange")
		{
			cout << "-our corner is oriented correctly!" << endl;
		}

		else if(cornerF2.color2 == "orange")
		{
			cout << "-we need to reorient the corner" << endl;
			cout << "do: RI BI R B RI BI R" << endl;
			rightI();
			bottomI();
			right();
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF2.color3 == "orange")
		{
			cout << "-we need to reorient the corner" << endl;
			cout << "do: RI B R BI RI B R" << endl;
			rightI();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 13" << endl;
	}

	else if(location == "corner F3")
	{
		cout << "-the corner piece is underneath its final location" << endl;
		cout << "-now we will put that corner in the correct place and orient it" << endl;
		if(cornerF3.color3 == "orange")
		{
			cout << "do: RI B R" << endl;
			rightI();
			bottom();
			right();
		}

		else if(cornerF3.color2 == "orange")
		{
			cout << "do: B RI BI R" << endl;
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF3.color1 == "orange")
		{
			cout << "do: RI B B R BI RI B R" << endl;
			rightI();
			bottom();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 14" << endl;
	}

	else if(location == "corner F4")
	{
		cout << "-lets put the corner piece is underneath its final location" << endl;
		cout << "do: BI" << endl;
		bottomI();
		cout << "-now we will put that corner in the correct place and orient it" << endl;
		if(cornerF3.color3 == "orange")
		{
			cout << "do: RI B R" << endl;
			rightI();
			bottom();
			right();
		}

		else if(cornerF3.color2 == "orange")
		{
			cout << "do: B RI BI R" << endl;
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF3.color1 == "orange")
		{
			cout << "do: RI B B R BI RI B R" << endl;
			rightI();
			bottom();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 14" << endl;
	}

	else if(location == "corner B1")
	{
		cout << "-lets put the corner piece is underneath its final location" << endl;
		cout << "do: L B B LI" << endl;
		left();
		bottom();
		bottom();
		leftI();
		cout << "-now we will put that corner in the correct place and orient it" << endl;
		if(cornerF3.color3 == "orange")
		{
			cout << "do: RI B R" << endl;
			rightI();
			bottom();
			right();
		}

		else if(cornerF3.color2 == "orange")
		{
			cout << "do: B RI BI R" << endl;
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF3.color1 == "orange")
		{
			cout << "do: RI B B R BI RI B R" << endl;
			rightI();
			bottom();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 15" << endl;
	}

	else if(location == "corner B2")
	{
		cout << "-lets put the corner piece is underneath its final location" << endl;
		cout << "do: R B B RI BI" << endl;
		right();
		bottom();
		bottom();
		rightI();
		bottomI();
		cout << "-now we will put that corner in the correct place and orient it" << endl;
		if(cornerF3.color3 == "orange")
		{
			cout << "do: RI B R" << endl;
			rightI();
			bottom();
			right();
		}

		else if(cornerF3.color2 == "orange")
		{
			cout << "do: B RI BI R" << endl;
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF3.color1 == "orange")
		{
			cout << "do: RI B B R BI RI B R" << endl;
			rightI();
			bottom();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 15" << endl;
	}

	else if(location == "corner B3")
	{
		cout << "-lets put the corner piece is underneath its final location" << endl;
		cout << "do: B" << endl;
		bottom();
		cout << "-now we will put that corner in the correct place and orient it" << endl;
		if(cornerF3.color3 == "orange")
		{
			cout << "do: RI B R" << endl;
			rightI();
			bottom();
			right();
		}

		else if(cornerF3.color2 == "orange")
		{
			cout << "do: B RI BI R" << endl;
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF3.color1 == "orange")
		{
			cout << "do: RI B B R BI RI B R" << endl;
			rightI();
			bottom();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 15" << endl;
	}

	else if(location == "corner B4")
	{
		cout << "-lets put the corner piece is underneath its final location" << endl;
		cout << "do: B B" << endl;
		bottom();
		bottom();
		cout << "-now we will put that corner in the correct place and orient it" << endl;
		if(cornerF3.color3 == "orange")
		{
			cout << "do: RI B R" << endl;
			rightI();
			bottom();
			right();
		}

		else if(cornerF3.color2 == "orange")
		{
			cout << "do: B RI BI R" << endl;
			bottom();
			rightI();
			bottomI();
			right();
		}

		else if(cornerF3.color1 == "orange")
		{
			cout << "do: RI B B R BI RI B R" << endl;
			rightI();
			bottom();
			bottom();
			right();
			bottomI();
			rightI();
			bottom();
			right();
		}

		else cout << "error 16" << endl;
	}
	else cout << "error 17" << endl;
}

void cube::insert(string location)
{
	cout<< "-our desired edge piece is located at: " << location << endl;
	if(location == "edge F1")
	{
		if(edgeF1.color2 == front_face.s22)
		{
			cout << "-the edge is ready to be inserted to the right" << endl;
			cout << "do: U R UI RI UI FI U F" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
		}

		else
		{
			cout << "-this edge needs to be inserted from the other face" << endl;
			cout << "do: UI" << endl;
			cout << "-rotate left" << endl;
			topI();
			rotateLeft();
			cout << "-now we can insert to the left" << endl;
			cout << "do: UI L U LI U F UI FI" << endl;
			topI();
			left();
			top();
			leftI();
			top();
			front();
			topI();
			frontI();
			cout << "-rotate right" << endl;
			rotateLeft();
			rotateLeft();
			rotateLeft();
		}
	}

	else if(location == "edge M1")
	{
		cout << "-we need to rotate the edge to the proper location before insertion" << endl;
		cout << "do: UI" << endl;
		topI();
		if(edgeF1.color2 == front_face.s22)
		{
			cout << "-the edge is ready to be inserted to the right" << endl;
			cout << "do: U R UI RI UI FI U F" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
		}

		else
		{
			cout << "-this edge needs to be inserted from the other face" << endl;
			cout << "do: UI" << endl;
			cout << "-rotate left" << endl;
			topI();
			rotateLeft();
			cout << "-now we can insert to the left" << endl;
			cout << "do: UI L U LI U F UI FI" << endl;
			topI();
			left();
			top();
			leftI();
			top();
			front();
			topI();
			frontI();
			cout << "-rotate right" << endl;
			rotateLeft();
			rotateLeft();
			rotateLeft();
		}
	}

	else if(location == "edge Ba1")
	{
		cout << "-we need to rotate the edge to the proper location before insertion" << endl;
		cout << "do: U U" << endl;
		top();
		top();
		if(edgeF1.color2 == front_face.s22)
		{
			cout << "-the edge is ready to be inserted to the right" << endl;
			cout << "do: U R UI RI UI FI U F" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
		}

		else
		{
			cout << "-this edge needs to be inserted from the other face" << endl;
			cout << "do: UI" << endl;
			cout << "-rotate left" << endl;
			topI();
			rotateLeft();
			cout << "-now we can insert to the left" << endl;
			cout << "do: UI L U LI U F UI FI" << endl;
			topI();
			left();
			top();
			leftI();
			top();
			front();
			topI();
			frontI();
			cout << "-rotate right" << endl;
			rotateLeft();
			rotateLeft();
			rotateLeft();
		}
	}

	else if(location == "edge M2")
	{
		cout << "-we need to rotate the edge to the proper location before insertion" << endl;
		cout << "do: U" << endl;
		top();
		if(edgeF1.color2 == front_face.s22)
		{
			cout << "-the edge is ready to be inserted to the right" << endl;
			cout << "do: U R UI RI UI FI U F" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
		}

		else
		{
			cout << "-this edge needs to be inserted from the other face" << endl;
			cout << "do: UI" << endl;
			cout << "-rotate left" << endl;
			topI();
			rotateLeft();
			cout << "-now we can insert to the left" << endl;
			cout << "do: UI L U LI U F UI FI" << endl;
			topI();
			left();
			top();
			leftI();
			top();
			front();
			topI();
			frontI();
			cout << "-rotate right" << endl;
			rotateLeft();
			rotateLeft();
			rotateLeft();
		}
	}

	else if(location == "edge F2")
	{
		cout << "-the edge piece is in the correct position" << endl;
		if(edgeF2.color2 == front_face.s22)
		{
			cout << "-the edge is in the proper spot!" << endl;
		}

		else
		{
			cout << "-is in the right spot but oriented wrong" << endl;
			cout << "do: U R UI RI UI FI U F U U" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
			top();
			top();

			if(edgeF1.color2 == front_face.s22)
			{
				cout << "-the edge is ready to be inserted to the right" << endl;
				cout << "do: U R UI RI UI FI U F" << endl;
				top();
				right();
				topI();
				rightI();
				topI();
				frontI();
				top();
				front();
			}

			else
			{
				cout << "-this edge needs to be inserted from the other face" << endl;
				cout << "do: UI" << endl;
				cout << "-rotate left" << endl;
				topI();
				rotateLeft();
				cout << "-now we can insert to the left" << endl;
				cout << "do: UI L U LI U F UI FI" << endl;
				topI();
				left();
				top();
				leftI();
				top();
				front();
				topI();
				frontI();
				cout << "-rotate right" << endl;
				rotateLeft();
				rotateLeft();
				rotateLeft();
			}
		}	
	}

	else if(location == "edge Ba2")
	{
		cout << "-we need to put the edge in the proper location before insertion" << endl;
		cout << "-rotate left" << endl;
		rotateLeft();
		cout << "do: U R UI RI UI FI U F UI" << endl;
		top();
		right();
		topI();
		rightI();
		topI();
		frontI();
		top();
		front();
		topI();
		cout << "-rotate cube right" << endl;
		rotateLeft();
		rotateLeft();
		rotateLeft();
		
		if(edgeF1.color2 == front_face.s22)
		{
			cout << "-the edge is ready to be inserted to the right" << endl;
			cout << "do: U R UI RI UI FI U F" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
		}

		else
		{
			cout << "-this edge needs to be inserted from the other face" << endl;
			cout << "do: UI" << endl;
			cout << "-rotate left" << endl;
			topI();
			rotateLeft();
			cout << "-now we can insert to the left" << endl;
			cout << "do: UI L U LI U F UI FI" << endl;
			topI();
			left();
			top();
			leftI();
			top();
			front();
			topI();
			frontI();
			cout << "-rotate right" << endl;
			rotateLeft();
			rotateLeft();
			rotateLeft();
		}
	}

	else if(location == "edge Ba4")
	{
		cout << "-we need to put the edge in the proper location before insertion" << endl;
		cout << "-rotate right" << endl;
		rotateLeft();
		rotateLeft();
		rotateLeft();
		cout << "do: UI L U LI U F UI FI U" << endl;
		topI();
		left();
		top();
		leftI();
		top();
		front();
		topI();
		frontI();
		top();
		cout << "-rotate left" << endl;
		
		if(edgeF1.color2 == front_face.s22)
		{
			cout << "-the edge is ready to be inserted to the right" << endl;
			cout << "do: U R UI RI UI FI U F" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
		}

		else
		{
			cout << "-this edge needs to be inserted from the other face" << endl;
			cout << "do: UI" << endl;
			cout << "-rotate left" << endl;
			topI();
			rotateLeft();
			cout << "-now we can insert to the left" << endl;
			cout << "do: UI L U LI U F UI FI" << endl;
			topI();
			left();
			top();
			leftI();
			top();
			front();
			topI();
			frontI();
			cout << "-rotate right" << endl;
			rotateLeft();
			rotateLeft();
			rotateLeft();
		}
	}

	else if(location == "edge F4")
	{
		cout << "-we need to put the edge in the proper location before insertion" << endl;
		cout << "do: UI L U LI U F UI FI U U" << endl;
		topI();
		left();
		top();
		leftI();
		top();
		front();
		topI();
		frontI();
		top();
		top();
		
		if(edgeF1.color2 == front_face.s22)
		{
			cout << "-the edge is ready to be inserted to the right" << endl;
			cout << "do: U R UI RI UI FI U F" << endl;
			top();
			right();
			topI();
			rightI();
			topI();
			frontI();
			top();
			front();
		}

		else
		{
			cout << "-this edge needs to be inserted from the other face" << endl;
			cout << "do: UI" << endl;
			cout << "-rotate left" << endl;
			topI();
			rotateLeft();
			cout << "-now we can insert to the left" << endl;
			cout << "do: UI L U LI U F UI FI" << endl;
			topI();
			left();
			top();
			leftI();
			top();
			front();
			topI();
			frontI();
			cout << "-rotate right" << endl;
			rotateLeft();
			rotateLeft();
			rotateLeft();
		}
	}
}

void cube::topCross()
{
	if((top_face.s12 == "red") && (top_face.s21 == "red") && (top_face.s23 == "red") && (top_face.s32 == "red"))
	{
		cout << "top cross is alreay set up!" << endl;
	}

	else if((top_face.s12 != "red") && (top_face.s21 == "red") && (top_face.s23 == "red") && (top_face.s32 != "red"))
	{//horizontal bar
		cout << "-we have the horizontal bar, let's make it a cross" << endl;
		cout << "do: F R U RI UI FI" << endl;
		front();
		right();
		top();
		rightI();
		topI();
		frontI();
	}

	else if((top_face.s12 == "red") && (top_face.s21 != "red") && (top_face.s23 != "red") && (top_face.s32 == "red"))
	{//horizontal bar
		cout << "-we have the veritcal bar, let's make it a cross" << endl;
		cout << "do: U F R U RI UI FI" << endl;
		top();
		front();
		right();
		top();
		rightI();
		topI();
		frontI();
	}

	else if((top_face.s12 == "red") && (top_face.s21 == "red") && (top_face.s23 != "red") && (top_face.s32 != "red"))
	{
		cout << "-we have a L, let's make it a cross" << endl;
		cout << "do: F R U RI UI R U RI UI FI" << endl;
		front();
		right();
		top();
		rightI();
		topI();
		right();
		top();
		rightI();
		topI();
		frontI();
	}

	else if((top_face.s12 == "red") && (top_face.s21 != "red") && (top_face.s23 == "red") && (top_face.s32 != "red"))
	{
		cout << "-we have a L, let's make it a cross" << endl;
		cout << "do: UI F R U RI UI R U RI UI FI" << endl;
		topI();
		front();
		right();
		top();
		rightI();
		topI();
		right();
		top();
		rightI();
		topI();
		frontI();
	}

	else if((top_face.s12 != "red") && (top_face.s21 != "red") && (top_face.s23 == "red") && (top_face.s32 == "red"))
	{
		cout << "-we have a L, let's make it a cross" << endl;
		cout << "do: U U F R U RI UI R U RI UI FI" << endl;
		top();
		top();
		front();
		right();
		top();
		rightI();
		topI();
		right();
		top();
		rightI();
		topI();
		frontI();
	}

	else if((top_face.s12 != "red") && (top_face.s21 == "red") && (top_face.s23 != "red") && (top_face.s32 == "red"))
	{
		cout << "-we have a L, let's make it a cross" << endl;
		cout << "do: U F R U RI UI R U RI UI FI" << endl;
		top();
		front();
		right();
		top();
		rightI();
		topI();
		right();
		top();
		rightI();
		topI();
		frontI();
	}

	else if((top_face.s12 != "red") && (top_face.s21 != "red") && (top_face.s23 != "red") && (top_face.s32 != "red"))
	{
		cout << "let's make it a cross" << endl;
		cout << "do: F R U RI UI FI U U" << endl;
		front();
		right();
		top();
		rightI();
		topI();
		frontI();
		top();
		top();
		

		cout << "now we have an L we will turn into the cross" << endl;
		cout << "do: F R U RI UI R U RI UI FI" << endl;
		front();
		right();
		top();
		rightI();
		topI();
		right();
		top();
		rightI();
		topI();
		frontI();
	}
}

void cube::alignCross()
{
	while(front_face.s12!=front_face.s22)
	{
		cout << "do:  U" << endl;
		top();
	}
	if(left_face.s12 == left_face.s22)
	{
		cout << "-rotate cube left twice " << endl;
		rotateLeft();
		rotateLeft();
		cout << "do: R U RI U R U U RI U" << endl;
		right();
		top();
		rightI();
		top();
		right();
		top();
		top();
		rightI();
		top();
		cout << "-rotate the cube twice more left" << endl;
		rotateLeft();
		rotateLeft();
		return;
	}

	else if(right_face.s12 == right_face.s22)
	{
		cout << "-rotate cube right once" << endl;
		rotateLeft();
		rotateLeft();
		rotateLeft();
		cout << "do: R U RI U R U U RI U" << endl;
		right();
		top();
		rightI();
		top();
		right();
		top();
		top();
		rightI();
		top();
		cout << "-rotate the cube once left" << endl;
		rotateLeft();
		return;
	}

	else if(back_face.s12 == back_face.s22)
	{
		cout << "do: R U RI U R U U RI" << endl;
		right();
		top();
		rightI();
		top();
		right();
		top();
		top();
		rightI();
		
		cout << "rotate cube right" << endl;
		rotateLeft();
		rotateLeft();
		rotateLeft();
		cout << "do: R U RI U R U U RI U" << endl;
		right();
		top();
		rightI();
		top();
		right();
		top();
		top();
		rightI();
		top();
		cout << "rotate cube left" << endl;
		rotateLeft();
		return;
	}

	else
	{
		cout << "we need to use a different face" << endl;
		cout << "rotate the cube left" << endl;
		rotateLeft();
		alignCross();
		return;
	}
}

void cube::sortCorners()
{
	cout << "-we need to look for a corner which is in the correct location" << endl;
	cout << "-first lets check if the F2 corner is correctly located" << endl;
	if(findCorner(front_face.s22, top_face.s22, left_face.s22) != "corner F1" 
		&& findCorner(front_face.s22, top_face.s22, right_face.s22) != "corner F2" 
		&& findCorner(top_face.s22, left_face.s22, back_face.s22) != "corner B1" 
		&& findCorner(top_face.s22, right_face.s22, back_face.s22) != "corner B2")
	{
		cout << "-none of the corners are in the correct spot" << endl;
		cout << "do: U R UI L U RI UI LI" << endl;
		top();
		right();
		topI();
		left();
		top();
		rightI();
		topI();
		leftI();
		sortCorners();
		return;
	}
	
	else if(findCorner(front_face.s22, top_face.s22, right_face.s22) == "corner F2")
	{
		cout << "-the F2 corner is located correctly" << endl;
		cout << "do: U R UI L U RI UI LI" << endl;
		top();
		right();
		topI();
		left();
		top();
		rightI();
		topI();
		leftI();
		cout << "-lets check if the other corners are correct" << endl;
		if(findCorner(top_face.s22, front_face.s22, left_face.s22) == "corner F1")
		{
			cout << "-all the corners are in the correct place! " << endl;
			return;
		}
		else
		{
			cout << "do: U R UI L U RI UI LI" << endl;
			top();
			right();
			topI();
			left();
			top();
			rightI();
			topI();
			leftI();
			cout << "-now all the corners are in the right place" << endl;
			return;
		}
	}
	else
	{
		cout << "-corner F2 is not in the correct location, lets try a different face" << endl;
		cout << "-rotate the cube left" << endl;
		rotateLeft();
		sortCorners();
		return;
	}
}

void cube::finishCube()
{
	while(top_face.s33 != top_face.s22)
	{
		cout << "do: RI B R BI" << endl;
		rightI();
		bottom();
		right();
		bottomI();
	}
	cout << "do: UI" << endl;
	topI();

	while(top_face.s33 != top_face.s22)
	{
		cout << "do: RI B R BI" << endl;
		rightI();
		bottom();
		right();
		bottomI();
	}
	cout << "do: UI" << endl;
	topI();

	while(top_face.s33 != top_face.s22)
	{
		cout << "do: RI B R BI" << endl;
		rightI();
		bottom();
		right();
		bottomI();
	}
	cout << "do: UI" << endl;
	topI();
	
	while(top_face.s33 != top_face.s22)
	{
		cout << "do: RI B R BI" << endl;
		rightI();
		bottom();
		right();
		bottomI();
	}
	cout << "do: UI" << endl;
	topI();
}

void cube::solveCube()
{
	cout << "welcome to the solving tutorial, please hold the cube so that the white face is front and the orange face is top" << endl;
	cout << "first we will make a cross on the orange face"<< endl;
	cout << "_____---step 1---____" << endl;
	cout << "-lets find the orange and white edge piece." << endl;
	string location;
	location = findEdge("orange", "white");
	cout << "-the white and orange edge piece is located at: " << location << endl; 
	
	//first edge
	firstEdge(location);
	cout << endl << "-now that we have the first edge piece in place rotate the cube to the left" << endl;
	rotateLeft();
	cout << "-now we have to find the orange and blue edge and put it in place" << endl;
	
	//second edge
	location = findEdge("blue", "orange");
	secondEdge(location);
	cout << "-now we have the first two edge pieces placed rotate the cube left again" << endl << endl;
	rotateLeft();
	cout << "-now we have to find the yellow and orange edge piece and put it in place"<< endl;
	
	//third edge
	location = findEdge("yellow", "orange");
	thirdEdge(location);
	cout << "-now we have the first three edge pieced placed rotate the cube left one last time" << endl;
	rotateLeft();

	cout << endl << "-next we need to find the green and orange edge piece" << endl;
	location = findEdge("green", "orange");
	fourthEdge(location);
	cout << "now that we have the cross on the top rotate the cube left once more so that once again the white face is front" << endl;
	rotateLeft();
	cout << "STEP 1 Complete!" << endl;

	cout << endl << "____---step 2 ---____" << endl;
	cout << "purpose: this step will locate and sort the corners of the orange face" << endl;
	cout << "-first we need to find the orange blue and white corner that will be on the bottom left of our cross" << endl;
	location = findCorner("orange", "white", "blue");
	corner(location);
	cout << "-now we will rotate the cube to the left and continue solving the corners" << endl;
	rotateLeft();

	cout << endl << "-now we need to locate the blue yellow and orange corner" << endl;
	location = findCorner("orange", "blue", "yellow");
	corner(location);

	cout << "-rotate cube to the left" << endl << endl;
	rotateLeft();

	cout<< "-now lets find the yellow, orange, and green corner" << endl;
	location = findCorner("yellow", "orange", "green");
	corner(location);

	cout << "-rotate left once more" << endl;
	rotateLeft();
	cout << "-now lets do the orange, white, and green corner" << endl;
	location = findCorner("orange", "white", "green");
	corner(location);

	cout << "step 2 complete!" << endl;
	cout << "-rotate left to make white our front face" <<endl;
	rotateLeft();
	cout << "-rotate the cube up twice and to the left twiceto make orange the bottom face and white front" << endl;
	rotateUp();
	rotateUp();
	rotateLeft();
	rotateLeft();
	
	cout << endl << "____---step 3---____" << endl;
	cout << "purpose: this step will solve the second row of all four side faces" << endl;
	cout << "-first we need to find the white and green edge piece" << endl;
	
	location = findEdge("white", "green");
	insert(location);
	cout << "-now we have the green white edge piece in place, rotate the cube to the left" << endl;
	rotateLeft();
	cout << endl <<  "-now lets do the same with the the green and yellow edge" << endl;

	location = findEdge("green", "yellow");
	insert(location);

	cout << "-now we have the green yellow edge piece in place, rotate the cube to the left" << endl;
	rotateLeft();
	cout << endl <<  "-now lets do the same with the the blue and yellow edge" << endl;
	location = findEdge("blue", "yellow");
	insert(location);

	cout << endl <<  "-now we have the blue and yellow edge piece in place, rotate the cube to the left" << endl;
	rotateLeft();
	cout << "-now lets do the same with the blue and white edge" << endl;
	location = findEdge("blue", "white");
	insert(location);
	cout << "-rotate cube left so white face is front" << endl;
	rotateLeft();
	cout << "step 3 complete!" << endl;

	
	cout << endl << endl << "____---step 4---____" << endl;
	cout << "purpose: this step will create a cross on the top red face" << endl;
	topCross();
	cout << "step 4 complete!" << endl << endl;
	

	cout << "____---step 5---____" << endl;
	cout << "purpose: this step will sort the cross edge pieces" << endl;
	alignCross();
	if(front_face.s22 == "blue")
	{
		cout << "rotate cube once left so that white face is front" << endl;
	}
	else if(front_face.s22 == "yellow")
	{
		cout << "rotate cube twice left so that white face is front" << endl;
	}
	else if(front_face.s22 == "green")
	{
		cout << "rotate cube once right so that white face is front" << endl;
	}
	cout << "step 5 complete!" << endl << endl;
	

	cout << "____---step 6---____" << endl;
	cout << "purpose: this step will put the final four corners in the proper positions" << endl;
	sortCorners();
	listFaces();
	cout << "step 6 complete!" << endl;
	

	cout << "____---step 7---____" << endl;
	cout << "purpose: this step will complete the cube by orienting the four final corners" << endl;
	finishCube();
	cout << "THE CUBE IS FINISHED!" << endl;
}







