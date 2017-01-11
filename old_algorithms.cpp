void solveCorners();
void leftInsert();
void rightInsert();
void rotate(face new_front, face new_top);
void sortCorners();

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