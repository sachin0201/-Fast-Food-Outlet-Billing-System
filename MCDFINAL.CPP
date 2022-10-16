#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <string.h>
#include <iomanip.h>
#include <fstream.h>
#include <time.h>

void input();
void writefile();
void search();
void output();
void outputall();

struct date{
	   int month;
	   int day;
	   int year;
	   };

float user_bill,bill_tax,bill_net;
int a;
float totel;

struct account5 {
	int number;
}counters;

struct account {
	int number;
	int code;
	char name[30];
	float price,discount,tax,profitmargin,quantity;
	char type [20];
	char mainmenu[30];
  }customer;

struct account2 {
	int number1;
	char invoicedateq[30];
	float totelprise,toteltext;
	float invoicenetamount;
  }invoice;	

int tl,sl,ts;

viewsalereport()
{
	ifstream fin,fin2;
	fin.open("SALESR.txt", ios::in);
	char my_character ;
	int number_of_lines = 0;
	int index=0;
	cout<<"\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
	cout<<"\n\t\t\t\tVIEW SALES REPORT"<<endl;
	ifstream fin22;
	fin22.open("BIDUR2.txt",ios::in|ios::binary);
	fin22.seekg(0);
	cout << "================================================================================\n";
	gotoxy(5,6); 	cout<<"SR.NO.";  	gotoxy(13,6) ; 	cout<<"INVOICE NO."; 	gotoxy(30,6); 	cout<<"DATE"; 	gotoxy(45,6); 	cout<<"GAMOUNT";  	gotoxy(55,6); 	cout<<"TAX"; 	gotoxy(65,6); 	cout<<"NET AMOUNT";
	cout << "\n================================================================================";
	if(!fin22)
		cout<<"not fin22";
	int op=8;
	int invoice_counter=0;
	float totalsalescount=0,totaltaxcount=0,totalnetamtcount=0;
	while(fin22.read((char*)&invoice,sizeof(invoice)))
	{
		invoice_counter++;
		gotoxy(5,op); 		cout<<invoice_counter; 		gotoxy(13,op); 	cout<<invoice.number1;
		gotoxy(30,op);   	cout<<invoice.invoicedateq;  gotoxy(45,op);    cout<<invoice.totelprise;
		gotoxy(55,op);    cout<<invoice.toteltext;          gotoxy(65,op);   	cout<<invoice.invoicenetamount; 		op++;
		totalsalescount = totalsalescount + invoice.totelprise;
		totaltaxcount = totaltaxcount + invoice.toteltext;
		totalnetamtcount = totalnetamtcount + invoice.invoicenetamount;
	}
	op++;
	fin22.close();
	cout << "\n================================================================================";
	gotoxy(30,op); 	cout<<"TOTAL"; 	gotoxy(45,op); 	cout<<totalsalescount; 	gotoxy(55,op); 	cout<<totaltaxcount; 	gotoxy(65,op); 	cout<<totalnetamtcount;
	cout << "\n================================================================================";
}
void one(int custcode)
{
	ofstream myfile2;
	FILE *fpp;
	if(strcmp(customer.mainmenu, "1")==0)
	{ 	FILE *fpp; 	fpp=fopen("a1.txt","w");
		counters.number=custcode;
		fwrite(&counters,sizeof(counters),1,fpp);
		fclose(fpp); 	}
	if(strcmp(customer.mainmenu, "2")==0)
	{ 	FILE *fpp; 	fpp=fopen("a2.txt","w");
		counters.number=custcode;
		fwrite(&counters,sizeof(counters),1,fpp);
		fclose(fpp); 	}
	if(strcmp(customer.mainmenu, "3")==0)
	{	FILE *fpp; 	fpp=fopen("a3.txt","w");
		counters.number=custcode; 
		fwrite(&counters,sizeof(counters),1,fpp);
		fclose(fpp); 	}
	if(strcmp(customer.mainmenu, "4")==0)
	{ 	FILE *fpp; 	fpp=fopen("a4.txt","w");
		counters.number=custcode;
		fwrite(&counters,sizeof(counters),1,fpp);
		fclose(fpp); 	}
	if(strcmp(customer.mainmenu, "5")==0)
	{ 	FILE *fpp; 	fpp=fopen("a5.txt","w");
		counters.number=custcode;
		fwrite(&counters,sizeof(counters),1,fpp);
		fclose(fpp); 	}
	if(strcmp(customer.mainmenu, "6")==0)
	{ 	FILE *fpp; 	fpp=fopen("a6.txt","w");
		counters.number=custcode;
		fwrite(&counters,sizeof(counters),1,fpp);
		fclose(fpp); }
	if(strcmp(customer.mainmenu, "7")==0)
	{	FILE *fpp; 	fpp=fopen("a7.txt","w");
		counters.number=custcode;
		fwrite(&counters,sizeof(counters),1,fpp);
		fclose(fpp);	}
}
int one1()
{
	ifstream myfile22;
	int generatenumber;
	if(strcmp(customer.mainmenu, "1")==0)
	{ 	ifstream fin22; 	int c=0;
		fin22.open("a1.txt",ios::in|ios::binary);
		fin22.seekg(0);
		while(fin22.read((char*)&counters,sizeof(counters)))
		{ 	generatenumber=counters.number; 	c++; 	}
		if(c<1){generatenumber=100;}
		fin22.close();
	}
	if(strcmp(customer.mainmenu, "2")==0)
	{ 	ifstream fin22; 		int c=0;
		fin22.open("a2.txt",ios::in|ios::binary);
		fin22.seekg(0);
		while(fin22.read((char*)&counters,sizeof(counters)))
		{generatenumber=counters.number;	c++;}
			if(c<1){generatenumber=200;}
		fin22.close();
	}
	if(strcmp(customer.mainmenu, "3")==0)
	{
		ifstream fin22; 		int c=0;
		fin22.open("a3.txt",ios::in|ios::binary);
		fin22.seekg(0);
		while(fin22.read((char*)&counters,sizeof(counters)))
		{generatenumber=counters.number;	c++;}
			if(c<1){generatenumber=300;}
		fin22.close();
	}
	if(strcmp(customer.mainmenu, "4")==0)
	{
		ifstream fin22; 		int c=0;
		fin22.open("a4.txt",ios::in|ios::binary);
		fin22.seekg(0);
		while(fin22.read((char*)&counters,sizeof(counters)))
		{generatenumber=counters.number;	c++;}
			if(c<1){generatenumber=400;}
		fin22.close();
	}
	if(strcmp(customer.mainmenu, "5")==0)
	{
		ifstream fin22;
		int c=0;
		fin22.open("a5.txt",ios::in|ios::binary);
		fin22.seekg(0);
		while(fin22.read((char*)&counters,sizeof(counters)))
		{generatenumber=counters.number;	c++;}
			if(c<1){generatenumber=500;}
		fin22.close();
	}
	if(strcmp(customer.mainmenu, "6")==0)
	{
		ifstream fin22;
		int c=0;
		fin22.open("a6.txt",ios::in|ios::binary);
		fin22.seekg(0);
		while(fin22.read((char*)&counters,sizeof(counters)))
		{generatenumber=counters.number;	c++;}
			if(c<1){generatenumber=600;}
		fin22.close();
	}
	if(strcmp(customer.mainmenu, "7")==0)
	{
		ifstream fin22;
		int c=0;
		fin22.open("a7.txt",ios::in|ios::binary);
		fin22.seekg(0);
		while(fin22.read((char*)&counters,sizeof(counters)))
		{generatenumber=counters.number;	c++;}
			if(c<1){generatenumber=700;}
		fin22.close();
	}
		return generatenumber; 
}
// function to search invoice based on invoice number
searchinvoice(int index)
{
	clrscr();
	ifstream fin,fin2;
	fin.open("allinvoce.txt", ios::in);
	char my_character ;
	int number_of_lines = 1;
	int aindex=index-1000;
	while (!fin.eof() ) 
	{
		fin.get(my_character);
		if (my_character == '#')
		{++number_of_lines;}
		else
		{
			if(aindex==number_of_lines)
				cout << my_character;
		}
	}
	getch();
	return number_of_lines;
}
// function to add menu item
addmainmenu()
{
	clrscr();
	ifstream fin,fin2;
	fin.open("menu.txt", ios::in);
    cout<<"\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
	char my_character ;
	int number_of_lines = 0;
	int index=0;
	cout <<"\n\n\t\t\t";
	while (!fin.eof() ) 
	{
		fin.get(my_character);
		cout << my_character;
		if (my_character == '\n')
		{
			++index;
			cout << "\t\t\t";
			cout <<index; 
			cout <<".";
			++number_of_lines;
		}
	}
	ofstream myfile2;
	myfile2.open("menu.txt", ios::out|ios::app);
	char output[100];
	cout<<"\n\n\t\t\tPLEASE ENTER MENU NAME TO ADD : ";
	gets(output);
	myfile2 << "\n"; 
	myfile2 << output;
	myfile2.close();
}
// function to get customer side item list
void output_customer()
{
	int lent =30-strlen(customer.name);
	cout<<setw(4)<<customer.number<<setw(5)<<"   "<<customer.code<<setw(3)<<"   "<<customer.name<<setw(lent)<<" "<<customer.price<<setw(10)<<customer.type<<setw(10)<<customer.quantity<<endl;
    return;
}
// function to delete item
void delete_product()
{
	ifstream fin("bidur.txt",ios::in|ios::binary);
	ofstream fout("temp.txt",ios::app|ios::binary);
	int p;
	char ans='N';
	cout<<"\t\t\t\tDELETE ITEM\n";
	cout << "\n\t\t\t===========================================";
	cout<<"\n\t\t\tENTER ITEM CODE WHICH YOU WISH TO DELETE : ";
	cin>>p;
	fin.seekg(0);
	while(!fin.eof())
	{
		fin.read((char*)&customer,sizeof(customer));
		if (p==customer.number)
		{
			cout<<"\n\t\t\tYOU ARE ABOUT TO DELETE : "<<customer.name<<endl;
			cout<<"\n\t\t\tCONTINUE (Y/N): ";
			cin>>ans;
			break;
		}
	}
	fin.seekg(0);
	if(ans!='N')
	{
		while (fin.read((char*)&customer,sizeof(customer)))
		{
			if(p!=customer.number)
				fout.write((char*)&customer,sizeof(customer));
		}
		cout<<"\n \n               PLEASE WAIT WHILE THE ITEM IS BEING DELETED";
		cout<<endl<<endl<<" ";
		cout<<endl<<"\n\t\t\tITEM HAS BEEN DELETED"<<endl;
		getch();
		fin.close();
		fout.close();
		remove("bidur.txt");
		rename("temp.txt","bidur.txt");
	}
	else
	{
		fin.close();
		fout.close();
	}
}
// function to create invoice
int createinvoice()
{
	ofstream myfileall;
	myfileall.open("allinvoce.txt", ios::out|ios::app);
	ifstream fin,fin2,fin3;
	fin.open("invoce.txt", ios::in);
	char my_character ;
	int number_of_lines = 0;
	while (!fin.eof() ) 
	{
		fin.get(my_character);
		myfileall << my_character;
		if (my_character == '\n')
		{++number_of_lines;}
	}
	fin.close();
	fin2.open("invoce2.txt", ios::in);
	char my_character2 ;
	int number_of_lines2 = 0;
	while (!fin2.eof() ) 
	{
		fin2.get(my_character2);
		myfileall << my_character2;
		if (my_character2 == '\n')
		{++number_of_lines2;}
	}
	fin2.close();
	fin3.open("invoce3.txt", ios::in);
	char my_character3 ;
	int number_of_lines3 = 0;
	while (!fin3.eof() ) 
	{
		fin3.get(my_character3);
		myfileall << my_character3;
		if (my_character3 == '\n')
		{++number_of_lines3;}
	}
	fin3.close();
	myfileall<<"#"  ;
	myfileall.close();
	ofstream myfile;
	myfile.open ("invoce2.txt");
	myfile << "";
	myfile.close();
	return 0;
}
// function to display invoice for customer
int displaycustomerinvoice()  //RIPALmain
{
	clrscr();
	ifstream fin,fin2,fin3;
	fin.open("invoce.txt", ios::in);
	char my_character ;
	int number_of_lines = 0;
	while (!fin.eof() ) 
	{
		fin.get(my_character);
		cout << my_character;
		if (my_character == '\n')
		{++number_of_lines;}
	}
	fin.close();
	fin2.open("invoce2.txt", ios::in);
	char my_character2 ;
	int number_of_lines2 = 0;
	while (!fin2.eof() ) 
	{
		fin2.get(my_character2);
		cout << my_character2;
		if (my_character2 == '\n')
		{++number_of_lines2;}
	}
	fin2.close();
}
// function to get next invoice number
int getallinvocecount()
{
	ifstream fin,fin2;
	fin.open("allinvoce.txt", ios::in);
	char my_character ;
	int number_of_lines = 1;
	while (!fin.eof() ) 
	{
		fin.get(my_character);
		if (my_character == '#')
		{++number_of_lines;}
	}
  return number_of_lines;
}
// function to add new order
oraderenter()
{
	int diskunt=0,disktotel=0,diskprice=0,n;	
	ofstream myfile2,myfile3,myfile33;
	myfile2.open("invoce2.txt", ios::out|ios::app);
	int  tax1;
	FILE *fp;
	fp=fopen("bidur.txt","rb");
	fseek(fp,0,SEEK_END);
	tl=ftell(fp);
	sl=sizeof(customer);
	ts=tl/sl;
	cout<<"\n   CHOOSE ITEM NO."<< setw(29) << setfill(' ')<< " : ";
	scanf("%d",&n);
	if(n<=0 || n>ts)
		printf("\nENTER CORRECT\n");
	else
	{
		fseek(fp,(n-1)*sl,SEEK_SET);
		fread(&customer,sl,1,fp);
		myfile2 << "\n";
		myfile2 <<customer.code;
		myfile2 <<setw(3)<<"   "<<customer.name;
		int lent =30-strlen(customer.name);
		myfile2 <<setw(lent)<<" "<<customer.price;
		 tax1=customer.tax;
		diskprice=customer.price;
		diskunt =customer.discount;
		cout<<"   ITEM NAME"<< setw(35) << setfill(' ')<< " : ";
		cout<<customer.name<<endl;
		cout<<"   ITEM CODE"<< setw(35) << setfill(' ')<< " : ";
		cout<<customer.code<<endl;
	}
	int dish_quantity;
	cout<<"   ITEM QUANTITY"<< setw(31) << setfill(' ')<< " : ";
	cin>>dish_quantity;
	myfile2<<setw(5)<<"   "<<dish_quantity;
	int s=dish_quantity*diskprice;
	myfile2<<setw(4)<<"   "<<s;
	myfile2<<setw(3)<<"  "<<diskunt;
	int netamount=s-((s*diskunt)/100);
	myfile2 <<setw(4)<<"   "<< netamount;
	int taxc=(netamount*customer.tax)/100;
	bill_tax=bill_tax+taxc;
	myfile2 <<setw(4)<<"   "<< taxc;
	myfile2 <<setw(4)<<"   "<< taxc+netamount;
	bill_net=bill_net+taxc+netamount;
	user_bill=user_bill+netamount;
	myfile2.close();
	cout<<"\n   DO YOU WANT TO ADD MORE?(y/n) "<< setw(14) << setfill(' ')<< " : ";
	char ch1=getche();
	if(ch1=='Y' || ch1=='y')
	{oraderenter();}
	else
	{
		displaycustomerinvoice();
		myfile3.open ("invoce3.txt");
		myfile3 << "\n _______________________________________________________________________________\n";
		cout<<"\n_______________________________________________________________________________\n";
		cout<<"\n\t\t\t\t\t\t   GROSS TOTAL        : "<<user_bill;
		myfile3 << "\n\t\t\t\t\t\t   GROSS TOTAL        : ";
		myfile3 << user_bill;
		cout<<"\n\t\t\t\t\t\t   TOTAL TAX AMOUNT   : "<<bill_tax;
		myfile3 << 	"\n\t\t\t\t\t\t   TOTAL TAX AMOUNT   : "<<bill_tax;
		cout<<"\n\t\t\t\t\t\t   NET PAYBLE AMOUNT  : "<<bill_net;
		myfile3 << "\n\t\t\t\t\t\t   NET PAYBLE AMOUNT   : ";
		myfile3<<bill_net;
		do{
		cout<<"\n\t\t\t\t\t\t   RUPEES GIVEN       : ";
		cin>>a;
		myfile3 << "\n\t\t\t\t\t\t   RUPEES GIVEN       : ";
		myfile3 << a;
		if (a<bill_net)
		cout<<"\n\t\t\t\t\t   THIS AMOUNT IS INVALID";
		}while(a<bill_net);
		cout<<"\n\t\t\t\t\t\t   BALANCE            : "<<(a-bill_net);
		myfile3 << "\n\t\t\t\t\t\t   BALANCE            : ";
		myfile3 <<setprecision(2)<<(a-bill_net);
		myfile3.close();
		int count =getallinvocecount();
		count=count+1000;
		char datex[9];
		_strdate(datex);
		FILE *fp=fopen("BIDUR2.txt","rb");
		fseek (fp,0,SEEK_END);
		tl=ftell(fp);
		sl=sizeof(invoice);
		ts=tl/sl;
		fseek(fp,(ts-1)*sl,SEEK_SET);
		fread(&invoice,sizeof(invoice),1,fp);
		invoice.number1=count;
		strcpy(invoice.invoicedateq, datex);
		invoice.totelprise=user_bill;
		invoice.toteltext=bill_tax;
		invoice.invoicenetamount=bill_net;
		FILE *fpp;
		fpp=fopen("BIDUR2.txt","ab");
		fwrite(&invoice,sizeof(invoice),1,fpp);
		fclose(fpp);
		cout<<"\n\n\n\t\t\tTHANKS FOR COMING, PLEASE VISIT AGAIN";
		a = createinvoice();
		getch();
	}
}
// function related to menu display
mainmenu()
{
	ifstream fin,fin2;
	fin.open("menu.txt", ios::in);
	char my_character ;
	int number_of_lines = 0;
	int index =0;
	cout <<"\t\t\t";
	while (!fin.eof()) 
	{
		fin.get(my_character);
		cout<< my_character;
		if (my_character == '\n')
		{
			++index;
			cout << "\t\t\t";
			cout <<index; 
			cout <<".";
			++number_of_lines;
		}
	}
	cout <<  "\n\n\t\t\tPRESS ANY KEY TO GO BACK TO MAIN MENU\n\n";
}
void main()
{
	int i,n;
	char ch;
    char chh[30];
	clrscr();
	cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n\n"<<endl;
	cout<<"\t\t\tMAIN MENU\n";
	cout << "\t\t\t===================================\n\n";
	cout<<"\t\t\t01. CUSTOMER\n\n";
	cout<<"\t\t\t02. STAFF\n\n";
	cout<<"\t\t\t03. ADMINISTRATOR\n\n";
	cout<<"\t\t\t04. EXIT\n\n";
	cout << "\t\t\t===================================\n\n";
	cout<<"\t\t\tPLEASE SELECT ONE OF THE OPTION (1-4) :";
	ch=getche();
	switch(ch)
	{
		case '1':
			clrscr();
			cout<<"\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n"<<endl;
			cout<<"\t\t\tCUSTOMER MENU";
			cout << "\n\t\t\t================================";
			mainmenu();
			cout << "\t\t\t================================\n";
			cout<<"\t\t\tPLEASE ENTER YOUR CHOICE:  ";
			cin>>chh;
			if(strcmp("1", chh)!=0 && strcmp("2", chh)!=0 && strcmp("3", chh)!=0  && strcmp("4", chh)!=0 && strcmp("5", chh)!=0 && strcmp("6", chh)!=0&& strcmp("7", chh)!=0)
			{main();}
			else
			{
				char ans3;
				clrscr();
				ifstream fin;
				fin.open("bidur.txt",ios::in|ios::binary);
				fin.seekg(0);
				clrscr();
				do{
					cout<<"\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n"<<endl;
					if(strcmp(chh, "1")==0)
						cout<<"\t\t\t\tBREAKFAST MENU\n\n ";
					if(strcmp(chh, "2")==0)
						cout<<"\t\t\t\tBURGERS MENU\n\n ";
					if(strcmp(chh, "3")==0)
						cout<<"\t\t\t\tSANDWICHES MENU\n\n ";
					if(strcmp(chh, "4")==0)
						cout<<"\t\t\t\tSALADS MENU\n\n ";
					if(strcmp(chh, "5")==0)
						cout<<"\t\t\t\tSNACKS & SIDES MENU\n\n ";
					if(strcmp(chh, "6")==0)
						cout<<"\t\t\t\tDESSERTS & SHAKES MENU\n\n ";
					if(strcmp(chh, "7")==0)
						cout<<"\t\t\t\tDRINKS & McCAFE MENU\n\n ";

					cout << "===============================================================================";
					cout <<setw(2)<< "   NO."<<setw(5)<< "  CODE"<<setw(5)<<"   ITEM NAME"<<setw(20)<<"    "<<"PRICE"<<setw(10)<<" TYPE"<<setw(10)<<"  QTY\n";
					cout << " ===============================================================================\n";
					if(!fin)
						cout<<"not fin";

					while(fin.read((char*)&customer,sizeof(customer)))
					{
						if(strcmp(customer.mainmenu, chh)==0)
							output_customer();
					}
					fin.close();
					break;
				}while(ch=='y');
				cout << "===============================================================================";
				cout<<"\n\n   WOULD YOU LIKE TO ORDER AN ITEM NOW (Y/N) : ";
				cin>>ans3;
				cout<<endl<<endl;
				if(ans3=='Y'||ans3=='y')
				{
					char user_name[50];
					cout<<"   PLEASE ENTER CUSTOMER NAME"<< setw(18) << setfill(' ')<< " : ";
					scanf("%s",user_name);
					ofstream myfile;
					myfile.open ("invoce.txt");
					myfile<<"\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
					myfile<<"\n\t\t\t----- INVOICE -----"<<endl;
					myfile << "\n===============================================================================\n";
					int count =getallinvocecount();
					count=count+1000;
					myfile <<"      INVOICE NO. :"<<count<< "  \t               NAME :";
					myfile << user_name;
					char datex[9];
					_strdate(datex);
					myfile << "\n      GSTIN       :24AACHT8828G1ZE"<<"\t       DATE :";
					myfile << datex;
					myfile << "\n===============================================================================\n";
					myfile << "CODE"<<setw(3)<<" ITEM NAME"<<setw(26)<<"  PRICE"<<setw(3)<<"  QTY"<<setw(3)<<" TOTAL"<<setw(3)<<"  DISC"<<setw(3)<<" G AMT."<<setw(3)<<" TAX"<<setw(3)<<"    NET AMT."<<endl;
					myfile << " ==============================================================================";
					myfile.close();
					oraderenter();
					cout<<"\n\t\t\tPRESS ANY KEY TO CONTINUE... ";
					main();
				}
				else
				{main();}
				cout<<"\n\t\t\tPRESS ANY KEY TO CONTINUE... ";
				main();
			}
			break;
		case '2':
			char username[50];
		    char password[50];
			char ans2;
			clrscr();
			cout<<"\n                        THIS AREA IS ONLY FOR STAFF"<<endl;
			cout<<"\n\n                            USERNAME : ";
			cin>>username;
			cout<<"\n\n                            PASSWORD : ";
			int n=-1;
			char pass[30];
			do
			{
				n++;
				pass[n]=getch();
				if(pass[n]!=13)
				{
				password[n]=pass[n];
				cout<<"*";
				}
				else break;
			}while(1);
			password[n]='\0';
			cout<<"\n \n             PLEASE WAIT WHILE WE VERIFY THE LOGIN DETAILS";
			for(n=0;n<=2;n++)
			{cout<<".";}
			cout<<endl<<endl<<" ";
			for(int h=0;h<39;h++)
			{cout<<"Û";}
			for(h=0;h<39;h++)
			{cout<<"Û";}
			if(strcmpi(username,"USER")==0&&strcmpi(password,"USER")==0)
			{
				clrscr();
				cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n"<<endl;
				cout<<"\n\t\t\tSTAFF MENU";
				cout << "\n\t\t\t================================";
				cout<<"\n\t\t\t1.ADD NEW ITEM";
				cout<<"\n\t\t\t2.DISPLAY ALL ITEMS";
				cout<<"\n\t\t\t3.DELETE ITEM";
				cout<<"\n\t\t\t4.BACK TO MAIN MENU";
				cout << "\n\n\t\t\t================================";
				cout<<"\n\t\t\tPLEASE ENTER YOUR CHOICE (1-4) :";
				ans2=getch();
				if(ans2=='1')  //ADD DISH
				{ 
					clrscr();
					input();
					writefile();
				    cout<<"\n\nITEM HAS BEEN ADDED SUCCESSFULLY";
					clrscr();
					cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n"<<endl;
					cout<<"\n\t\t\tSTAFF MENU";
					cout << "\n\t\t\t================================";
					cout<<"\n\t\t\t1.ADD NEW ITEM";
					cout<<"\n\t\t\t2.DISPLAY ALL ITEMS";
					cout<<"\n\t\t\t3.DELETE ITEM";
					cout<<"\n\t\t\t4.BACK TO MAIN MENU";
					cout << "\n\n\t\t\t================================";
					cout<<"\n\t\t\tPLEASE ENTER YOUR CHOICE (1-4) :";
					ans2=getch();
					if(ans2=='1')  //ADD DISH
					{ 
						clrscr();
						input();
						writefile();
						main();
						cout<<"\n\nITEM HAS BEEN ADDED SUCCESSFULLY";
					}
					else if(ans2=='2') //DISPLAY ALL DISHES
					{
						clrscr();
						ifstream fin;
						fin.open("bidur.txt",ios::in|ios::binary);
						fin.seekg(0);
						clrscr();
						do{
							cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
							cout<<"\n\t\t\t\tALL ITEMS";
							cout << "\n===============================================================================";
							cout<<setw(2)<<"\n NO."<<setw(2)<<" CODE"<<setw(5)<<"    NAME"<< setw(26) << setfill(' ')<<"PRICE"<< setw(6) << setfill(' ')<<" TYPE"<< setw(9) << setfill(' ')<<" DISC"<< setw(4) << setfill(' ')<<" TAX"<< setw(7) << setfill(' ')<<" PROFIT"<< setw(5) << setfill(' ')<<" QTY"<<endl;
							cout << "==============================================================================\n";
							if(!fin)
								cout<<"not fin";
							while(fin.read((char*)&customer,sizeof(customer)))
							{
								if(customer.number>=1&&customer.number<99999)
									output();
							}
							cout << " ===============================================================================";
							cout <<  "\n\t\t\tPRESS ANY KEY TO GO BACK TO MAIN MENU\n\n";
							getch();
							fin.close();
							clrscr();
							cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n"<<endl;
							cout<<"\n\t\t\tSTAFF MENU";
							cout << "\n\t\t\t================================";
							cout<<"\n\t\t\t1.ADD NEW ITEM";
							cout<<"\n\t\t\t2.DISPLAY ALL ITEMS";
							cout<<"\n\t\t\t3.DELETE ITEM";
							cout<<"\n\t\t\t4.BACK TO MAIN MENU";
							cout << "\n\n\t\t\t================================";
							cout<<"\n\t\t\tPLEASE ENTER YOUR CHOICE (1-4) :";
							ans2=getch();
							if(ans2=='1')  //ADD DISH
							{ 
								clrscr();
								input();
								writefile();
								main();
								cout<<"\n\nITEM HAS BEEN ADDED SUCCESSFULLY";
							}
							else if(ans2=='2') //DISPLAY ALL DISHES
							{
								clrscr();
								ifstream fin;
								fin.open("bidur.txt",ios::in|ios::binary);
								fin.seekg(0);
								clrscr();
								do{
									cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
									cout<<"\n\t\t\t\tALL ITEMS";
									cout << "\n===============================================================================";
									cout<<setw(2)<<"\n NO."<<setw(2)<<" CODE"<<setw(5)<<"    NAME"<< setw(26) << setfill(' ')<<"PRICE"<< setw(6) << setfill(' ')<<" TYPE"<< setw(9) << setfill(' ')<<" DISC"<< setw(4) << setfill(' ')<<" TAX"<< setw(7) << setfill(' ')<<" PROFIT"<< setw(5) << setfill(' ')<<" QTY"<<endl;
									cout << "==============================================================================\n";
									if(!fin)
										cout<<"not fin";
								
									while(fin.read((char*)&customer,sizeof(customer)))
									{
										if(customer.number>=1&&customer.number<99999)
											output();
									}
									cout << " ===============================================================================";
									cout <<  "\n\t\t\tPRESS ANY KEY TO GO BACK TO MAIN MENU\n\n";
									getch();
									fin.close();
									main();
									break;
								}while(ch=='y');
								break;
							}
							else if(ans2=='3')  //DELETE DISH
							{
								clrscr();
								cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n\n"<<endl;
								delete_product();
								main();
								break;
							}
							else if(ans2=='4')
							{main();}
							break;
							}while(ch=='y');
							break;
					}
					else if(ans2=='3')  //DELETE DISH
					{
						clrscr();
						cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n\n"<<endl;
						delete_product();
						main();
						break;
					}
					else if(ans2=='4')
					{main();}
				}
				else if(ans2=='2') //DISPLAY ALL DISHES
				{
					clrscr();
					ifstream fin;
					fin.open("bidur.txt",ios::in|ios::binary);
					fin.seekg(0);
					clrscr();
					do{
						cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
						cout<<"\n\t\t\t\tALL ITEMS";
						cout << "\n===============================================================================";
						cout<<setw(2)<<"\n NO."<<setw(2)<<" CODE"<<setw(5)<<"    NAME"<< setw(26) << setfill(' ')<<"PRICE"<< setw(6) << setfill(' ')<<" TYPE"<< setw(9) << setfill(' ')<<" DISC"<< setw(4) << setfill(' ')<<" TAX"<< setw(7) << setfill(' ')<<" PROFIT"<< setw(5) << setfill(' ')<<" QTY"<<endl;
						cout << "==============================================================================\n";
						if(!fin)
							cout<<"not fin";
					
						while(fin.read((char*)&customer,sizeof(customer)))
						{
							if(customer.number>=1&&customer.number<99999)
								output();
						}
						cout << " ===============================================================================";
						cout <<  "\n\t\t\tPRESS ANY KEY TO GO BACK TO MAIN MENU\n\n";
						getch();
						fin.close();
						main();
						break;
					}while(ch=='y');
					break;
				}
				else if(ans2=='3')  //DELETE DISH
				{
					clrscr();
					cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n\n"<<endl;
					delete_product();
					clrscr();
					cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n"<<endl;
					cout<<"\n\t\t\tSTAFF MENU";
					cout << "\n\t\t\t================================";
					cout<<"\n\t\t\t1.ADD NEW ITEM";
					cout<<"\n\t\t\t2.DISPLAY ALL ITEMS";
					cout<<"\n\t\t\t3.DELETE ITEM";
					cout<<"\n\t\t\t4.BACK TO MAIN MENU";
					cout << "\n\n\t\t\t================================";
					cout<<"\n\t\t\tPLEASE ENTER YOUR CHOICE (1-4) :";
					ans2=getch();
					if(ans2=='1')  //ADD DISH
					{ 
						clrscr();
						input();
						writefile();
						main();
						cout<<"\n\nITEM HAS BEEN ADDED SUCCESSFULLY";
					}
					else if(ans2=='2') //DISPLAY ALL DISHES
					{
						clrscr();
						ifstream fin;
						fin.open("bidur.txt",ios::in|ios::binary);
						fin.seekg(0);
						clrscr();
						do{
						cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
						cout<<"\n\t\t\t\tALL ITEMS";
						cout << "\n===============================================================================";
						cout<<setw(2)<<"\n NO."<<setw(2)<<" CODE"<<setw(5)<<"    NAME"<< setw(26) << setfill(' ')<<"PRICE"<< setw(6) << setfill(' ')<<" TYPE"<< setw(9) << setfill(' ')<<" DISC"<< setw(4) << setfill(' ')<<" TAX"<< setw(7) << setfill(' ')<<" PROFIT"<< setw(5) << setfill(' ')<<" QTY"<<endl;
						cout << "==============================================================================\n";
						if(!fin)
							cout<<"not fin";
						
						while(fin.read((char*)&customer,sizeof(customer)))
						{
							if(customer.number>=1&&customer.number<99999)
								output();
						}
						cout << " ===============================================================================";
						cout <<  "\n\t\t\tPRESS ANY KEY TO GO BACK TO MAIN MENU\n\n";
						getch();
						fin.close();
						main();
						break;
						}while(ch=='y');
						break;
					}
					else if(ans2=='3')  //DELETE DISH
					{
						clrscr();
						cout<<"\n\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n\n"<<endl;
						delete_product();
						main();
						break;
					}
					else if(ans2=='4')
					{main();}
					break;
				}
				else if(ans2=='4')
				{main();}
			}
			else
			{
				clrscr();
				cout<<endl;
				if(strcmpi(password,"USER")!=0 && strcmpi(username,"USER")==0)
				cout<<"                                 WRONG PASSWORD"<<endl;
				else if(strcmpi(password,"USER")==0 && strcmpi(username,"USER")!=0)
				cout<<"                                 WRONG USERNAME"<<endl;
				else if(strcmpi(password,"USER")!=0 && strcmpi(username,"USER")!=0)
				cout<<"                           WRONG USERNAME AND PASSWORD"<<endl;
				cout<<"\n                                ACCESS DENIED!!!"<<endl;
				main();
			}
			break;
		case '3':
			clrscr();
			char ch2;
			cout<<"\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
			cout<<"\n\t\t\tADMIN MENU";
			cout << "\n\t\t\t================================";
			cout<<"\n\t\t\t1.ADD NEW MENU";
			cout<<"\n\t\t\t2.SEARCH";
			cout<<"\n\t\t\t3.VIEW SALES REPORT";
			cout<<"\n\t\t\t4.BACK TO MAIN MENU";
			cout << "\n\n\t\t\t================================";
			cout<<"\n\t\t\tPLEASE ENTER YOUR CHOICE (1-4) : ";
			ch2=getche();
			switch(ch2)
			{
				case '1':
					addmainmenu();
				    main();
					break;
				case '2':
					clrscr();
 				    cout<<"\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
					printf("\n\t\t\tSEARCH BY");
					cout << "\n\t\t\t================================";
					printf("\n\n\t\t\t1.SEARCH BY SR. NO.");
					printf("\n\t\t\t2.SEARCH BY ITEM NAME");
					printf("\n\t\t\t3.SEARCH ALL");
					printf("\n\t\t\t4.SEARCH INVOICE\n");
					cout << "\n\t\t\t================================";
					search();
					main();
					break;
				case '3':
					clrscr();
					viewsalereport();
					cout<<"\n\n\t\t\tPRESS ANY KEY TO GO TO MAIN MENU : ";
					getch();
					main();
					break;
				case '4':
					clrscr();
					main();
					break;
				default :cout<<"\a";main();
			}
	}
}
// function to display fields to capture
void input()
{
	FILE *fp=fopen("bidur.txt","rb");
    cout<<"\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----"<<endl;
	cout<<"\n\t\t\tADD ITEM";
	cout << "\n\t\t\t================================";
	fseek (fp,0,SEEK_END);
	tl=ftell(fp);
	sl=sizeof(customer);
	ts=tl/sl;
	fseek(fp,(ts-1)*sl,SEEK_SET);
	fread(&customer,sizeof(customer),1,fp);
	ifstream fin,fin2;
	fin.open("menu.txt", ios::in);
	char my_character ;
	int number_of_lines = 0;
	int index=0;
	cout <<"\t\t\t";
	while (!fin.eof() ) 
	{
		fin.get(my_character);
		cout << my_character;
		if (my_character == '\n')
		{
			++index;
			cout << "\t\t\t";
			cout <<index; 
			cout <<".";
			++number_of_lines;
		}
	}
	cout << "\n\n\t\t\t================================";
	printf("\n\t\t        ENTER MAIN CATEGORY (1-7) :");
    cin>>customer.mainmenu;
	char iname [100];
	printf("\n\t\t\tSR.NO.:%d\n",++customer.number);
	fclose(fp);
	int customerscode =one1();
	++customerscode;
	customer.code=	customerscode;
	one(customerscode);
	cout<<"\n\t\t\tENTER ITEM CODE  "<< setw(16) << setfill(' ')<< " : "<<customer.code;
	cout<<"\n\t\t\tENTER ITEM NAME  "<< setw(16) << setfill(' ')<< " : ";
	gets(customer.name);
	cout<<"\n\t\t\tENTER ITEM PRICE  "<< setw(14) << setfill(' ')<< " : ";
	scanf("%f",&customer.price);
	printf("\n\t\t        ENTER ITEM TYPE (VEG / NONVEG)  : ");
	scanf("%s",customer.type);
	cout<<"\n\t\t\tENTER DISCOUNT: "<< setw(17) << setfill(' ')<< " : ";
	scanf("%f",&customer.discount);
	cout<<"\n\t\t\tENTER TAX : "<< setw(21) << setfill(' ')<< " : ";
	scanf("%f",&customer.tax);
	cout<<"\n\t\t\tENTER PROFIT MARGIN  "<< setw(12) << setfill(' ')<< " : ";
	scanf("%f",&customer.profitmargin);
	cout<<"\n\t\t\tENTER QUANTITY  "<< setw(17) << setfill(' ')<< " : ";
	scanf("%f",&customer.quantity);
	return;
}
// function to write data
void writefile()
{
	FILE *fp;
	fp=fopen("bidur.txt","ab");
	fwrite(&customer,sizeof(customer),1,fp);
	fclose(fp);
	return;
}
// function to search data
void search()
{
	char ch;
	char nam[100];
	int n,i,m=1;
	FILE *fp;
	fp=fopen("bidur.txt","rb");
	 	do{
		printf("\n\t\t\tENTER YOUR CHOICE : ");
		ch=getche();
	}while(ch!='1' && ch!='2' && ch!='3' && ch!='4');
	switch(ch){
	    case '1':
		    fseek(fp,0,SEEK_END);
		    tl=ftell(fp);
		    sl=sizeof(customer);
		    ts=tl/sl;
		    do{
				printf("\n\n\t\t\tCHOOSE SR. NO.: ");
				scanf("%d",&n);
				if(n<=0 || n>ts)
					printf("\nENTER CORRECT\n");
				else{
					fseek(fp,(n-1)*sl,SEEK_SET);
					fread(&customer,sl,1,fp);
					cout<<setw(2)<<"\nNO."<<setw(2)<<" "<<"CODE"<<setw(2)<<" "<<"NAME"<<setw(23)<<" "<<"PRICE"<<setw(3)<<" "<<"TYPE"<<setw(3)<<" "<<"DISC"<<setw(3)<<" "<<"TAX"<<setw(3)<<" "<<"PROFIT"<<setw(3)<<" "<<"QTY"<<endl;
					output();
				}
				cout<<"\n\t\t\tPRESS ANY KEY TO RETURN TO MAIN PAGE ";
				ch=getche();
		    }while(ch=='y');
		    fclose(fp);
		    break;
	    case '2':
		    fseek(fp,0,SEEK_END);
		    tl=ftell(fp);
		    sl=sizeof(customer);
		    ts=tl/sl;
		    fseek(fp,(ts-1)*sl,SEEK_SET);
		    fread(&customer,sizeof(customer),1,fp);
		    n=customer.number;
		    do{
				printf("\n\t\t\tENTER ITEM NAME:");
				gets(nam);
				fseek(fp,0,SEEK_SET);
				cout<<setw(2)<<"\nNO."<<setw(2)<<" "<<"CODE"<<setw(2)<<" "<<"NAME"<<setw(23)<<" "<<"PRICE"<<setw(3)<<" "<<"TYPE"<<setw(3)<<" "<<"DISC"<<setw(3)<<" "<<"TAX"<<setw(3)<<" "<<"PROFIT"<<setw(3)<<" "<<"QTY"<<endl;
				for(i=1;i<=n;i++)
				{
					fread(&customer,sizeof(customer),1,fp);
					if(strcmp(customer.name,nam)==0)
					 {
						output();
						m=0;
						break;
					}
				}
				if(m!=0)
					printf("\n\n\t\t\tDOESN'T EXIST\n");
				printf("\n\n\t\t\tPRESS ANY KEY TO GO TO MAIN PAGE ");
				ch=getche();
				main();
		    }while(ch=='y');
		    fclose(fp);
			break;
		case '3':
			ifstream fin;
			fin.open("bidur.txt",ios::in|ios::binary);
			fin.seekg(0);
			clrscr();
			cout<<"\n\n\n\t\t\t----- WELCOME TO SKGs INDIAN CAFE -----\n"<<endl;
			cout<<setw(2)<<"\nNO."<<setw(2)<<" "<<"CODE"<<setw(2)<<" "<<"NAME"<<setw(23)<<" "<<"PRICE"<<setw(3)<<" "<<"TYPE"<<setw(3)<<" "<<"DISC"<<setw(3)<<" "<<"TAX"<<setw(3)<<" "<<"PROFIT"<<setw(3)<<" "<<"QTY"<<endl;
			do{
				if(!fin)
					cout<<"not fin";
				
				while(fin.read((char*)&customer,sizeof(customer)))
				{
					if(customer.number>=1&&customer.number<99999)
						output();
				}
				cout <<  "\n\n\t\t\tPRESS ANY KEY TO GO BACK TO MAIN MENU\n\n";
				getch();
				fin.close();
				main();
				m=0;
				break;
				if(m!=0)
					printf("\n\nDOESN'T EXIST\n");
				ch=getche();
				main();
		    }while(ch=='y');
		    fclose(fp);
			break;
		case '4':
			cout<<"\n\n\t\t\tPLEASE ENTER INVOICE NO. :";
			int invoicenumber;
			cin>>invoicenumber;
			searchinvoice(invoicenumber);
			cout<<"\n\t\t\tPRESS ANY KEY TO RETURN TO MAIN PAGE ";
			main();
			break;
	      }
	return;
}
void output()
{
	int lent =30-strlen(customer.name);
	int lent2 =9-strlen(customer.type);
	cout<<setw(2)<<customer.number<<setw(3)<<"   "<<customer.code<<setw(3)<<"   "<<customer.name<<setw(lent)<<customer.price<<setw(5)<<" "<<customer.type<<setw(lent2)<<" "<<customer.discount<<setw(3)<<" "<<customer.tax<<setw(5)<<" "<<customer.profitmargin<<setw(6)<<" "<<customer.quantity<<endl;
	return;
}