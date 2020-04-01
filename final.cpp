#include"iostream"
#include"stdlib.h"
#include"iomanip"
#include"cstring"
using namespace std;
int monexp[13];
int sal,sal_mo;


class salary
{

	int in,inperm;


		public:

			int total;
			
void line()	//for line
	{
	cout<<endl<<setw(95)<<"-----------------------------------------------------------------------"<<endl;
	}
	void leaveline()
	{
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	}
void income()
{
	
	inperm=sal_mo;
}
void expenses()//user input monthly expenses
{

int i,k,e[20];
char n;
for(i=1;i<=13;i++)
{
e[i]=0;
}
expenses:
system("cls");
cout<<setw(80)<<endl<<endl<<endl<<"Your Monthly Income Is "<<inperm;
line();
cout<<endl<<setw(80)<<"Expenses Per Month";
line();
cout<<endl<<setw(80)<<"Enter 1 to add Medical Expense";
cout<<endl<<setw(101)<<"Enter 2 to add rent of house /If not then ignore it";
cout<<endl<<setw(77)<<"Enter 3 to add Food Expense";
cout<<endl<<setw(77)<<"Enter 4 to add Bill Expense";
cout<<endl<<setw(91)<<"Enter 5 to add Sports Expense Or Gim Fees";
cout<<endl<<setw(80)<<"Enter 6 to add Clothes Expense";
cout<<endl<<setw(100)<<"Enter 7 to add Vehicle Mentainance Or Fuel Expense";
cout<<endl<<setw(83)<<"Enter 8 to add Eating Out Expense";
cout<<endl<<setw(81)<<"Enter 9 to add Toiletry Expense";
cout<<endl<<setw(83)<<"Enter 10 to add Transport Expense";
cout<<endl<<setw(88)<<"Enter 11 to add Entertainment Expenses";
cout<<endl<<setw(85)<<"Enter 12 to add Additional Expenses"<<endl;
line();
cout<<endl<<setw(80)<<"Enter 110 to show the Expenses you add"<<endl;
cout<<endl<<setw(80)<<"Enter Your Choice:";
cin>>k;
switch(k)	
{
	case 1:
	{
		system("cls");
		leaveline();
		cout<<setw(80)<<"Enter amount which you expenses on Medical Treatments:";//18
		cin>>e[1];		
		goto expenses;
	}
	break;
	case 2:
	{
		system("cls");
			leaveline();
		cout<<setw(85)<<"Enter amount which you expenses on Rent of House:";
		cin>>e[2];		
		goto expenses;
	}
	break;
	case 3:
	{
		system("cls");
			leaveline();
		cout<<setw(94)<<"Enter amount which you expenses on Food:";
		cin>>e[3];		
		goto expenses;
	}
	break;
	case 4:
	{
		system("cls");
			leaveline();
		cout<<setw(93)<<"Enter amount which you expenses on Bills:";
		cin>>e[4];		
		goto expenses;
	}
	break;
	case 5:
	{
		system("cls");
			leaveline();
		cout<<setw(85)<<"Enter amount which you expenses on Sports or Gim:";
		cin>>e[5];		
		goto expenses;
	}
	break;
	case 6:
	{
		system("cls");
			leaveline();
		cout<<setw(91)<<"Enter amount which you expenses on Clothes:";
		cin>>e[6];		
		goto expenses;
	}
	break;
	case 7:
	{
		system("cls");
			leaveline();
		cout<<setw(61)<<"Enter amount which you expenses on Vehicle maintainence or fuel expenses:";
		cin>>e[7];		
		goto expenses;
	}
	break;
	case 8:
	{
		system("cls");
			leaveline();
		cout<<setw(88)<<"Enter amount which you expenses on Eating Out:";
		cin>>e[8];		
		goto expenses;
	}
	break;
	case 9:
	{
		system("cls");
			leaveline();
		cout<<setw(89)<<"Enter amount which you expenses on Toilentry:";
		cin>>e[9];		
		goto expenses;
	}
	break;
	case 10:
	{
		system("cls");
			leaveline();
		cout<<setw(80)<<"Enter amount which you expenses on Transport expenses:";
		cin>>e[10];		
		goto expenses;
	}
	break;
	case 11:
	{
		system("cls");
			leaveline();
		cout<<setw(85)<<"Enter amount which you expenses on Entertainment:";
		cin>>e[11];		
		goto expenses;
	}
	break;
	case 12:
	{
		system("cls");
			leaveline();
		cout<<setw(83)<<"Enter amount which you expenses on Addition things:";
		cin>>e[13];		
		goto expenses;
	}
	break;
	case 110:	//display expanses
	{	
		system("cls");
		line();
		cout<<"\t\t\t\t\t\tYour Expanses ";
		line();
		
		cout<<"\t\t\t\tExpanses On Medical treatments:"<<e[1];
		line();
		cout<<"\t\t\t\tExpanses On Rent of House:"<<e[2];
		line();
		cout<<"\t\t\t\tExpanses On Foods:"<<e[3];
		line();
		cout<<"\t\t\t\tExpanses On Bills:"<<e[4];
		line();
		cout<<"\t\t\t\tExpanses On Sports and Gim fees:"<<e[5];
		line();
		cout<<"\t\t\t\tExpanses On Clothes:"<<e[6];
		line();
		cout<<"\t\t\t\tExpanses On Vehicle maintaintence and fuel expanses:"<<e[7];
		line();
		cout<<"\t\t\t\tExpanses On Eating Out:"<<e[8];
		line();
		cout<<"\t\t\t\tExpanses On Toilentry:"<<e[9];
		line();
		cout<<"\t\t\t\tExpanses On Transport:"<<e[10];
		line();
		cout<<"\t\t\t\tExpanses On Entertainment:"<<e[11];
		line();
		cout<<"\t\t\t\tExpanses On Addition Things:"<<e[12];		
		line();
		line();
		total=0;
		for(i=1;i<=12;i++)
		{
		total=total+e[i];
		}
		int saving;
		saving=inperm-total;
		cout<<"\t\t\t\tTOTAL INCOME:"<<inperm;
		line();
		cout<<"\t\t\t\tTOTAL EXPANSES:"<<total;
		line();
		cout<<"\t\t\t\tTOTAL SAVING IS:"<<saving;
	 	line();
	 	cout<<"\t\t\t\tSAVING PERCENTAGE:"<<(saving*100)/inperm<<"%";
	 	line();
	 	line();
	 	line();
		
	 }
	 
	}
}
};
class finish : public salary
{
	public:
void li()
	{
	cout<<endl<<setw(85)<<"--------------------------------"<<endl;
	}	
	void entry()
	{
		salary obj[20];
			system("cls");
			cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	li();
	cout<<setw(80)<<"Enter Your Income Per Annum:";
	cin>>sal;
	li();
	sal_mo=sal/12;

	string f;
		
		start:
	system("cls");
	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	li();
	cout<<setw(100)<<"Enter Month For Which You Want To Add Expenses foreg.{jan,feb}"<<endl;
	cout<<setw(75)<<"OR"<<endl<<setw(80)<<"for Total Write total."<<endl<<setw(76)<<"Enter Your Choice:";
	cin>>f;
	if(f=="jan")
		{		
			obj[1].income();
			obj[1].expenses();
			system("pause");
			monexp[1]=obj[1].salary::total;
			goto start;
		}

		//break;
	else if (f=="feb")
		{		
			obj[2].income();
			obj[2].expenses();
				system("pause");
			monexp[2]=obj[2].total;
			goto start;
		}
		//break;
		else if(f=="mar")
		{		
			obj[3].income();
			obj[3].expenses();
				system("pause");
			monexp[3]=obj[3].total;
			goto start;
		}
		//break;
		else if(f=="apr")
		{		
			obj[4].income();
			obj[4].expenses();
				system("pause");
			monexp[4]=obj[4].total;
			goto start;
		}
		//break;
		else if(f=="may")
		{		
			obj[5].income();
			obj[5].expenses();
				system("pause");
			monexp[5]=obj[5].total;
			goto start;
		}
		//break;
		else if(f=="jun")
		{		
			obj[6].income();
			obj[6].expenses();
				system("pause");
			monexp[6]=obj[6].total;
			goto start;
		}
		//break;
		else if(f=="jul")
		{		
			obj[7].income();
			obj[7].expenses();
				system("pause");
			monexp[7]=obj[7].total;
			goto start;
		}
		
		else if(f=="aug")
		{		
			obj[8].income();
			obj[8].expenses();
				system("pause");
			monexp[8]=obj[8].total;
			goto start;
		}
		
		else if(f=="sep")
		{		
			obj[9].income();
			obj[9].expenses();
				system("pause");
			monexp[9]=obj[9].total;
			goto start;
		}
		
		else if(f=="oct")
		{		
			obj[10].income();
			obj[10].expenses();
				system("pause");
			monexp[10]=obj[10].total;
			goto start;
		}
		
		else if(f=="nov")
		{		
			obj[11].income();
			obj[11].expenses();
				system("pause");
			monexp[11]=obj[11].total;
			goto start;
		}
		
		else if(f=="decm")
		{		
			obj[12].income();
			obj[12].expenses();
				system("pause");
			monexp[12]=obj[12].total;
			goto start;
		}
		
		else if(f=="total")
		{
		int toex=0;
	for(int k=1;k<=12;k++)
	{
 	toex=toex+monexp[k];
	}
	system("cls");
	li();
	cout<<"\t\t\t\t\t\t\t\tYour Expenses";
	li();
	cout<<"\t\t\t\t\t\t\tJanuary";
	cout<<setw(10)<<monexp[1];
	li();
	cout<<"\t\t\t\t\t\t\tFebruary";
	cout<<setw(9)<<monexp[2];
	li();
	cout<<"\t\t\t\t\t\t\tMarch";
	cout<<setw(12)<<monexp[3];
	li();
	cout<<"\t\t\t\t\t\t\tApril";
	cout<<setw(12)<<monexp[4];
	li();
	cout<<"\t\t\t\t\t\t\tMay";
	cout<<setw(14)<<monexp[5];
	li();
	cout<<"\t\t\t\t\t\t\tJune";
	cout<<setw(13)<<monexp[6];
	li();
	cout<<"\t\t\t\t\t\t\tJuly";
	cout<<setw(13)<<monexp[7];
	li();
	cout<<"\t\t\t\t\t\t\tAugest";
	cout<<setw(11)<<monexp[8];
	li();
	cout<<"\t\t\t\t\t\t\tSeptember";
	cout<<setw(8)<<monexp[9];
	li();
	cout<<"\t\t\t\t\t\t\tOctober";
	cout<<setw(10)<<monexp[10];
	li();
	cout<<"\t\t\t\t\t\t\tNovember";
	cout<<setw(9)<<monexp[11];
	li();
	cout<<"\t\t\t\t\t\t\tDecember";
	cout<<setw(9)<<monexp[12];
	li();
	li();
		
	cout<<"\t\t\t\t\t\t\tTotal Expenses Per Annum:";
	cout<<setw(8)<<toex;
	li();
	int sav=sal-toex;
	cout<<"\t\t\t\t\t\t\tTotal Amount Saved Per Annum:";
	cout<<setw(8)<<sav;
	
			li();
		}
		//break;;
		else
			{
				cout<<"Wrong Input";
				system("pause");
			goto start;	
				
			}

	}
};
int main()
{

finish f;
f.entry() ;

	
	return 0;
	
}
