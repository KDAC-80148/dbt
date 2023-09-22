#include <iostream>
using namespace std;
struct date 
{
  int day;
  int month;
  int year;

void initDate()
{
    day = 15;
    month = 07;
    year = 1947;

}
void acceptDateFromConsole()
{
  cout<<"ENTER THE DAY"<<endl;
  cin>>day;
  cout<<"ENTER THE MONTH"<<endl;
  cin>>month;
  cout<<"ENTER THE YEAR \n";
  cin>>year;
}
void printDateOnConsole()
{
 cout<<day<<":"<<month<<":"<<year<<endl;
 }


bool isLeapYear()
{  bool status ;
  if (year % 100 == 0)
  {
    if (year % 400 == 0)
    {
      status = 1;
    }
   else {status = 0;}

  }
  else 
  {
    if(year % 4==0)
    {status = 1;}
    else {status = 0;}

  }
return status;}
};

int main ()
{ int x;
 struct date d1;
 d1.initDate();

 
    int choice;
  
 do{ 
    printf("ENTER YOUR  CHOICE \n");
    printf("1.Accept date 2.Print date 3.initdate 4.check for leap year 5.exit");
    scanf("%d",&choice);
  
      switch(choice)
     {  case 1: d1.acceptDateFromConsole();
        break;
        case 2: d1.printDateOnConsole();
        break;
        case 3: d1.initDate();
                d1.printDateOnConsole();
        break;
        case 4: if (d1.isLeapYear()) 
                cout<<"This is a leap year."<<endl;
                else 
                cout<<"This is not a leap year."<<endl;
              break;
        case 5:
        break;
        
    }
      

  }while(choice!=5);






  return 0;
}