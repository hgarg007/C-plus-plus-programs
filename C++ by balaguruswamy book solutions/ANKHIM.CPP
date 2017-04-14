#include<iostream.h>
#include<conio.h>
class time
{
int hours,minute;
public:
void getdata(int a,int b);
void putdata();
void sum(time t1,time t2);
};
void time::getdata(int a,int b)
{hours=a;
minute=b;
}
void time::putdata()
{cout<<hours<<minute;
}
void time::sum(time t1,time t2)
{minute =t1.minute+t2.minute;
hours=minute/60;
minute=minute%60;
hours=hours+t1.hours+t2.hours;
}
void main()
{
time t1,t2,t3;
t1.getdata(2,5);
t1.putdata();
t2.getdata(4,6);
t2.putdata();
t3.sum(t1,t2);
t3.putdata ();
getch();
}




