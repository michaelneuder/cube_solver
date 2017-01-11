//cube driver program
#include <iostream>
#include <string>
#include "cube.hpp"

using namespace std;

void displayMenu()
{
	cout << "welcome to the ~`K U B E`~ lifestyle, i hope you enjoy :)" << endl;
	cout << "____---menu---____" << endl;
	cout << "1. set cube" << endl;
	cout << "2. print cube" << endl;
	cout << "3. solve cube" << endl << endl;

	cout << "____---rotations---____" << endl;
	cout << "4. front" << endl;
	cout << "5. front inverted" << endl;
	cout << "6. top" << endl;
	cout << "7. top inverted" << endl;
	cout << "8. left" << endl;
	cout << "9. left inverted" << endl;
	cout << "10. right" << endl;
	cout << "11. right inverted" << endl;
	cout << "12. bottom" << endl;
	cout << "13. bottom inverted" << endl;
	cout << "14. rotate cube up" << endl;
	cout << "15. rotate cube down" << endl;
	cout << "16. rotate cube left" << endl;
	cout << "17. rotate cube right" << endl;
	cout << "18. quit :(" << endl << endl;

	/*cout << "____---algorithms---____" << endl;
	cout << "18. corners" << endl;
	cout << "19. left insert" << endl;
	cout << "20. right insert" << endl;
	cout << "21. top cross" << endl;
	cout << "22. sort cross" << endl;
	cout << "23. sort corners" << endl;
	cout << "24. solve corners" << endl;
	cout << "25. quit" << endl << endl;

	cout << "testing" << endl;
	cout << "26. print edges" << endl;
	cout << "27. print corners" << endl;
	cout << "28. find corner" << endl;*/
}

void handleUserInput()
{
	cube c1;
	bool quit = false;
	string input;
	int inputValue;

	while(!quit)
	{
		displayMenu();
		getline(cin, input);

		inputValue = stoi(input);

		switch (inputValue)
		{
			case 1:
			{
				c1.setCube();
				break;
			}

			case 2:
			{
				c1.listFaces();
				break;
			}

			case 3:
			{
				cout << "this is the money part" << endl;
				c1.solveCube();
				break;
			}

			case 4:
			{
				c1.front();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 5:
			{
				c1.frontI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 6:
			{
				c1.top();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 7:
			{
				c1.topI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 8:
			{
				c1.left();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 9:
			{
				c1.leftI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 10:
			{
				c1.right();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 11:
			{
				c1.rightI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 12:
			{
				c1.bottom();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 13:
			{
				c1.bottomI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 14:
			{
				c1.rotateUp();
				cout << "cube has been rotated up" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 15:
			{
				c1.rotateUp();
				c1.rotateUp();
				c1.rotateUp();
				cout << "cube has been rotated down" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;

			}

			case 16:
			{
				c1.rotateLeft();
				cout << "cube has been rotated left" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 17:
			{
				c1.rotateLeft();
				c1.rotateLeft();
				c1.rotateLeft();
				cout << "cube has been rotated right" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 18:
			{
				cout << "thanks" << endl;
				quit = true;
				break;
			}

			/*case 18:
			{
				c1.solveCorners();
				cout << "corners algorithm performed!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 19: 
			{
				c1.leftInsert();
				cout << "inserted to the left!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 20: 
			{
				c1.rightInsert();
				cout << "inserted to the right!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 21:
			{
				c1.topCross();
				cout << "top cross algorithm performed" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 22: 
			{
				c1.alignCross();
				cout << "cross align algorithm performed" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 23:
			{
				c1.sortCorners();
				cout << "corners sorting algorithm performed" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 24:
			{
				c1.solveCorners();
				cout << "corners algorithm performed" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 25:
			{
				cout << "bye" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				quit = true;
				break;
			}

			case 26:
			{
				c1.printEdges();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 27:
			{
				c1.printCorners();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 28:
			{
				string color1, color2, color3;
				cout << "enter the colors" << endl;
				getline(cin, color1);
				getline(cin, color2);
				getline(cin, color3);
				string location;
				location = c1.findCorner(color1, color2, color3);
				cout << "location is: " << location << endl;
				break;
			}*/

			default:
			{
				cout << "plz enter a valid input" << endl;
				break;
			}
		}
	}
}



int main()
{
	handleUserInput();
	return 0;
}


