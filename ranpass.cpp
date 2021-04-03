#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
int psuedorand(int a)
{
    long p= time(0);
    int q=(p%10)+(a+12+87+9)*87;
    q=q*q*a*a;
    return q;
}
void intro()
{
    cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t WELCOME TO RANDOM PASSWORD GENERATOR"<<endl<<"\t\t\t--------------------------------------"<<"\n";
    cout<<"\n\n    1 ) PRESS 1 TO GENERATE EASY PASSWORD    | 2) PRESS 2 TO GENERATE  MEDIUM PASSWORD   | 3) PRESS 3 TO GENERATE DIFFICULT PASSWORD ";
    cout<<"\n\n\n    ENTER TYPE OF PASSWORD YOU WANT TO BUILD (1-3) : ";
}
int main()
{
    char ch='Y';
    do{
    system("cls");
    while(true){
    system("cls");
    intro();
    string a="QW56ER@#AS!@#$%DF_^0&-*1ZX(!)@#$CVBG27T8)@Y-UH$3%N*M+!@J9I4@!4K~L5OPpo6ilkjhu7ytgfv8cbn9mvzcxda012_sfrw-e34qtyu!@#$%&*()/*+~";
    string b="";
    string c="qazxswedcvfrtgbnhyujmkiolp";
    string d="PLMKOIJNBHUYGVCFTRDXZSEWQA";
    string e="@YU-H$-3-%N*M_+!@J_!)@-#$C_VBG27T8)ER@#-_AS!@#$9I4@!4K~_L5OPpoQ-W56_-%DF^0&*1ZX(_yu!@#$%&*()/_*+~6ilkj_h-u7ytgfv_8cb012sfrwe34qtn9mvzcxda";
    string f="Q0-Z!?<W1-X@E?2C#R3_V$T4B<%Y-5N^U6M{&I7L*O8K_(P9}J)L0_HK-1}~GJ2!FH3@DG4#SF5$AD6%QS7^WA8&EZ9*RXC*TVB)YNM+UIOP";
    string g="~a?Qd>0<w5W|6c)R7x*1&t4E^e3%$2wT6#h@9!i8Y~4p!@0mU2#b3$%tI4^7y&9*w8J(4g1_+v2P5{3n6}<k44C>h?6TfOPcL4MxHY6o4IUp";
    int l;
    cin>>l;
    cout<<"\n\n\t\t\tGENERATING /...";
    _sleep(2000);
    if(l==1)
    {
    int z=15;
    for(int i=1;i<=z;i++)
    {
    if(i==1)
    {
        unsigned int r=psuedorand(i*i*i);
        r=r%c.length();
        b=b+c.at(r);
    }
    else if(i==z)
    {

        unsigned int r=psuedorand(i*i*i);
        r=r%d.length();
        b=b+d.at(r);
    }
    else
    {
        int choice= psuedorand((i+357)*(i+921)*(i+747));
        choice=choice%4;
        if(choice<0)
        {
            choice*=-1;
        }
        choice=choice+1;
        switch(choice)
        {
        case 1:
            {
                unsigned int r=psuedorand((i+1)*(i+6)*(i+9));
                r=r%a.length();
                b=b+a.at(r);
                break;
            }
        case 2:
            {
                unsigned int r=psuedorand((i+8)*(i+3)*(i+5));
                r=r%e.length();
                b=b+e.at(r);
                break;
            }
        case 3:
            {
                unsigned int r=psuedorand((i+3)*(i+7)*(i+4));
                r=r%f.length();
                b=b+f.at(r);
                break;
            }
        case 4:
            {
                unsigned int r=psuedorand((i+7)*(i+2)*(i+7));
                r=r%g.length();
                b=b+g.at(r);
                break;
            }
        }
    }
    }
    cout<<"\n\n";
    cout<<endl<<"                               -------------------"<<endl<<"    GENERATED PASSWORD IS :    | "<<b<<" |"<<endl<<"                               -------------------";
    break;
    }
    else if(l==2)
    {
        for(int i=1;i<=25;i++)
    {
    if(i==1)
    {
        unsigned int r=psuedorand(i*i*i);
        r=r%c.length();
        b=b+c.at(r);
    }
    else if(i==25)
    {
        unsigned int r=psuedorand(i*i*i);
        r=r%d.length();
        b=b+d.at(r);
    }
    else
    {
        int choice= psuedorand((i+1)*(i+9)*(i+7));
        choice=choice%4;
        if(choice<0)
        {
            choice*=-1;
        }
        choice=choice+1;
        switch(choice)
        {
        case 1:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%a.length();
                b=b+a.at(r);
                break;
            }
        case 2:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%e.length();
                b=b+e.at(r);
                break;
            }
        case 3:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%f.length();
                b=b+f.at(r);
                break;
            }
        case 4:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%g.length();
                b=b+g.at(r);
                break;
            }
        }
    }
    }
    cout<<"\n\n";
    cout<<endl<<"                               -----------------------------"<<endl<<"    GENERATED PASSWORD IS :    | "<<b<<" |"<<endl<<"                               -----------------------------";
    break;
    }
    else if(l==3)
    {
    for(int i=1;i<=32;i++)
    {
    if(i==1)
    {
        unsigned int r=psuedorand(i*i*i);
        r=r%c.length();
        b=b+c.at(r);
    }
    else if(i==32)
    {
        unsigned int r=psuedorand(i*i*i);
        r=r%d.length();
        b=b+d.at(r);
    }
    else
    {
        int choice= psuedorand((i+1)*(i+9)*(i+7));
        choice=choice%4;
        if(choice<0)
        {
            choice*=-1;
        }
        choice=choice+1;
        switch(choice)
        {

        case 1:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%a.length();
                b=b+a.at(r);
                break;
            }
        case 2:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%e.length();
                b=b+e.at(r);
                break;
            }
        case 3:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%f.length();
                b=b+f.at(r);
                break;
            }
        case 4:
            {
                unsigned int r=psuedorand(i*i*i);
                r=r%g.length();
                b=b+g.at(r);
                break;
            }
        }
    }
    }
    cout<<"\n\n";
    cout<<endl<<"                               ------------------------------------"<<endl<<"    GENERATED PASSWORD IS :    | "<<b<<" |"<<endl<<"                               ------------------------------------";
    break;
    }
    else
    {
        cout<<"\n\n     *****INVALID CHOICE*****";
         continue;
    }
    }
    cout<<"\n\n\n   DO YOU WISH TO GENERATE PASSWORD AGAIN (Y/N) : ";
    ch=_getch();
}
while(ch=='Y'||ch=='y');
system("cls");
cout<<"\n\n\n\t\t THANK YOU FOR USING PASSWORD GENERATOR "<<endl<<"\t\t --------------------------------------";
cout<<"\n\n\n\t\t PROJECT MADE BY :  DEEPAK GODIYAL "<<endl<<"\t\t-----------------";
cout<<"\n\n\t\t SECTION : A"<<endl<<"\t\t --------";
cout<<"\n\n\t\t UNIVERSITY : GRAPHIC ERA UNIVERSITY"<<endl<<"\t\t -----------";
cout<<"\n\n\t\t UNIVERSITY ROLL NUMBER : 2014627"<<endl<<"\t\t -----------------------";

cout<<"\n\n\n\n\n";
    return 0;
}
