#ifndef CUBE_HPP
#define CUBE_HPP

struct face
{
	std::string s11, s12, s13, s21, s22, s23, s31, s32, s33;
	//a string for each of the nine positiions on the face, the string will hold the color
};

struct edge
{
	std::string color1, color2;
};

struct corner
{
	std::string color1, color2, color3;
};

class cube
{
	public:
		face front_face;//create our six faces with an each having nine colors
		face back_face;
		face top_face;
		face bottom_face;
		face left_face;
		face right_face;
		edge edgeF1, edgeF2, edgeF3, edgeF4;//these will hold data on the edges
		edge edgeM1, edgeM2, edgeM3, edgeM4;
		edge edgeBa1, edgeBa2, edgeBa3, edgeBa4;
		corner cornerF1, cornerF2, cornerF3, cornerF4;//corner data
		corner cornerB1, cornerB2, cornerB3, cornerB4;
		cube();
		void listFaces();
		void setCube();
		void defaultCube();
		//edge-corner stuff
		void updateEdges();
		void updateCorners();
		void printEdges();
		void printCorners();
		std::string findEdge(std::string _color1, std::string _color2);
		std::string findCorner(std::string _color1, std::string _color2, std::string _color3);
		void firstEdge(std::string location);
		void secondEdge(std::string location);
		void thirdEdge(std::string location);
		void fourthEdge(std::string location);
		void corner(std::string location);
		void insert(std::string location);
		void topCross();
		void alignCross();
		void sortCorners();
		void finishCube();
	

		
		void solveCube();
		
		//algorithms
		void solveCorners();
		void leftInsert();
		void rightInsert();
		void rotate(face new_front, face new_top);
		void rotateUp();
		void rotateLeft();
		
		//basic rotations
		void front();
		void frontI();
		void back();
		void backI();
		void right();
		void rightI();
		void left();
		void leftI();
		void top();
		void topI();
		void bottom();
		void bottomI();
};

#endif // CUBE_HPP

