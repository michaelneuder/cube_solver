/*void displayMenu2()
{
	cout << "1. front" << endl;
	cout << "2. front inverted" << endl;

	cout << "3. top" << endl;
	cout << "4. top inverted" << endl;

	cout << "5. left" << endl;
	cout << "6. left inverted" << endl;

	cout << "7. right" << endl;
	cout << "8. right inverted" << endl;

	cout << "9. bottom" << endl;
	cout << "10. bottom inverted" << endl;

	cout << "11. print cube" << endl;
	cout << "12. quit" << endl;
}*/

/*void displayMenu3()
{
	cout << "1. corners" << endl;
	cout << "2. left insert" << endl;
	cout << "3. right insert" << endl;
	cout << "4. top cross" << endl;
	cout << "5. sort cross" << endl;
	cout << "6. sort corners" << endl;
	cout << "7. solve corners" << endl;
	cout << "8. print faces" << endl;
	cout << "9. quit to previous menu" << endl;
}
*/
/*cube handleUserInput2(cube c1)
{
	bool quit1 = false;
	string input;
	int inputValue;

	while(!quit1)
	{
		displayMenu2();
		getline(cin, input);

		inputValue = stoi(input);

		switch (inputValue)
		{
			case 1:
			{
				c1.front();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 2:
			{
				c1.frontI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 3:
			{
				c1.top();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 4:
			{
				c1.topI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 5:
			{
				c1.left();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 6:
			{
				c1.leftI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 7:
			{
				c1.right();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 8:
			{
				c1.rightI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 9:
			{
				c1.bottom();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 10:
			{
				c1.bottomI();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 11:
			{
				c1.listFaces();
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 12:
			{
				cout << "bye" << endl; 
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				quit1 = true;
				break;
			}

			default:
			{
				cout << "plz enter a valid input" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}
		}
	}
	return c1;
}
*/

/*cube handleUserInput3(cube c1)
{
	bool quit2 = false;
	string input;
	int inputValue;

	while(!quit2)
	{
		displayMenu3();
		getline(cin, input);

		inputValue = stoi(input);

		switch (inputValue)
		{
			case 1:
			{
				c1.solveCorners();
				cout << "corners solved!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 2: 
			{
				c1.leftInsert();
				cout << "inserted to the left!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 3: 
			{
				c1.rightInsert();
				cout << "inserted to the right!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 4:
			{
				c1.topCross();
				cout << "top cross created!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 5: 
			{
				c1.alignCross();
				cout << "cross aligned" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 6:
			{
				c1.sortCorners();
				cout << "corners in the proper spot!" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 7:
			{
				c1.solveCorners();
				cout << "corners solved" << endl;
				cout << "--------------" << endl;
				cout << "--------------" << endl;
				break;
			}

			case 8:
			{
				c1.listFaces();
				break;
			}

			case 9:
			{
				quit2 = true;
				cout << "thx for playing come again next time" << endl;
				break;
			}
		}
	}
	return c1;
}
*/
