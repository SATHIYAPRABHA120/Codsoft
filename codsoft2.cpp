#include<iostream>
#include<iomanip>
using namespace std;
class CALCULATOR
{
	  public: 	   
		   double num1,num2;	
	       void set_data()
	       {
	       	     cout<<"ENTER 1st NUMBER :";
	       	     cin>>num1;
	       	     cout<<"ENTER 2nd NUMBER :";
	       	     cin>>num2;
		   }
		   double ADD();
		   double DIFFERENCE();
		   double PRODUCT();
		   double DIVISION();
};
double CALCULATOR::ADD()
{
	   double result;
	   result=num1+num2;
	   return result;
}
double CALCULATOR::DIFFERENCE()
{
	   double result;
	   result=num1-num2;
	   return result;
}
double CALCULATOR::PRODUCT()
{
       double result;
	   result=num1*num2;
	   return result;
}
double CALCULATOR::DIVISION()
{
	   double result;
	   result=num1/num2;
	   return result;
}
int main()
{
	   int choice,proceed,digit;
	   CALCULATOR obj;
	   do
	   {
	   	      obj.set_data();
	   	      cout<<"HOW MANYS DIGITS DO YOU WANT AFTER DECIMAL?";
	   	      cin>>digit;
	   	      cout<<"ENTER YOUR CHOICE:"<<endl;
	   	      cout<<"1.ADD\t2.DIFFERENCE\t3.MULTIPLY\t4.DIVIDE\t5.EXIT"<<endl;
	   	      cin>>choice;
	   	      switch(choice)
	   	      {
	   	             case 1:
	   	             	   cout<<fixed<<setprecision(digit)<<obj.ADD();
	   	             	   break;
					 case 2:
					 	   cout<<fixed<<setprecision(digit)<<obj.DIFFERENCE();
	   	             	   break;
					 case 3:
					 	   cout<<fixed<<setprecision(digit)<<obj.PRODUCT();
	   	             	   break;
					 case 4:
					 	   cout<<fixed<<setprecision(digit)<<obj.DIVISION();
	   	             	   break;
					 case 5:
					 	   exit(0);
					 	   break;
					 default:
					 		cout<<"INVALID CHOICE!";
			  }
			  cout<<endl<<"PRESS 0 TO PROCEED AGAIN :";
			  cin>>proceed;
			  cout<<"*******************************"<<endl;
		}while(proceed==0);
    return 0;
}
