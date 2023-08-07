#include <iostream>


using namespace std;
void theShape()
{
    cout<<"\t\t\t\t";
      for(int x=0;x<23;x++)
      {

          cout<<char(3)<<" ";
      }
      cout<<endl;
     cout<<"\n\t\t\t\t       ~ UNIMY Booking Room Service~    "<<endl<<endl;
     cout<<"\t\t\t\t";
      for(int x=0;x<23;x++)
      {
          cout<<char(3)<<" ";
      }
        cout<<endl;
}


void menu()
{
    string selection[4]={};

selection[0]="Book a Room";
selection[1]="Edit Booking";//change or cancel
selection[2]="Search Room";
selection[3]="Exit";

cout<<"\n\t\t\t\t  -------Menu-------"<<endl;
cout<<"\t\t\t\t 1 )"<<selection[0]<<endl;
cout<<"\t\t\t\t 2 )"<<selection[1]<<endl;
cout<<"\t\t\t\t 3 )"<<selection[2]<<endl;
cout<<"\t\t\t\t 4 )"<<selection[3]<<endl<<endl;

}



void classroom1() //information for booking classroom
{
    string name,email;
    char alphClass;
    int pNum,date,mm,year;
    int codeClass=1000; //code1
    int timee[15]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}; //code2

        cout<<"Before booking the room, please fill up the information:"<<endl;
        cout<<"Please enter your name: "<<endl;
        cin>>name;
        cout<<"Please enter your e-mail: "<<endl;
        cin>>email;
        cout<<"Please enter your phone number(+60xxxxx): "<<endl;
        cin>>pNum;
        cout<<"Enter which date you want to book:"<<endl;
        cin>>date;
        cout<<"Enter which month you want to book:"<<endl;
        cin>>mm;
        cout<<"Enter which year you want to book:"<<endl;
        cin>>year;
        cout<<"Enter an alphabet for booking time(must small alphabet):"<<endl;
        cin>>alphClass;
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"This is your booking receipt : "<<endl<<endl;

