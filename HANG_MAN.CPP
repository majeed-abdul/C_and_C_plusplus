#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<iostream>
//#include<graphics.h>
using namespace std;
void gotoxy(int,int);
int main ()
{
char in[10]="         ",p1[10]="         ",p2[10]="         ";
char word[16]="               ",wordm[16]="               ";
int nw=0,wro=0,found=0,counter;
//system("cls");
//int gd= DETECT,gm;
cout<<"\t\t\t\tHANGMAN";
gotoxy(5,3);
printf("Enter name of Player 1: ");
scanf("%s",in);
strcpy(p1,(strupr(in)));
gotoxy(5,4);
printf("Enter name of player 2: ");
scanf("%s",in);
strcpy(p2,(strupr(in)));
gotoxy(5,8);
printf("INSTRUCTIONS:");
gotoxy(5,9);
printf("Word limit is 3 to 15 Alphabets.");
gotoxy(5,25);
printf("Now press any key to contniue");
getch();
do
   {
   system("cls");
   gotoxy(5,1);
   printf("Now %s's turn",p1);
   gotoxy(5,3);
   printf("How many alphabets are in the word:");
   scanf("%d",&nw);
   }
   while((nw>=16)||(nw<=2));
gotoxy(5,5);
printf("Now enter that word:");
for(int c=1;c<=nw;c++)
   {
   word[c]=getch();
   printf("*");
   }
strcpy(word,(strupr(word)));
strcpy(wordm,word);
gotoxy(30,10);
printf("PLEASE WAIT");
//system("delay(999)");
system("cls");
//printf("p1=%s   p2=%s   word=%s    leters=%d",p1,p2,word,nw);
//initgraph(&gd,&gm,"C:\\TC\\BGI");
/*for(int l=1;l<=(16*nw);l=l+16)
   {
   line(29+l,240,40+l,240); UnderLineSpace
   }*/
for(int l=1;l<=nw;l++){
	gotoxy(3+(l*2),15);
	cout<<"*";
}
gotoxy(19,4);
printf("Now %s's turn",p2);
gotoxy(5,6);
printf("Wrong Ones");
gotoxy(5,8);
printf("Put the alphabets");/*
line(400,100,550,100);////////////////////////////////////////////////////
line(400,100,400,150);//                Hanger
line(550,100,550,400);//                      Graphics
line(420,400,600,400);///////////////////////////////////////////////////*/
gotoxy(50,5);
cout<<"     ____________";
gotoxy(50,6);
cout<<"     |          |";
gotoxy(50,7);
cout<<"                |";
gotoxy(50,8);
cout<<"                |";
gotoxy(50,9);
cout<<"                |";
gotoxy(50,10);
cout<<"                |";
gotoxy(50,11);
cout<<"                |";
gotoxy(50,12);
cout<<"                |";
gotoxy(50,13);
cout<<"                |";
gotoxy(50,14);
cout<<"                |";
gotoxy(50,15);
cout<<"                |";
gotoxy(50,16);
cout<<"                |";
gotoxy(50,17);
cout<<"                |";
gotoxy(50,18);
cout<<"                |";
gotoxy(50,19);
cout<<"                |";
gotoxy(50,20);
cout<<"                |";
gotoxy(50,21);
cout<<"                |";
gotoxy(50,22);
cout<<"   _____________|__";
engine:
switch (wro)
   {
   case 1:                    ////////////////////////////////////////////
	gotoxy(50,7);cout<<"  /\"\"\"\"\"\\";//circle(400,180,30);  head                     //
	gotoxy(50,8); cout<<" |       |";
	gotoxy(50,9); cout<<" |       |";
	gotoxy(50,10);cout<<"  ;     ;";
	gotoxy(50,11);cout<<"   '''''";
	break;                                    //
   case 2:                                        //
	gotoxy(50,12);cout<<"     |";//line(400,210,400,300);                    //
	gotoxy(50,13);cout<<"     |";
	gotoxy(50,14);cout<<"     |";
	gotoxy(50,15);cout<<"     |";
	gotoxy(50,16);cout<<"     |";
	gotoxy(50,17);cout<<"     |";
	break;                                    //
   case 3:                                        //
	gotoxy(50,18);cout<<"      \\";//line(400,300,440,360);                    // 
	gotoxy(50,19);cout<<"       \\";
	gotoxy(50,20);cout<<"        \\";
	break;                                    //
   case 4:                                        //
	//line(400,300,360,360);                    //
	gotoxy(50,18);cout<<"    /";
	gotoxy(50,19);cout<<"   /";
	gotoxy(50,20);cout<<"  /";
	break;                                    //
   case 5:       //                              Body
	//line(400,240,460,215); //              Graphycs   
	gotoxy(50,12);cout<<"     |-----";
	break;                                    //
   case 6:                                        //
	//line(400,240,340,215);                    //
	gotoxy(50,12);cout<<"-----";
	break;                                    //
   case 7:                                        // 
	gotoxy(53,8);cout<<"0";//circle(386,170,3);                        //
	break;                                    //
   case 8:                                        //
	gotoxy(57,8);cout<<"0";//circle(414,170,3);                        //
	break;                                    //
   case 9:                                        //
	gotoxy(55,9);cout<<"!";//ellipse(400,182,3,2,3,5);                 //
	break;                                           //
   }                         ///////////////////////////////////////////////                     
gotoxy(16,6);
printf(":");
in[0]=getch();
strcpy(in,(strupr(in)));
counter=0;
for(int c=1;c<=nw;c++)           //////////////////////////////////////////////
   {                                              //
   if(in[0]==word[c])                             //
      {                                           //
      gotoxy((3+(c*2)),15);                       //
      printf("%c",word[c]);                       //
      word[c]='~';                                //
      found++;                                    //
      counter=1;                                  //
      }                                           //
   }                                              //
if(counter!=1)                                    //
   {                                              //
   wro++; //                               Processing Engine
   gotoxy((14+(wro*2)),6);                        //
   printf(",%c. %d",in[0],wro);                   //
   }                                              //
if(wro>=10)                                       //
   {                                              //
   gotoxy(54,10);cout<<"~~~";//arc(400,220,55,124,25);                        //
   goto loos;                                     //
   }                                              //
if(found>=nw)                                     //
   {                                              //
   goto win;                                      //
   }                    //////////////////////////////////////////////////
goto engine;
win:
gotoxy(11,18);
printf("CONGERTULATIONS");
gotoxy(9,20);
printf("%s won the game",p2);
goto end;
loos:
gotoxy(5,14);
printf("The word was");
for(int c=1;c<=nw;c++)
   {
   gotoxy((3+(c*2)),15);
   printf("%c",wordm[c]);
   }
gotoxy(15,18);
printf("GAME OVER");
gotoxy(9,20);
printf("%s lose the game",p2);
end:
getch();
}
void gotoxy (int x, int y)
    {
         COORD coordinates;
         coordinates.X = x;
         coordinates.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }
