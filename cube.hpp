#ifndef CUBE_HPP
#define CUBE_HPP

struct face
{
	std::string s11, s12, s13, s21, s22, s23, s31, s32, s33;
	//a string for each of the nine positiions on the face, the string will hold the color
};

struct edge//edge pieces are between corners that have two colors
{//each cube has twelve edges
	std::string color1, color2;
};

struct corner//the intersection of three faces
{//8 corners per cube
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
		
		cube();//constructor for cude
		void listFaces();//prints current state of face
		void setCube();//allows custom input of data for cube position
		void defaultCube();//default = solved
		
		//edge and corner methods
		void updateEdges();//called to reassign edge properties after rotations
		void updateCorners();//called to reassign corner properties after rotations
		void printEdges();
		void printCorners();
		std::string findEdge(std::string _color1, std::string _color2);//finds edge position
		std::string findCorner(std::string _color1, std::string _color2, std::string _color3);//finds corner position
		
		//cube solving functions
		void firstEdge(std::string location);//these are solving the first four edges
		void secondEdge(std::string location);//could be written in one function
		void thirdEdge(std::string location);//chose to write four separate because it is less unecessary rotations for user
		void fourthEdge(std::string location);
		void corner(std::string location);//solves first four corners
		void insert(std::string location);//insert edge to left or right
		void topCross();//creates a cross on top face
		void alignCross();//orders the cross edge pieces
		void sortCorners();//sorts the final four corners
		void finishCube();//completes the cube by solving four final corners
	
		void solveCube();//essentially the main that calls all the cube solving functions based on current cube state
		
		//algorithms
		void rotateUp();//any rotation needed can be described as a combination of these two
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