if(alphClass>=97&&alphClass<=101)
    {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tCR1"<<endl;
      switch (alphClass)
      {
          case 'a':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[0]<<endl; //code1+code2
            break;
          case 'b':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[1]<<endl;
            break;
          case 'c':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[2]<<endl;
            break;
          case 'd':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[3]<<endl;
            break;
          case 'e':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[4]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
else if(alphClass>=102&&alphClass<=106)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tCR2"<<endl;
      switch (alphClass)
       {
          case 'f':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[5]<<endl;
            break;
          case 'g':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[6]<<endl;
            break;
          case 'h':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[7]<<endl;
            break;
          case 'i':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[8]<<endl;
            break;
          case 'j':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[9]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else if(alphClass>=107&&alphClass<=111)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tCR3"<<endl;
      switch (alphClass)
       {
          case 'k':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[10]<<endl;
            break;
          case 'l':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[11]<<endl;
            break;
          case 'm':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[12]<<endl;
            break;
          case 'n':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[13]<<endl;
            break;
          case 'o':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeClass+timee[14]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else
   {
      cout<<endl;
  }

}

void examHall1() //information for booking exam hall
{
    string name,email;
    char alphClass;
    int pNum,date,mm,year;
    int codeHall=2000; //code1
    int timee[15]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}; //code2


        cout<<"Before booking the room, please fill up the information:"<<endl;
        cout<<"Please enter your name: "<<endl;
        cin>>name;
        cout<<"Please enter your e-mail: "<<endl;
        cin>>email;
        cout<<"Please enter your phone number(+60xxxxx): "<<endl;
        cin>>pNum;
        cout<<"Enter which date you want to book:"<<endl;
        cin>>date;
        cout<<"Enter which month you want to book:"<<endl;
        cin>>mm;
        cout<<"Enter which year you want to book:"<<endl;
        cin>>year;
        cout<<"Enter an alphabet for booking time(must small alphabet):"<<endl;
        cin>>alphClass;
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"This is your booking receipt : "<<endl<<endl;

if(alphClass>=97&&alphClass<=101)
    {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tEH1"<<endl;
      switch (alphClass)
      {
          case 'a':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[0]<<endl; //code1+code2
            break;
          case 'b':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[1]<<endl;
            break;
          case 'c':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[2]<<endl;
            break;
          case 'd':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[3]<<endl;
            break;
          case 'e':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[4]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
else if(alphClass>=102&&alphClass<=106)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tEH2"<<endl;
      switch (alphClass)
       {
          case 'f':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[5]<<endl;
            break;
          case 'g':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[6]<<endl;
            break;
          case 'h':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[7]<<endl;
            break;
          case 'i':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[8]<<endl;
            break;
          case 'j':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[9]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else if(alphClass>=107&&alphClass<=111)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tEH3"<<endl;
      switch (alphClass)
       {
          case 'k':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[10]<<endl;
            break;
          case 'l':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[11]<<endl;
            break;
          case 'm':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[12]<<endl;
            break;
          case 'n':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[13]<<endl;
            break;
          case 'o':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeHall+timee[14]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else
   {
      cout<<endl;
  }


}

void audioT1() //information for booking auditorium
{
    string name,email;
    char alphClass;
    int pNum,date,mm,year;
    int codeAudio=3000; //code1
    int timee[10]={97,98,99,100,101,102,103,104,105,106}; //code2

        cout<<"Before booking the room, please fill up the information:"<<endl;
        cout<<"Please enter your name: "<<endl;
        cin>>name;
        cout<<"Please enter your e-mail: "<<endl;
        cin>>email;
        cout<<"Please enter your phone number(+60xxxxx): "<<endl;
        cin>>pNum;
        cout<<"Enter which date you want to book:"<<endl;
        cin>>date;
        cout<<"Enter which month you want to book:"<<endl;
        cin>>mm;
        cout<<"Enter which year you want to book:"<<endl;
        cin>>year;
        cout<<"Enter an alphabet for booking time(must small alphabet):"<<endl;
        cin>>alphClass;
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"This is your booking receipt : "<<endl<<endl;

if(alphClass>=97&&alphClass<=101)
    {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tAT1"<<endl;
      switch (alphClass)
      {
          case 'a':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[0]<<endl; //code1+code2
            break;
          case 'b':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[1]<<endl;
            break;
          case 'c':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[2]<<endl;
            break;
          case 'd':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[3]<<endl;
            break;
          case 'e':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[4]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
else if(alphClass>=102&&alphClass<=106)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tAT2"<<endl;
      switch (alphClass)
       {
          case 'f':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[5]<<endl;
            break;
          case 'g':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[6]<<endl;
            break;
          case 'h':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[7]<<endl;
            break;
          case 'i':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[8]<<endl;
            break;
          case 'j':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeAudio+timee[9]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else
   {
      cout<<endl;
  }


}

void meetingR1() //information for booking meeting room
{
    string name,email;
    char alphClass;
    int pNum,date,mm,year;
    int codeMee=4000; //code1
    int timee[15]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}; //code2

        cout<<"Before booking the room, please fill up the information:"<<endl;
        cout<<"Please enter your name: "<<endl;
        cin>>name;
        cout<<"Please enter your e-mail: "<<endl;
        cin>>email;
        cout<<"Please enter your phone number(+60xxxxx): "<<endl;
        cin>>pNum;
        cout<<"Enter which date you want to book:"<<endl;
        cin>>date;
        cout<<"Enter which month you want to book:"<<endl;
        cin>>mm;
        cout<<"Enter which year you want to book:"<<endl;
        cin>>year;
        cout<<"Enter an alphabet for booking time(must small alphabet):"<<endl;
        cin>>alphClass;
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"This is your booking receipt : "<<endl<<endl;

if(alphClass>=97&&alphClass<=101)
    {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tMR1"<<endl;
      switch (alphClass)
      {
          case 'a':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[0]<<endl; //code1+code2
            break;
          case 'b':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[1]<<endl;
            break;
          case 'c':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[2]<<endl;
            break;
          case 'd':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[3]<<endl;
            break;
          case 'e':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[4]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
else if(alphClass>=102&&alphClass<=106)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tMR2"<<endl;
      switch (alphClass)
       {
          case 'f':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[5]<<endl;
            break;
          case 'g':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[6]<<endl;
            break;
          case 'h':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[7]<<endl;
            break;
          case 'i':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[8]<<endl;
            break;
          case 'j':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[9]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else if(alphClass>=107&&alphClass<=111)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tMR3"<<endl;
      switch (alphClass)
       {
          case 'k':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[10]<<endl;
            break;
          case 'l':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[11]<<endl;
            break;
          case 'm':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[12]<<endl;
            break;
          case 'n':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[13]<<endl;
            break;
          case 'o':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeMee+timee[14]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else
   {
      cout<<endl;
  }
}

void computerLab() //information for booking computer lab
{
    string name,email;
    char alphClass;
    int pNum,date,mm,year;
    int codeCom=5000; //code1
    int timee[15]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}; //code2

        cout<<"Before booking the room, please fill up the information:"<<endl;
        cout<<"Please enter your name: "<<endl;
        cin>>name;
        cout<<"Please enter your e-mail: "<<endl;
        cin>>email;
        cout<<"Please enter your phone number(+60xxxxx): "<<endl;
        cin>>pNum;
        cout<<"Enter which date you want to book:"<<endl;
        cin>>date;
        cout<<"Enter which month you want to book:"<<endl;
        cin>>mm;
        cout<<"Enter which year you want to book:"<<endl;
        cin>>year;
        cout<<"Enter an alphabet for booking time(must small alphabet):"<<endl;
        cin>>alphClass;
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"This is your booking receipt : "<<endl<<endl;

if(alphClass>=97&&alphClass<=101)
    {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tCL1"<<endl;
      switch (alphClass)
      {
          case 'a':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[0]<<endl; //code1+code2
            break;
          case 'b':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[1]<<endl;
            break;
          case 'c':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[2]<<endl;
            break;
          case 'd':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[3]<<endl;
            break;
          case 'e':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[4]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
else if(alphClass>=102&&alphClass<=106)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tCL2"<<endl;
      switch (alphClass)
       {
          case 'f':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[5]<<endl;
            break;
          case 'g':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[6]<<endl;
            break;
          case 'h':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[7]<<endl;
            break;
          case 'i':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[8]<<endl;
            break;
          case 'j':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[9]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else if(alphClass>=107&&alphClass<=111)
   {
      cout<<"\tName:\t\t\t"<<name<<endl;
      cout<<"\tPhone Number:\t\t"<<pNum<<endl;
      cout<<"\tE-mail:\t\t\t"<<email<<endl;
      cout<<"\tRoom:\t\t\tCL3"<<endl;
      switch (alphClass)
       {
          case 'k':
            cout<<"\tTime:\t\t\t9am-11am"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[10]<<endl;
            break;
          case 'l':
            cout<<"\tTime:\t\t\t11am-13pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[11]<<endl;
            break;
          case 'm':
            cout<<"\tTime:\t\t\t13pm-15pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[12]<<endl;
            break;
          case 'n':
            cout<<"\tTime:\t\t\t15pm-17pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[13]<<endl;
            break;
          case 'o':
            cout<<"\tTime:\t\t\t17pm-19pm"<<endl;
            cout<<"\tDate:\t\t\t"<<date<<" / "<<mm<<" / "<<year<<endl;
            cout<<"\tCode:\t\t\t"<<codeCom+timee[14]<<endl;
            break;
          default:
            cout<<"Sorry,this time not available";
      }
   }
   else
   {
      cout<<endl;
  }
}


void classDetail() //classroom time table for search keywords
{
        cout<<"\t-------------------------"<<endl;
        cout<<"\tUNIMY have 3 classroom: "<<endl;
        cout<<"\tA )CR1\n"<<"\tB )CR2\n"<<"\tC )CR3"<<endl;
        cout<<"\t-------------------------"<<endl<<endl;
         cout<<"\tA )CR1\t\tB )CR2\t\tC )CR3"<<endl;
        cout<<"\t---------------------------------------------------------------------"<<endl;
        cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
        cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
        cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
        cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
        cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl<<endl;
        cout<<"If want to book /search other please exit and run again the code yaa~"<<endl;
}

void ehDetail() //exam hall time table for search keywords
{
        cout<<"\t-------------------------"<<endl;
        cout<<"\tUNIMY have 3 exam hall: "<<endl;
        cout<<"\tA )EH1\n"<<"\tB )EH2\n"<<"\tC )EH3"<<endl;
        cout<<"\t-------------------------"<<endl<<endl;
        cout<<"\tA )EH1\t\tB )EH2\t\tC )EH3"<<endl;
        cout<<"\t---------------------------------------------------------------------"<<endl;
        cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
        cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
        cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
        cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
        cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl<<endl;
        cout<<"If want to book /search other please exit and run again the code yaa~"<<endl;
}

void atDetail() //auditorium time table for search keywords
{
        cout<<"\t-------------------------"<<endl;
        cout<<"\tUNIMY have 2 auditorium: "<<endl;
        cout<<"\tA )AT1\n"<<"\tB )AT2\n"<<endl;
        cout<<"\t-------------------------"<<endl;
        cout<<"\tA )AT1\t\tB )AT2\n"<<endl;
        cout<<"\t-------------------------------------------------"<<endl;
        cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<endl;
        cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<endl;
        cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<endl;
        cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<endl;
        cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<endl<<endl;
        cout<<"If want to book /search other please exit and run again the code yaa~"<<endl;
}

void mrDetail() //meeting room time table for search keywords
{
        cout<<"\t-------------------------"<<endl;
        cout<<"\tUNIMY have 3 meeting room: "<<endl;
        cout<<"\tA )MR1\n"<<"\tB )MR2\n"<<"\tC )MR3"<<endl;
        cout<<"\t-------------------------"<<endl;
        cout<<"\tA )MR1\t\tB )MR2\t\tC )MR3"<<endl;
        cout<<"\t---------------------------------------------------------------------"<<endl;
        cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
        cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
        cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
        cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
        cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl<<endl;
        cout<<"If want to book /search other please exit and run again the code yaa~"<<endl;
}

void clabDetail() //computer lab time table for search keywords
{
        cout<<"\t-------------------------"<<endl;
        cout<<"\tUNIMY have 3 Computer Lab: "<<endl;
        cout<<"\tA )CL1\n"<<"\tB )CL2\n"<<"\tC )CL3"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"\tA )CL1\t\tB )CL2\t\tC )CL3"<<endl;
         cout<<"\t---------------------------------------------------------------------"<<endl;
        cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
        cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
        cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
        cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
        cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl<<endl;
        cout<<"If want to book /search other please exit and run again the code yaa~"<<endl;
}



int main( )
{

    string name,email,ss;//user information
    int pNum,date,mm,year,code,ii;//user information
    int cR=1000;//code1
    int eH=2000;
    int aO=3000;
    int mR=4000;
    int coC=5000;

    char alphClass,alphHall,alphAudio,alphMee,alphCc;//time
    int num1,numOfRoom,edit,edit2,db;//selection of menu
    int cRoom,cHall,cAudio,cMee,cC;//name of room


//keyword for search
string classroom[10]={"cr1","cr2","cr3","class","classr","classro","classroo","classroom","room","class room"};
string examHall[7]={"exam","hall","examhall","exam hall","eh1","eh2","eh3"};
string auditorium[7]={"auditorium","auditoria","assembly hall","assemblyhall","at1","at2","audio"};
string meetingRoom[7]={"meeting","meet","meeting room","meetingroom","mr1","mr2","mr3"};
string computerLabb[9]={"computer","lab","computerlab","computer lab","comlab","lab","cl1","cl2","cl3"};

start:
     theShape();
     menu();


cout<<" Please enter a number to continue ~"<<flush<<endl;
cin>>num1;
 switch(num1) //number choose selection in menu
 {
   case 1: //user choose 1, booking room
    cout<<"Types of room: "<<endl;
    cout<<"1 )Classroom\n"<<"2 )Exam Hall\n"<<"3 )Auditorium\n"<<"4 )Meeting Room\n"<<"5 )Computer Lab\n"<<"6 )Exit"<<endl;
    cout<<"Please enter a number ~"<<endl;
    cin>>numOfRoom;
    break;
   case 2: // user choose 2, edit booking
    cout<<"1 )Change Booking\n"<<"2 )Delete Booking\n"<<"3 )Exit"<<endl;
    cout<<"Please enter a number ~ "<<endl;
    cin>>edit;
    break;
    search:
   case 3: //user choose 3, search room
    cout<<"Please enter the small alphabet of word for searching "<<endl;
    cin>>ss;
    break;
   default: //exit, bye!
    cout<<"Bye bye2"<<endl;
  }

    if(numOfRoom==1)//selection 1,print classroom
    {
        cout<<"-------------------------"<<endl;
        cout<<"UNIMY have 3 classroom: "<<endl;
        cout<<"A )CR1\n"<<"B )CR2\n"<<"C )CR3"<<endl<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"1)Continue book\n"<<"2)Exit"<<endl;
        cout<<"Please enter a number: "<<endl;
        cin>>cRoom;

            if(cRoom==1) // user choose 1, continue book, print information for booking
            {
                cout<<"[Time Table] :"<<endl<<endl;
                cout<<"\tCR1\t\tCR2\t\tCR3"<<endl;
                cout<<"\t----------------------------------------"<<endl;
                cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
                cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
                cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
                cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
                cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl;
                classroom1(); // information for booking classroom
               cout<<"If want to edit / change booking information please enter  [1] ,  delete booking please enter [2] ,  exit please enter [3]"<<endl;
               cin>>ii;
                if(ii==1)
                {
                    goto editt; //go to edit
                }
                else if(ii==2)
                {
                   goto deletee; // go to delete
                }
                else //bye
                {
                     cout<<"Bye bye~"<<endl;
                }
            }

            else // user choose 2,exit
            {
                system("cls");
                goto start;
            }
    }

    else if(numOfRoom==2)//selection 2,print exam hall
    {
        cout<<"-------------------------"<<endl;
        cout<<"UNIMY have 3 exam hall: "<<endl;
        cout<<"A )EH1\n"<<"B )EH2\n"<<"C )EH3"<<endl<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"1)Continue book\n"<<"2)Exit"<<endl;
        cout<<"Please enter a number: "<<endl;
        cin>>cHall;
             if(cHall==1) // user choose 1, continue booking, print booking information
              {
                cout<<"[Time Table] :"<<endl<<endl;
                cout<<"\tEH1\t\tEH2\t\tEH3"<<endl;
                cout<<"\t----------------------------------------"<<endl;
                cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
                cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
                cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
                cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
                cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl;

                examHall1(); // information for booking exam hall
                cout<<"If want to edit / change booking information please enter  [1] ,  delete booking please enter [2] ,  exit please enter [3]"<<endl;
                cin>>ii;
                        if(ii==1) // user choose edit booking
                        {
                            goto editt; //go to edit part
                        }
                        else if(ii==2) // user choose delete booking
                        {
                           goto deletee; // go to delete
                        }
                        else{
                             cout<<"Bye bye~"<<endl;
                        }
                 }
            else // user choose 2, exit
            {
                 system("cls");
                    goto start; // go to menu
            }

    }

    else if(numOfRoom==3)//selection 3, print auditorium
    {
        cout<<"-------------------------"<<endl;
        cout<<"UNIMY have 2 auditorium: "<<endl;
        cout<<"A )AT1\n"<<"B )AT2\n"<<endl<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"1)Continue book\n"<<"2)Exit"<<endl;
        cout<<"Please enter a number: "<<endl;
        cin>>cAudio;

            if(cAudio==1) // user choose 1, continue booking, print information to book
            {
                cout<<"[Time Table] :"<<endl<<endl;
                cout<<"\tAT1\t\tAT2"<<endl;
                cout<<"\t---------------------------"<<endl;
                cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<endl;
                cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<endl;
                cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<endl;
                cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<endl;
                cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<endl;

            audioT1(); // information for booking auditorium
            cout<<"If want to edit / change booking information please enter  [1] ,  delete booking please enter [2] ,  exit please enter [3]"<<endl;
            cin>>ii;
                if(ii==1) // user choose edit
                {
                    goto editt; // go to edit part
                }
                else if(ii==2) // user choose delete
                {
                   goto deletee; //go to delete part
                }
                else{
                     cout<<"Bye bye~"<<endl;
                }
             }
            else //choose exit
            {
               system("cls");
                goto start; //go to menu
            }
    }

    else if(numOfRoom==4)//selection 4, print meeting room
    {
        cout<<"-------------------------"<<endl;
        cout<<"UNIMY have 3 meeting room: "<<endl;
        cout<<"A )MR1\n"<<"B )MR2\n"<<"C )MR3"<<endl<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"1)Continue book\n"<<"2)Exit"<<endl;
        cout<<"Please enter a number: "<<endl;
        cin>>cMee;
             if(cMee==1) // user choose 1, continue book, print information
             {
                cout<<"[Time Table] :"<<endl<<endl;
                cout<<"\tMR1\t\tMR2\t\tMR3"<<endl;
                cout<<"\t----------------------------------------"<<endl;
                cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
                cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
                cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
                cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
                cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl;

                meetingR1(); // information for booking meeting room
                cout<<"If want to edit / change booking information please enter  [1] ,  delete booking please enter [2] ,  exit please enter [3]"<<endl;
                cin>>ii;
                    if(ii==1) // user choose edit
                    {
                        goto editt; // go to edit part
                    }
                    else if(ii==2) // user choose delete
                    {
                       goto deletee; // go to edit
                    }
                    else
                    {
                        cout<<"Bye bye~"<<endl;
                    }

             }
            else // user choose exit
             {
                system("cls");
                goto start; // go to menu
             }
    }

    else if(numOfRoom==5)//selection 5,print computer lab
    {
        cout<<"-------------------------"<<endl;
        cout<<"UNIMY have 3 Computer Lab: "<<endl;
        cout<<"A )CL1\n"<<"B )CL2\n"<<"C )CL3"<<endl<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"1)Continue book\n"<<"2)Exit"<<endl;
        cout<<"Please enter a number: "<<endl;
        cin>>cC;
             if(cC==1) // user choose 1, continue book, print information
             {
                    cout<<"[Time Table] :"<<endl<<endl;
                    cout<<"\tCL1\t\tCL2\t\tCL3"<<endl;
                    cout<<"\t----------------------------------------"<<endl;
                    cout<<"\ta)9am-11am"<<"\tf)9am-11am"<<"\tk)9am-11am"<<endl;
                    cout<<"\tb)11am-13pm"<<"\tg)11am-13pm"<<"\tl)11am-13pm"<<endl;
                    cout<<"\tc)13pm-15pm"<<"\th)13pm-15pm"<<"\tm)13pm-15pm"<<endl;
                    cout<<"\td)15pm-17pm"<<"\ti)15pm-17pm"<<"\tn)15pm-17pm"<<endl;
                    cout<<"\te)17pm-19pm"<<"\tj)17pm-19pm"<<"\to)17pm-19pm"<<endl;

                    computerLab(); // information for booking computer lab
                    cout<<"If want to edit / change booking information please enter  [1] ,  delete booking please enter [2] ,  exit please enter [3]"<<endl;
                    cin>>ii;
                        if(ii==1) //user choose edit
                        {
                            goto editt; // go to edit
                        }
                        else if(ii==2) // user choose delete
                        {
                           goto deletee; // go to delete
                        }
                        else
                        {
                            cout<<"Bye bye~"<<endl;
                        }
                }
            else // user choose exit
            {
             system("cls");
             goto start; // go to menu
            }
    }

//---------------------------------------------------------------------------------------------------
    else if(edit==1)//edit room~~~
    {
        editt:  //edit part
    cout<<"\n Please enter your code:"<<endl;
    cin>>code;
            if(code>=1097&&code<=1111) //code1+code2
             {
                cout<<" Edit your booking information of same room please enter [1] ~"<<endl;
                cout<<" Changing your booking room please enter [2] ~"<<endl;
                cin>>edit2;
                        if (edit2==1) //edit booking of same room
                         {
                            classroom1(); //fill again information booking classroom
                         }
                        else if (edit2==2) // change booking room
                         {
                            cout<<"Types of room: "<<endl;
                            cout<<"1 )Classroom\n"<<"2 )Exam Hall\n"<<"3 )Auditorium\n"<<"4 )Meeting Room\n"<<"5 )Computer Lab\n"<<"6 )Exit"<<endl;
                            cout<<"Please enter a number to continue~"<<endl;
                            cin>>numOfRoom;
                                    switch (numOfRoom)
                                            {
                                                case 1:
                                                    classroom1(); //fill again information booking classroom
                                                    break;
                                                case 2:
                                                    examHall1(); // fill again information booking exam hall
                                                    break;
                                                case 3:
                                                    audioT1(); // fill again information booking auditorium
                                                    break;
                                                case 4:
                                                    meetingR1(); // fill again information booking meeting room
                                                    break;
                                                case 5:
                                                    computerLab(); // fill again information computer lab
                                                case 6:
                                                     system("cls");
                                                    goto start; //go to menu
                                                default:
                                                    cout<<" "<<endl;
                                              }
                                        }
                        else
                            {
                                cout<<"Sorry, no result..."<<endl;
                                }

                }
            else if(code>=2097&&code<=2111)
            {
                    cout<<" Edit your booking information of same room please enter [1] ~"<<endl;
                    cout<<" Changing your booking room please enter [2] ~"<<endl;
                    cin>>edit2;
                                if (edit2==1)
                                {
                                    examHall1();
                                }
                                else if (edit2==2)
                                {
                                        cout<<"Types of room: "<<endl;
                                        cout<<"1 )Classroom\n"<<"2 )Exam Hall\n"<<"3 )Auditorium\n"<<"4 )Meeting Room\n"<<"5 )Computer Lab\n"<<"6 )Exit"<<endl;
                                        cout<<"Please enter a number to continue~"<<endl;
                                        cin>>numOfRoom;
                                            switch (numOfRoom)
                                            {
                                                case 1:
                                                    classroom1();
                                                    break;
                                                case 2:
                                                    examHall1();
                                                    break;
                                                case 3:
                                                    audioT1();
                                                    break;
                                                case 4:
                                                    meetingR1();
                                                    break;
                                                case 5:
                                                    computerLab();
                                                case 6:
                                                     system("cls");
                                                    goto start;
                                                default:
                                                    cout<<endl;
                                            }
                                    }
                                else
                                {
                                    cout<<"Sorry, no result..."<<endl;
                                }

                }
            else  if(code>=3097&&code<=3106)
            {
                        cout<<" Edit your booking information of same room please enter [1] ~"<<endl;
                        cout<<" Changing your booking room please enter [2] ~"<<endl;
                        cin>>edit2;
                                if (edit2==1)
                                {
                                    audioT1();
                                }
                                else if (edit2==2)
                                {
                                        cout<<"Types of room: "<<endl;
                                        cout<<"1 )Classroom\n"<<"2 )Exam Hall\n"<<"3 )Auditorium\n"<<"4 )Meeting Room\n"<<"5 )Computer Lab\n"<<"6 )Exit"<<endl;
                                        cout<<"Please enter a number to continue~"<<endl;
                                        cin>>numOfRoom;
                                            switch (numOfRoom)
                                            {
                                                case 1:
                                                    classroom1();
                                                    break;
                                                case 2:
                                                    examHall1();
                                                    break;
                                                case 3:
                                                    audioT1();
                                                    break;
                                                case 4:
                                                    meetingR1();
                                                    break;
                                                case 5:
                                                    computerLab();
                                                case 6:
                                                     system("cls");
                                                    goto start;
                                                default:
                                                    cout<<endl;
                                            }
                                }
                                else
                                {
                                    cout<<"No Result..."<<endl;
                                }
            }
            else  if(code>=4097&&code<=4111)
            {
                            cout<<" Edit your booking information of same room please enter [1] ~"<<endl;
                            cout<<" Changing your booking room please enter [2] ~"<<endl;
                            cin>>edit2;
                                    if (edit2==1)
                                    {
                                            meetingR1();
                                    }
                                    else if (edit2==2)
                                    {
                                            cout<<"Types of room: "<<endl;
                                            cout<<"1 )Classroom\n"<<"2 )Exam Hall\n"<<"3 )Auditorium\n"<<"4 )Meeting Room\n"<<"5 )Computer Lab\n"<<"6 )Exit"<<endl;
                                            cout<<"Please enter a number to continue~"<<endl;
                                            cin>>numOfRoom;
                                            switch (numOfRoom)
                                            {
                                                case 1:
                                                    classroom1();
                                                    break;
                                                case 2:
                                                    examHall1();
                                                    break;
                                                case 3:
                                                    audioT1();
                                                    break;
                                                case 4:
                                                    meetingR1();
                                                    break;
                                                case 5:
                                                    computerLab();
                                                case 6:
                                                     system("cls");
                                                    goto start;
                                                default:
                                                    cout<<endl;
                                            }
                                    }
                                    else{
                                        cout<<"No result..."<<endl;
                                        }

            }
            else  if(code>=5097&&code<=5111)
            {
                        cout<<" Edit your booking information of same room please enter [1] ~"<<endl;
                        cout<<" Changing your booking room please enter [2] ~"<<endl;
                        cin>>edit2;
                                if (edit2==1)
                                {
                                        computerLab();
                                }
                                else if (edit2==2)
                                {
                                            cout<<"Types of room: "<<endl;
                                            cout<<"1 )Classroom\n"<<"2 )Exam Hall\n"<<"3 )Auditorium\n"<<"4 )Meeting Room\n"<<"5 )Computer Lab\n"<<"6 )Exit"<<endl;
                                            cout<<"Please enter a number to continue~"<<endl;
                                            cin>>numOfRoom;
                                            switch (numOfRoom)
                                            {
                                                case 1:
                                                    classroom1();
                                                    break;
                                                case 2:
                                                    examHall1();
                                                    break;
                                                case 3:
                                                    audioT1();
                                                    break;
                                                case 4:
                                                    meetingR1();
                                                    break;
                                                case 5:
                                                    computerLab();
                                                case 6:
                                                     system("cls");
                                                    goto start;
                                                default:
                                                    cout<<endl;
                                            }
                                }
                                else
                                {
                                        cout<<"No result..."<<endl;
                                }
            }
 }
    else if(edit==2)//delete room~~~
    {
        deletee:  // delete part
      cout<<"\nPlease enter your code:"<<endl;
     cin>>code;
                if(code>=1097&&code<=1111) //code1+code2
                {
                        cout<<"Confirm to delete booking please enter [1] "<<endl;
                        cout<<"Exit please enter [2] "<<endl;
                        cin>>db;
                                    if(db==1)
                                    {
                                        cout<<"Your booking is deleted by the system ~"<<endl;
                                    }
                                    else
                                    {
                                         system("cls");
                                         goto start; // go to menu
                                    }
                    }
                    else if(code>=2097&&code<=2111)
                    {
                        cout<<"Comfirm to delete booking please enter [1] "<<endl;
                        cout<<"Exit please enter [2] "<<endl;
                        cin>>db;
                                    if(db==1)
                                    {
                                        cout<<"Your booking is deleted by the system ~"<<endl;
                                    }
                                    else
                                    {
                                         system("cls");
                                            goto start; // go to menu
                                    }
                        }
                     else if(code>=3097&&code<=3106)
                        {
                            cout<<"Comfirm to delete booking please enter [1] "<<endl;
                            cout<<"Exit please enter [2] "<<endl;
                            cin>>db;
                                    if(db==1)
                                    {
                                        cout<<"Your booking is deleted by the system ~"<<endl;
                                    }
                                    else
                                    {
                                         system("cls");
                                        goto start; // go to menu
                                    }
                        }
                    else if(code>=4097&&code<=4111)
                        {
                                cout<<"Comfirm to delete booking please enter [1] "<<endl;
                                cout<<"Exit please enter [2] "<<endl;
                                cin>>db;
                                        if(db==1)
                                        {
                                            cout<<"Your booking is deleted by the system ~"<<endl;
                                        }
                                        else
                                        {
                                           system("cls");
                                            goto start; // go to menu
                                        }
                        }
                        else if(code>=5097&&code<=5111)
                        {
                                cout<<"Comfirm to delete booking please enter [1] "<<endl;
                                cout<<"Exit please enter [2] "<<endl;
                                cin>>db;
                                        if(db==1)
                                        {
                                            cout<<"Your booking is deleted by the system ~"<<endl;
                                        }
                                        else
                                        {
                                            system("cls");
                                                goto start; // go to menu
                                        }
                        }
}

//--------------------------------------------------------------------------------------
//search
    else if(ss==classroom[0]||ss==classroom[1]||ss==classroom[2]||ss==classroom[3]||ss==classroom[4]||ss==classroom[5]||ss==classroom[6]||ss==classroom[7]||ss==classroom[8]||ss==classroom[9])
       {
           cout<<"Result of "<<ss<<":"<<endl;
           classDetail(); // classroom time table


       }
       else if(ss==examHall[0]||ss==examHall[1]||ss==examHall[2]||ss==examHall[3]||ss==examHall[4]||ss==examHall[5]||ss==examHall[6])
       {
           cout<<"Result of "<<ss<<":"<<endl;
           ehDetail(); // exam hall time table
       }
       else if(ss==auditorium[0]||ss==auditorium[1]||ss==auditorium[2]||ss==auditorium[3]||ss==auditorium[4]||ss==auditorium[5]||ss==auditorium[6])
       {
           cout<<"Result of "<<ss<<":"<<endl;
           atDetail(); // auditorium time table
       }
       else if(ss==meetingRoom[0]||ss==meetingRoom[1]||ss==meetingRoom[2]||ss==meetingRoom[3]||ss==meetingRoom[4]||ss==meetingRoom[5]||ss==meetingRoom[6])
       {
           cout<<"Result of "<<ss<<":"<<endl;
           mrDetail(); // meeting room time table
       }
       else if(ss==computerLabb[0]||ss==computerLabb[1]||ss==computerLabb[2]||ss==computerLabb[3]||ss==computerLabb[4]||ss==computerLabb[5]||ss==computerLabb[6]||ss==computerLabb[7]||ss==computerLabb[8])
       {
           cout<<"Result of "<<ss<<":"<<endl;
           clabDetail(); // computer lab time table
       }
//--------------------------------------------------------------------------------------

    else
    {
    cout<<"Sorry, no result...\nBye bye"<<endl;
    }



    return 0;
}
