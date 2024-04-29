#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	   int number,guess,turns=10,tries=0;
	   
	   number=rand()%100+1;
	   cout<<"HELLO! WELCOME TO NUMBER GUESSING GAME"<<endl;
	   do
	   {
	   	      cout<<"GUESS A NUMBER BETWEEN 1 AND 100:"<<endl;
	   	      cin>>guess;
	   	      tries++;
	   	      turns--;
	   	      if(guess>number)
	   	      {
	   	      	     cout<<"TOO HIGH!!TRY AGAIN"<<endl;
	   	      	     cout<<"HURRY ONLY "<<turns<<" TURNS LEFT!"<<endl;
			  }
			  else if(guess<number)
			  {
			  	     cout<<"TOO LOW!!TRY AGAIN"<<endl;
			  	     cout<<"HURRY ONLY "<<turns<<" TURNS LEFT!"<<endl;
			  }
			  else
			  {
			  	     cout<<"CONGRATULATIONS!YOU GUESSED THE NUMBER IN "<<tries<<" TRIES"<<endl;
			  	     break;
			  }
			  cout<<""<<endl;
	   }while(turns!=0);
	return 0;
}
