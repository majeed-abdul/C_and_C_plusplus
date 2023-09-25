#include<stdio.h>
#include<conio.h>
#include<dos.h>
main(){
int o,o1,o2,w;
float in;
again:
//clrscr();
//gotoxy(28,1);
printf("M M   C O N V E R T E R");
//gotoxy(2,3);
printf("[1] Distance");
//gotoxy(2,4);
printf("[2] Speed or Velocity");
//gotoxy(2,6);
printf("Enter option number:");
scanf("%d",&o);
switch (o)
      {
      case 1:
	   again_d:
	   clrscr();
	   gotoxy(30,1);
	   printf("Distance");
	   gotoxy(2,3);
	   printf("[1] Kilometer (Km)");
	   gotoxy(2,4);
	   printf("[2] Meter (m)");
	   gotoxy(2,5);
	   printf("[3] Centimeter (cm)");
	   gotoxy(2,6);
	   printf("[4] Millimeter (mm)");
	   gotoxy(2,8);
	   printf("Enter option number:");
	   scanf("%d",&o1);
	   clrscr();
	   switch (o1)
		{
		case 1:
		     gotoxy(30,1);
		     printf("Kilometer");
		     gotoxy(2,3);
		     printf("Enter the distance in (Km):");
		     scanf("%f",&in);
		     gotoxy(2,5);
		     printf("%f Km  =  %f m",in,(in*1000));
		     gotoxy(2,6);
		     printf("%f Km  =  %f cm",in,(in*1000*100));
		     gotoxy(2,7);
		     printf("%f Km  =  %f mm",in,(in*1000*100*10));
		     break;
		case 2:
		     gotoxy(30,1);
		     printf("Meter");
		     gotoxy(2,3);
		     printf("Enter the distance in (m):");
		     scanf("%f",&in);
		     gotoxy(2,5);
		     printf("%f m  =  %f Km",in,(in/1000));
		     gotoxy(2,6);
		     printf("%f m  =  %f cm",in,(in*100));
		     gotoxy(2,7);
		     printf("%f m  =  %f mm",in,(in*100*10));
		     break;
		case 3:
		     gotoxy(30,1);
		     printf("Centimeter");
		     gotoxy(2,3);
		     printf("Enter the distance in (cm):");
		     scanf("%f",&in);
		     gotoxy(2,5);
		     printf("%f cm  =  %f Km",in,(in/100/1000));
		     gotoxy(2,6);
		     printf("%f cm  =  %f m",in,(in/100));
		     gotoxy(2,7);
		     printf("%f cm  =  %f mm",in,(in*10));
		     break;
		case 4:
		     gotoxy(30,1);
		     printf("Millimeter");
		     gotoxy(2,3);
		     printf("Enter the distance in (mm):");
		     scanf("%f",&in);
		     gotoxy(2,5);
		     printf("%f mm  =  %f Km",in,(in/10/100/1000));
		     gotoxy(2,6);
		     printf("%f mm  =  %f m",in,(in/10/100));
		     gotoxy(2,7);
		     printf("%f mm  =  %f cm",in,(in/10));
		     break;
		default:
		     goto again_d;
		}
	   break;  //case 1
      case 2:
	   again_s:
	   clrscr();
	   gotoxy(30,1);
	   printf("Speed");
	   gotoxy(2,3);
	   printf("[1] Kilometer per hour (Km/h)");
	   gotoxy(2,4);
	   printf("[2] Meter per second (m/s)");
	   gotoxy(2,5);
	   printf("[3] Kilometer per second (Km/s)");
	   gotoxy(2,7);
	   printf("Enter option number:");
	   scanf("%d",&o2);
	   clrscr();
	   switch (o2)
		{
		case 1:
		     gotoxy(30,1);
		     printf("Kilometer per hour");
		     gotoxy(2,3);
		     printf("Enter the speed in (Km/h):");
		     scanf("%f",&in);
		     gotoxy(2,5);
		     printf("%f Km/h  =  %f m/s",in,(in*10/36));
		     gotoxy(2,6);
		     printf("%f Km/h  =  %f Km/s",in,(in*1/3600));
		     break;
		default:
		     goto again_s;
		}
	   break;
      default:
	   goto again;
      }
gotoxy(2,25);
printf("Press any key to exit.........................................................");
getche();
clrscr();
gotoxy(30,1);
printf("MM CONVERTER");
gotoxy(11,5);
printf("Designed, and Created by  \"Abdul Majeed\"");
gotoxy(11,6);
printf("Programmer: \"Abdul Majeed\"");
gotoxy(11,8);
printf("Contect us on  \"majeedabdul.949485@gmail.com\"");
for(w=1;w<=3;w++)
     {
     gotoxy(33,15);
     printf("Exiting   ");
     gotoxy(80,25);
     delay(400);
     gotoxy(33,15);
     printf("Exiting.  ");
     gotoxy(80,25);
     delay(400);
     gotoxy(33,15);
     printf("Exiting.. ");
     gotoxy(80,25);
     delay(400);
     gotoxy(33,15);
     printf("Exiting...");
     gotoxy(80,25);
     delay(200);
     }
gotoxy(33,15);
printf("Completed ");
gotoxy(80,25);
delay(900);
}
