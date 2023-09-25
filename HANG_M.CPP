#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<iostream>
#include<graphics.h>
using namespace std;
void gotoxy (int x, int y)
initwindow(1351,705);
    {
         COORD coordinates;     // coordinates is declared as COORD
         coordinates.X = x;     // defining x-axis
         coordinates.Y = y;     //defining  y-axis
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }
int main ()
{
char in[10]="         ",p1[10]="         ",p2[10]="         ";
char word[16]="               ",wordm[16]="               ";
int nw=0,wro=0,found=0,counter;
system("cls");
//int gd= DETECT,gm;
cout<<"\t\t\t\t H A N G   M A N";
gotoxy(5,3);
cout<<"Enter name of Player 1: ";
cin>>in;
strcpy(p1,(strupr(in)));
gotoxy(5,4);
cout<<"Enter name of player 2: ";
cin>>in;
strcpy(p2,(strupr(in)));
gotoxy(5,8);
cout<<"INSTRUCTIONS:";
gotoxy(5,9);
cout<<"Word limit is 3 to 15 Alphabets.";
gotoxy(5,25);
cout<<"Now press any key to contniue";
getch();
do
   {
   system("cls");
   gotoxy(5,1);
   cout<<"Now "<<p1<<"'s turn";//printf("Now %s's turn",p1);
   gotoxy(5,3);
   cout<<"How many alphabets are in the word:";
   cin>>nw;//scanf("%d",&nw);
   }
   while((nw>=16)||(nw<=2));
gotoxy(5,5);
cout<<"Now enter that word: ";
for(int c=1;c<=nw;c++)
   {
   word[c]=getch();
   cout<<"*";//printf("*");
   }
strcpy(word,(strupr(word)));
strcpy(wordm,word);
gotoxy(30,10);
cout<<"PLEASE WAIT";//printf("PLEASE WAIT");
//delay(999);
system("cls");//clrscr();
//printf("p1=%s   p2=%s   word=%s    leters=%d",p1,p2,word,nw);
//initgraph(&gd,&gm,"C:\\TC\\BGI");
for(int l=1;l<=(16*nw);l=l+16)
   {
   line(29+l,240,40+l,240);
   }
gotoxy(19,4);
printf("Now %s's turn",p2);
gotoxy(5,6);
printf("Wrong Ones");
gotoxy(5,8);
printf("Put the alphabets");
line(400,100,550,100);////////////////////////////////////////////////////
line(400,100,400,150);//                Hanger
line(550,100,550,400);//                      Graphics
line(420,400,600,400);////////////////////////////////////////////////////
engine:
switch (wro)
   {
   case 1:                    ////////////////////////////////////////////
	circle(400,180,30);                       //
	break;                                    //
   case 2:                                        //
	line(400,210,400,300);                    //
	break;                                    //
   case 3:                                        //
	line(400,300,440,360);                    // 
	break;                                    //
   case 4:                                        //
	line(400,300,360,360);                    //
	break;                                    //
   case 5:       //                              Body
	line(400,240,460,215); //              Graphycs   
	break;                                    //
   case 6:                                        //
	line(400,240,340,215);                    //
	break;                                    //
   case 7:                                        // 
	circle(386,170,3);                        //
	break;                                    //
   case 8:                                        //
	circle(414,170,3);                        //
	break;                                    //
   case 9:                                        //
	ellipse(400,182,3,2,3,5);                 //
	break;                                    //
   }                         ///////////////////////////////////////////////                     
gotoxy(16,6);
printf(":");
in[0]=getch();
strcpy(in,(strupr(in)));
counter=0;
for(int c=1;c<=nw;c++){           //////////////////////////////////////////////                                              //
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
   arc(400,220,55,124,25);                        //
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
for(int c=1;c<=nw;c++){
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
