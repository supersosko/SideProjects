/*
	FILENAME: RalphMath.cpp
	PROGRAMMER: CHRIS SOSKO
	DATE: FEB 27, 2014
	DESCRIPTION: The purpose of this program is to compute a variety of mathematical objects
				 based on input of a positive real number for Ralph so he may impress Lisa
 */

#include <iostream>
using namespace std;

int main()
{

	short input;
	long factorial;
	float power;
	float real_num;
	float temp;				// temp var used for calculations
	bool force=true;		// forces user to enter 1 or 5 at program start

	// greetings
	cout << "Hey Ralph, welcome to your math program!" << endl;

	do
	{
		do
		{
			//present menu
			cout << "				MENU" << endl;
			cout << "1. Enter a positive real number, x" << endl;
			cout << "2. Factorial of x" << endl;
			cout << "3. Fourth root of x" << endl;
			cout << "4. X-ponential of x(exp(x))" << endl;
			cout << "5. Quit" << endl;

			cin >> input;

			// force 1  or 5 to be input
			while(force)
			{
				if(input!=1 || input!=5)
				{
					cout << "Ralph, you can't do that yet." << endl;
					cin >> input;
				}
				else
					force=false;
			}

			if(input<1 || input>5)
			{
				cout << "Ralph, enter a proper number." << endl;
			}

		}while(input<1 || input>5);

		switch(input)
		{
			case 1:		//Enter number
				cout << "Enter x:" << endl;
				do
				{
					cin >> real_num;
					if(real_num<=0)
						cout << "Stop chewing on your calculator Ralph." << endl;
				}while(real_num<=0);

				break;

			case 2:		//Calculate factorial
				temp=1;
				for(int k=1; k<=real_num; k++)
					temp*=k;
				cout << "The Factorial of " << real_num << " is " << temp << endl;
				break;

			case 3:		//Calculate fourth root
				temp=20;
				for(int k=0; k<6; k++)
					temp=(3*temp+ real_num/(temp*temp*temp))/4;

				cout << "The fourth root of " << real_num << " is " << temp << endl;
				break;

			case 4: 	//calculate e to the x
				temp=1;
				power=1;
				factorial=1;
				for(int k=1; k<=6; k++)
				{
					power*=real_num;
					factorial*=k;
					temp+=power/factorial;
				}
				cout << "The X-ponential of " << real_num <<  "is " << temp << endl;
				break;

			case 5:
				cout << "See ya later Ralphie!"
				input=0;
				break;
		}

	}while(input);  // This is kinda shenanigans, input has been ensured to be not 0 by the
					// the while loop from 27 to 56

	return 0;
}