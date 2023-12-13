
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool running = true;
	void calculator() {
		cout << "\n";
   int MaFunc;
   cout << "Pick operation: 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for square root, 6 for cube root, 7 for absolute value: ";
   cin >> MaFunc;

	while (running == true){

		switch (MaFunc) {
        case 1: // addition
        cout <<"You have selected Addition.\n";
        double NumCoun;
        cout <<"How many numbers?\nWhole numbers only and only up to 5 numbers, must have at least 1 number: ";
        cin >> NumCoun;
        cout << "You have selected " <<NumCoun<<" numbers.\n";
            if (NumCoun == 2) {
                double x;
                cout << "Number 1: ";
                cin >> x;
                double y;
                cout << "Number 2: ";
                cin >> y;
                cout << "Sum is: " << x+y;
            } else if (NumCoun == 3) {
                double x1; // x1 is short for the x to use if first condition is not met
                cout <<"Number 1: ";
                cin >> x1;
                double y1;
                cout <<"Number 2: "; // same for y's
                cin >> y1;
                double z1;
                cout << "Number 3: "; //too hard to keep track of every var so i used same pattern
                cin >> z1;
                cout <<"The sum is: " <<x1+y1+z1;
            } else if (NumCoun == 4) {
                double x2;
                cout <<"Number 1: ";
                cin >> x2;
                double y2;
                cout <<"Number 2: ";
                cin >>y2;
                double z2;
                cout <<"Number 3: ";
                cin >> z2;
                double num4; //idk what to call it
                cout << "Number 4: ";
                cin >> num4;
                cout << "The sum is: " << x2+y2+z2+num4;
            } else if (NumCoun == 5){
                double x3;
                cout <<"Number 1: ";
                cin >> x3; // too lazy to make new names :skull:
                double y3;
                cout <<"Number 2: ";
                cin >> y3;
                double z3;
                cout << "Number 3: ";
                cin >> z3;
                double num4a; //idk what to do :(
                cout << "Number 4: ";
                cin >> num4a;
                double num5; //SHUT UP IDK
                cout <<"Number 5: ";
                cin >> num5;
                cout <<"The sum is: "<<x3+y3+z3+num4a+num5;
                
            } else {cout << "Can't do more than 5 numbers";}
				calculator();
            break;
                
        case 2: //subtraction
            cout <<"You have selected subtraction.\nKeep in mind at this moment only five values are supported.\nPlease also note that you must use at least two numbers.\nAlso remember that ORDER DOES MATTER for subtraction.\n\n";
            int sbtNUMCOUNT;
            cout<<"How many numbers? ";
            cin >> sbtNUMCOUNT;
            cout <<"You have selected "<<sbtNUMCOUNT<<" Numbers.\n";
            if (sbtNUMCOUNT==2){
                double SUBX;
               cout <<"First number: ";
                cin >> SUBX;
                double SUBY;
                cout <<"\nSecond Number: ";
                cin >> SUBY;
                //elliott does not do comments unlike me
                double diff1 = SUBX-SUBY;
                cout <<"The difference is: " <<diff1;
                
            } else if (sbtNUMCOUNT==3) {
                double subx2;
                cout << "First number: ";
                cin >> subx2;
                double suby2;
                cout << "Second number: ";
                cin >> suby2;
                double subz2;
                cout << "Third number: ";
                cin >> subz2;
                double diff2= subx2 - suby2- subz2;
                cout << "The difference is: "<<diff2<<"\n";
            } else if (sbtNUMCOUNT==4) {
                double subx3; //more consistent naming :)
                cout <<"First number: ";
                cin >> subx3;
                double suby3;
                cout <<"Second number: ";
                cin >> suby3;
                double subz3;
                cout << "Third number: ";
                cin >> subz3;
                double subext3; // trying to keep naming consistent
                double diff3 = subx3-suby3-subz3-subext3;
                cout <<"The difference is: " << diff3 << "\n";
                
            } else if (sbtNUMCOUNT==5) {
				double subx4;
				cout << "First number: ";
				cin >> subx4;
				double suby4;
				cout << "Second number : ";
				cin >> suby4;
				double subz4;
				cout << "Third number: ";
				cin >> subz4;
				double subextraA4;
				cout << "Fourth number: ";
				cin >> subextraA4;
				double subextraB4;
				cout << "Fifth number: ";
				cin >> subextraB4;
				double diff4 = subx4-suby4-subz4-subextraA4-subextraB4;
				cout << "The difference is: " << diff4 << " \n";
				
			} else {
				cout << "Can't do more than 5 numbers";
			}
				calculator();

       break;
			
		case 3: //multiplication
			cout << "You have selected multiplication.\n";
				int exponent_choice;
				cout << "Exponential multiplication, or normal multiplication? (0 for exponential and 1 for normal)";
				cin >> exponent_choice;
			    if (exponent_choice == 1){
					cout << "You have selected normal multiplication.\n";
        double mNum;
			cout << "How many numbers? ";
			cin >> mNum;
			cout << "You have selected " << mNum << " numbers.\n";
			
			if (mNum == 2) {
				double a; /* first multiplication number */
				cout << "First number: ";
				cin >> a;
				double b; // second multiplication number ik they are bad names
				cout << "Second number: ";
				cin >> b;
				double multPROD = a*b;
				cout << "The product is " << multPROD << ". \n";
			} else if (mNum == 3) {
				double MingDe;
				cout << "First number: ";
				cin >> MingDe;
				double MingDeAGAIN;
				cout << "Second number: ";
				cin >> MingDeAGAIN;
				double MINGDEISGAMING;
				cout <<"Third number: ";
				cin >> MINGDEISGAMING;
				double multPROD2 = MingDe*MingDeAGAIN*MINGDEISGAMING;
				cout << "The product is: " << multPROD2;
			} else if (mNum == 4) {
				double no;
				cout << "First number: ";
				cin >> no;
				double yes;
				cout << "Second number:";
				cin >> yes;
				double maybeSo;
				cout << "Third number: ";
				cin >> maybeSo;
				double defNot;
				cout << "Fourth number: ";
				cin >> defNot;
				double multPROD3 = no*yes*maybeSo*defNot;
				cout<<"The product is "<<multPROD3<<"\n";
				
			} else if (mNum == 5) {
				double deev;
				cout << "First number: ";
				cin >> deev;
				double rah;
				cout << "Second number: ";
				cin >> rah;
				double reehee;
				cout << "Third number: ";
				cin >> reehee;
				double raha;
				cout << "Fourth number: ";
				cin >> raha;
				double reha;
				cout << "Fifth number: ";
				cin >> reha;
				double multPROD4 = deev*rah*reehee*raha*reha;
				cout << "The product is: " << multPROD4 << "\n";
			} else {
				cout <<"Can't do more than 5 numbers";
			}
			    } else if (exponent_choice == 0) { 
			        cout << "You have selected exponential multiplication.\nOnly up to 5 numbers are supported at this time.\nNote order does matter when in regard to exponents.";
					double exp_base;
					cout << "\nWhat is your base?\nInput here: ";
					cin >> exp_base;
					double exp_power;
					cout << "\nWhat is your exponent?\nInput here: ";
					cin >> exp_power;
					cout << "The result is: " << pow(exp_base,exp_power);
				}
			    
			calculator();
			break;
		case 4: //division, but with good var naming
			cout << "You have selected division.\n";
			double dNum;
			cout << "How many numbers: ";
			cin >> dNum;
			if (dNum==2) {
				double div2numA;
				cout << "First number: ";
				cin >> div2numA;
				double div2numB;
				cout << "Second number: ";
				cin >> div2numB;
				double quot1 = div2numA/div2numB;
				cout << quot1;
			} else if (dNum==3) {
				double div3numA;
				cout << "First number: ";
				cin >> div3numA;
				double div3numB;
				cout << "Second number: ";
				cin >> div3numB;
				double div3numC;
				cout << "Third number: ";
				cin >> div3numC;
				double quot2 = div3numA / div3numB / div3numB;
				cout << quot2;
			} else if (dNum==4) {
				double div4numA;
				cout << "First number: ";
				cin >> div4numA;
				double div4numB;
				cout << "Second number: ";
				cin >> div4numB;
				double div4numC;
				cout << "Third number: ";
				cin >> div4numC;
				double div4numD;
				cout << "Fourth number: ";
				cin >> div4numD;
				double quot3 = div4numA / div4numB / div4numC / div4numD;
				cout << "Quotient is: " << quot3;
			} else if (dNum==5) {
				double div5numA;
				cout << "First number: ";
				cin >> div5numA;
				double div5numB;
				cout << "Second number: ";
				cin >> div5numB;
				double div5numC;
				cout << "Third number: ";
				cin >> div5numC;
				double div5numD;
				cout << "Fourth number: ";
				cin >> div5numD;
				double div5numE;
				cout << "Fifth number: ";
				cin >> div5numE;
				
				double quot5 = div5numA / div5numB / div5numC / div5numD / div5numE;
				cout << "Quotient is: " << quot5;
			} else {
				cout << "Can't do more than 5 numbers";
			}
				calculator();

			break;	
		case 5: //sqrt
			double SQRTradicand;
			cout << "Number to take the square root of: "; 
			cin >> SQRTradicand;
			cout << "Square root is: " << sqrt(SQRTradicand);         
				calculator();

			break;
		case 6: //cRoot
			double CRTradicand;
			cout << "Number to take the cube root of: ";
			cin >> CRTradicand;
			cout << "Cube root is: " << cbrt(CRTradicand) <<"\n";   
								calculator();

			break;
		case 7: //abs value
			double operand;
			cout << "number to find absolute value of: "; cin >> operand;
			cout << "Absolute value is: " << abs(operand) << "\n";   
								calculator();


			break;
		
	} //switch
		

} // while
}
int main() {
	cout << "Welcome to the C++ Calculator! Here from GitHub? Check out the README!\nPress enter to continue...";
	cin.ignore();
	calculator();
	
	return 0;
}




