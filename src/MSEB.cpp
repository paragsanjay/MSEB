//MSEB Payroll Management System
//Author: Parag Mhatre
#include <stdio.h>
#include<iostream>
#include "sqlite3.h"
#include<string>
#include<string.h>
using namespace std;
struct record
{
  string Ename,designatio,society,Contractor,bank,paymentmode,paymantamount;
            string CPF,contractorcode,societycode,accountno;
};
class MSEB
{
	sqlite3 *db;
	char *zErrMsg;
	int rc;
	public:
	MSEB()
	{
zErrMsg = 0;
	rc = sqlite3_open("test.db", &db);
	   if( rc ){
		      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		    //  exit(0);
		   }
		else{
		      fprintf(stderr, "Opened database successfully\n");
  		     }

	}
   void add(struct record *s)
    {

        //char *str="Insert into PayrollMaster values('";
//        strcat(str,s->Ename);
//        strcat(str,"','");
//        strcat(str,s->designatio);
//        strcat(str,"','");
//        strcat(str,s->society);
//        strcat(str,"','");
//        strcat(str,s->Contractor);
//        strcat(str,"',");
//        strcat(str,s->CPF);
//        strcat(str,",");
//        strcat(str,s->contractorcode);
//        strcat(str,",");
//        strcat(str,s->societycode);
//        strcat(str,",");
//        strcat(str,s->accountno);
//        strcat(str,",'");
//        strcat(str,s->paymentmode);
//        strcat(str,"','");
//        strcat(str,s->paymantamount);
//        strcat(str,"');");
//        str=sql;
//        cout<<sql;
//        rc = sqlite3_exec(db, str, callback, 0, &zErrMsg);
//   if( rc != SQLITE_OK ){
//      fprintf(stderr, "SQL error: %s\n", zErrMsg);
//      sqlite3_free(zErrMsg);
//   }else{
//      fprintf(stdout, "Records created successfully\n");
//   }

    }
void search(string name)
{

}
void deleter(string name)
{

}

	~MSEB()
	{
	   sqlite3_close(db);
	}
};
int main(int argc, char* argv[])
{
	int ch=0;
	record r;
	cout<<"MSEB Payroll Managemet System\n";
	cout<<"============================================\n";
	MSEB *system=new MSEB();
	a: cout<<"1. INSERT Recoard\n";
	cout<<"2. UPDATE Recoard\n";
	cout<<"3. SEARCH Recoard\n";
	cout<<"4. DELETE Recoard\n";
	cout<<"Enter you Choice :\n";
	cin>>ch;
	switch(ch)
	{
	    case 1:
	    {

	        cout<<"Enter Employee Name:";
	        cin>>r.Ename;
	        cout<<"Enter Designation:";
	        cin>>r.designatio;
	        cout<<"Enter Society Name:";
	        cin>>r.society;
	        cout<<"Enter Contractor Name:";
	        cin>>r.Contractor;
	        cout<<"Enter Employee CPF No:";
	        cin>>r.CPF;
	        cout<<"Enter Conteactor Supplyer Code:";
	        cin>>r.contractorcode;
	        cout<<"Enter Socity Code:";
	        cin>>r.societycode;
	        cout<<"Enter Bank:";
	        cin>>r.bank;
	        cout<<"Enter Account Number:";
	        cin>>r.accountno;
	        cout<<"Enter Payment Mode:";
	        cin>>r.paymentmode;
	        cout<<"Enter Payment Amount:";
	        cin>>r.paymantamount;
            system->add(&r);
	    }
	    default:
	    {
	        return 0;
	    }

	}

	return 0;
}
