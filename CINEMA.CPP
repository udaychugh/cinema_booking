#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
class user
{
private:
	char username[20];
	char password[20];
	char newuser[20];
	char newpass[20];
	char fullname[30];
	char moviename[20];
	int Aoption;
public:
	void signup()
	{
		clrscr();
		cout<<"\n ############ Welcome to UC Cinema SignUP Page ############";
		cout<<"\n\nEnter your Full Name : ";
		gets(fullname);
		cout<<"\nEnter your new Username : ";
		gets(newuser);
		cout<<"\nEnter your new Password :";
		gets(newpass);
		afterSignup();
	}
	void signin()
	{
		clrscr();
		cout<<"\n ############ Welcome to UC Cinema SignIn Page ############";
		cout<<"\n\nEnter Username : ";
		gets(username);
		cout<<"\nEnter Password : ";
		gets(password);
		authentication();
	}
	void authentication()
	{

			showMenu();



	}// authentication method funtion here

	void afterSignup(); //done function
	void showSeats();
	void showMenu(); //done function
	void bookTickets();
	void cancelTicket();
}; //class ends here

void user :: afterSignup()
{
	clrscr();
	cout<<"\n Signup Successfully done.";
	cout<<"\n Select option : ";
	cout<<"\n1. Signin";
	cout<<"\n2. Exit";
	cin>>Aoption;
	if (Aoption == 1)
	{
		signin();
	}
	else{
		exit;
	}
}

void user :: showMenu()
{
	clrscr();
	int menuInput;
	cout<<"\n\n############ Welcome" <<fullname<< "to UC Cinema Menu Page ############";
	cout<<"\n\n1. Book New Ticket";
	cout<<"\n2. Cancel Existing Ticket";
	cout<<"\n3. Exit";
	cin>>menuInput;
	if (menuInput == 1)
	{
		bookTickets();
	}
	else if(menuInput == 2)
	{
	       //	cancelTicket();
	}
	else if(menuInput == 3)
	{
		cout<<"\nExiting Program";
		sleep(5);
		exit;
	}
}

void user :: bookTickets()
{
	clrscr();
	int bookInput;
	cout<<"\n\n############ Welcome" <<fullname<< "to UC Cinema Ticket Booking Page ############";
	cout<<"\n\nSelect Movie to Book Ticket";
	cout<<"\n1. Fifty Shades of Grey";
	cout<<"\n2. Great Grand Masti";
	cout<<"\n3. Hate Story 4";
	cout<<"\n4. 365 Days";
	cin>>bookInput;
	if (bookInput == 1)
	{
		strcpy(moviename, "Fifty Shades of Grey");
		showSeats();
	}
	else if (bookInput == 2)
	{
		strcpy(moviename, "Great Grand Masti");
		showSeats();
	}
	else if (bookInput == 3)
	{
		strcpy(moviename, "Hate Story 4");
		showSeats();
	}
	else if (bookInput == 4)
	{
		strcpy(moviename, "365 Days");
		showSeats();
	}
	else
	{
		cout<<"\nWrong input";
		sleep(5);
		exit;
	}

}

void user :: cancelTicket()
{
	clrscr();
	int bookInput;
	cout<<"\n\n############ Welcome" <<fullname<< "to UC Cinema Ticket Cancelling Page ############";
	cout<<"\n\nSelect Movie to Book Ticket";
	cout<<"\n1. Fifty Shades of Grey";
	cout<<"\n2. Great Grand Masti";
	cout<<"\n3. Hate Story 4";
	cout<<"\n4. 365 Days";
	cin>>bookInput;
	if (bookInput == 1)
	{
		strcpy(moviename, "Fifty Shades of Grey");
		showSeats();
	}
	else if (bookInput == 2)
	{
		strcpy(moviename, "Great Grand Masti");
		showSeats();
	}
	else if (bookInput == 3)
	{
		strcpy(moviename, "Hate Story 4");
		showSeats();
	}
	else if (bookInput == 4)
	{
		strcpy(moviename, "365 Days");
		showSeats();
	}
	else
	{
		cout<<"\nWrong input";
		sleep(5);
		exit;
	}
}

void user :: showSeats()
{
	int seat;
	int status = 0;
	cout<<"\n\n Tickets Available for"<<moviename<<endl;
	for (int i = 0; i < 25; i++)
	{
		cout<<"Seat No."<<i+1<<" - "<<status<<" ";
		if (i%5 == 0)
		{
			cout<<endl;
		}
	}
	cout<<"\n Select Seat Number : ";
	cin>>seat;
	cout<<"\n Seat booked Successfully";
	sleep(5);
	showMenu();

}

int main()
{
	clrscr();
	int sign;
	user u;
	cout<<"\n ############ Welcome to UC Cinema Home Page ############";
	cout<<"\n\n1. Signup new user";
	cout<<"\n2. Login existing user";
	cout<<"\n3. Exit"<<endl;
	cin>>sign;
	if(sign == 1)
	{
		u.signup();
	}
	else if(sign == 2)
	{
		u.signin();
	}
	else if(sign == 3)
	{
		cout<<"\nExiting Program";
		sleep(5);
		exit;
	}
	else
	{
		cout<<"\nWrong Input Please Try agian.....";
		sleep(5);
		exit;
	}

	getch();
	return 0;
}