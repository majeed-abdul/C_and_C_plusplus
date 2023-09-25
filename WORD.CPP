#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
int main()
{
   int sco = 0;
   int important, oxygen, gate, sugar, alchin, radar, onion, paper, animal, standard;
   int star, camel, rose, token, samsaung, chemistry, toung, moon, telecommunications;
   int communications, communication, cation, cations, sarosh, impact, speech, super;
   int symbol, labor, reload, majeed, option, certificate, time, neon, university, done;
   int gold, network, work, making, normal, normally, august, member, titanium, chin;
   int hammer, apple, sangari, horse, nepal, opnion, love, honda, range, chose, once;
   int usually, yard, coins, press, impress, naveed, sand, pass, ready, leav, lead, people;
   int simple, told, thought, goal, salt, lado, setting, smal, about, bomb, africa, recent;
   int mentor, known, unknown, parents, kangroo, inch, mental, avoid, arts, easy, spoil;
   int felt, shelter, held, wine, bull, speaker, iland, bird, loan, seed, heart, chase;
   int noun, move, slot, import, mall, port, coin, read, peak, land;
   char inp[20] = "Find Words", in[20], cmn[14] = "<< Welcome >>";
   char w[14] = "<<  Wrong  >>", c[14] = "<< Correct >>";
   system("cls");
   gotoxy(25, 1);
   printf("Welcome to Word Search Game");
   gotoxy(9, 6);
   printf("DETAILS");
   gotoxy(9, 8);
   printf("Game name:\tWord Search");
   gotoxy(9, 9);
   printf("Version:\t1.1");
   gotoxy(9, 10);
   printf("Dated:\t\t2/3/2019");
   gotoxy(9, 11);
   printf("Email address:\tmajeedabdul.941485@gmail.com");
   gotoxy(9, 24);
   printf("Press any key to contniue.");
   getch();
   system("cls");
   gotoxy(9, 1);
   printf("Instructions");
   gotoxy(9, 3);
   printf("Find out words more then 3 characters.");
   gotoxy(9, 4);
   printf("There are more than 115 words.");
   gotoxy(9, 5);
   printf("Do not press \"Enter\" key without any reason.");
   gotoxy(9, 9);
   printf("I M P O R T A N T");
   gotoxy(9, 11);
   printf("Remember enter \"ex\" to quit the game");
   gotoxy(9, 24);
   printf("Press any key to contniue.");
   getch();
start:
   system("cls");
   gotoxy(7, 1);
   printf("%s", inp);
   gotoxy(30, 1);
   printf("%s", cmn);
   gotoxy(50, 1);
   printf("%d/115", sco);
   gotoxy(7, 3);
   printf("H O A S R S A N G A R I T R S O P T H O N A Z X R Y C O N F Z K O Q");
   gotoxy(7, 4);
   printf("O C I J O L T E L E C O M M U N I C A T I O N S E E D Y D Z R A P T");
   gotoxy(7, 5);
   printf("N O M K S Z I A F M E N T O R V E W Y Q J X A F R I C A R P P N L B");
   gotoxy(7, 6);
   printf("D L A A E F M A R K E T U R R E L O A D B I R D S P E E C H E G G O");
   gotoxy(7, 7);
   printf("A A O B J M P P Q N S A U G U S T P A X W S C L R L E A N T O A H M");
   gotoxy(7, 8);
   printf("N B I V C E R T I F I C A T E Z X A Z O Z T G O N I O N B T P R R B");
   gotoxy(7, 9);
   printf("T O O U E E E O U M T A H I O S S P N Y P A S S I I L A N D L O A N");
   gotoxy(7, 10);
   printf("Y R C U I Z S D O P P M R M R U M E H I L N A E E N B O M N E O W B");
   gotoxy(7, 11);
   printf("A M B P T M S O I R Y O E E E P N R E W M D I S A M S A U N G O U E");
   gotoxy(7, 12);
   printf("I U M S C D Y A N A X O R V O E N G L K E A V O V E A H O W N T O A");
   gotoxy(7, 13);
   printf("W I O W L A D O R Y M N A T L R W M D Z V R L H N M C G S K P I S S");
   gotoxy(7, 14);
   printf("S M A L L W S K G O A L Q R A L C H I N Y D L C Y B A O N U R Y F T");
   gotoxy(7, 15);
   printf("X P H N E R Y E A C S L N P P N W E O T S W H T A E S U H S E U W H");
   gotoxy(7, 16);
   printf("H A E D R A N G T W I H O U N E T W O R K W I I L R H M E S S L O T");
   gotoxy(7, 17);
   printf("M C A O O L W E E T L C H A S E I O A A S S L A E Z E Y E H E E M O");
   gotoxy(7, 18);
   printf("G T R N O U N M U T I T A N I U M D K T R E P M A F L A A N N L A A");
   gotoxy(7, 19);
   printf("P T T B A I S U G A R N O P E L A O H E Y E M O V E T R D B T I N S");
   gotoxy(7, 20);
   printf("A A M S W V W S T O S E G N L R K L N R N A A P P L E E S Y N A W P");
   gotoxy(7, 21);
   printf("E Y A R D O E H O R L S O F A N I I L C H E M I S T R Y A T T Z L E");
   gotoxy(7, 22);
   printf("S R Y E C A M E L T Z D U S O I N N G Y E X U V N E I H D S R S M A");
   gotoxy(7, 23);
   printf("Y B C O N A N O D E X Y T H O U G H T I H B U L L A V O I D Y Y S K");
   gotoxy(7, 24);
   printf("Z S A L T T I X W N O R M A L L Y O Y C L I M B S S I K N R A H B E");
   gotoxy(7, 25);
   printf("K O I W I C S L O Y A O U O R I G I N A L B I S H E A C S P O I L R");
   gotoxy(7, 27);
   printf("Enter the word : ");
   scanf("%s", &in);
   strcpy(inp, "                   ");
   strcpy(inp, (strlwr(in)));
   if (!strcmp(inp, "ex"))
   {
      goto exit;
   }
   if ((!strcmp(inp, "important") && (important != 2))) // 1
   {
      important = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "lado") && (lado != 2))) // 2
   {
      lado = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "oxygen") && (oxygen != 2))) // 3
   {
      oxygen = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "gate") && (gate != 2))) // 4
   {
      gate = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "sugar") && (sugar != 2))) // 5
   {
      sugar = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "alchin") && (alchin != 2))) // 6
   {
      alchin = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "radar") && (radar != 2))) // 7
   {
      radar = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "onion") && (onion != 2))) // 8
   {
      onion = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "paper") && (paper != 2))) // 9
   {
      paper = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "animal") && (animal != 2))) // 10
   {
      animal = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "standard") && (standard != 2))) // 11
   {
      standard = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "star") && (star != 2))) // 12
   {
      star = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "camel") && (camel != 2))) // 13
   {
      camel = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "rose") && (rose != 2))) // 14
   {
      rose = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "token") && (token != 2))) // 15
   {
      token = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "samsaung") && (samsaung != 2))) // 16
   {
      samsaung = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "chemistry") && (chemistry != 2))) // 17
   {
      chemistry = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "toung") && (toung != 2))) // 18
   {
      toung = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "moon") && (moon != 2))) // 19
   {
      moon = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "telecommunications") && (telecommunications != 2))) // 20
   {
      telecommunications = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "communications") && (communications != 2))) // 21
   {
      communications = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "communication") && (communication != 2))) // 22
   {
      communication = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "cation") && (cation != 2))) // 23
   {
      cation = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "cations") && (cations != 2))) // 24
   {
      cations = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "sarosh") && (sarosh != 2))) // 25
   {
      sarosh = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "impact") && (impact != 2))) // 26
   {
      impact = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "speech") && (speech != 2))) // 27
   {
      speech = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "super") && (super != 2))) // 28
   {
      super = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "symbol") && (symbol != 2))) // 29
   {
      symbol = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "labor") && (labor != 2))) // 30
   {
      labor = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "reload") && (reload != 2))) // 31
   {
      reload = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "majeed") && (majeed != 2))) // 32
   {
      majeed = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "option") && (option != 2))) // 33
   {
      option = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "certificate") && (certificate != 2))) // 34
   {
      certificate = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "time") && (time != 2))) // 35
   {
      time = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "neon") && (neon != 2))) // 36
   {
      neon = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "university") && (university != 2))) // 37
   {
      university = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "done") && (done != 2))) // 38
   {
      done = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "gold") && (gold != 2))) // 39
   {
      gold = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "network") && (network != 2))) // 40
   {
      network = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "work") && (work != 2))) // 41
   {
      work = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "making") && (making != 2))) // 42
   {
      making = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "normal") && (normal != 2))) // 43
   {
      normal = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "normally") && (normally != 2))) // 44
   {
      normally = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "august") && (august != 2))) // 45
   {
      august = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "member") && (member != 2))) // 46
   {
      member = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "titanium") && (titanium != 2))) // 47
   {
      titanium = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "chin") && (chin != 2))) // 48
   {
      chin = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "hammer") && (hammer != 2))) // 49
   {
      hammer = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "apple") && (apple != 2))) // 50
   {
      apple = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "sangari") && (sangari != 2))) // 51
   {
      sangari = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "horse") && (horse != 2))) // 52
   {
      horse = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "nepal") && (nepal != 2))) // 53
   {
      nepal = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "opnion") && (opnion != 2))) // 54
   {
      opnion = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "love") && (love != 2))) // 55
   {
      love = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "honda") && (honda != 2))) // 56
   {
      honda = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "range") && (range != 2))) // 57
   {
      range = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "chose") && (chose != 2))) // 58
   {
      chose = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "once") && (once != 2))) // 59
   {
      once = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "usually") && (usually != 2))) // 60
   {
      usually = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "yard") && (yard != 2))) // 61
   {
      yard = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "coins") && (coins != 2))) // 62
   {
      coins = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "press") && (press != 2))) // 63
   {
      press = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "impress") && (impress != 2))) // 64
   {
      impress = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "naveed") && (naveed != 2))) // 65
   {
      naveed = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "sand") && (sand != 2))) // 66
   {
      sand = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "pass") && (pass != 2))) // 67
   {
      pass = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "ready") && (ready != 2))) // 68
   {
      ready = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "leav") && (leav != 2))) // 69
   {
      leav = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "lead") && (lead != 2))) // 70
   {
      lead = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "people") && (people != 2))) // 71
   {
      people = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "simple") && (simple != 2))) // 72
   {
      simple = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "told") && (told != 2))) // 73
   {
      told = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "thought") && (thought != 2))) // 74
   {
      thought = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "goal") && (goal != 2))) // 75
   {
      goal = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "salt") && (salt != 2))) // 76
   {
      salt = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "setting") && (setting != 2))) // 77
   {
      setting = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "small") && (smal != 2))) // 78
   {
      smal = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "about") && (about != 2))) // 79
   {
      about = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "bomb") && (bomb != 2))) // 80
   {
      bomb = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "africa") && (africa != 2))) // 81
   {
      africa = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "recent") && (recent != 2))) // 82
   {
      recent = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "mentor") && (mentor != 2))) // 83
   {
      mentor = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "known") && (known != 2))) // 84
   {
      known = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "unknown") && (unknown != 2))) // 85
   {
      unknown = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "parents") && (parents != 2))) // 86
   {
      parents = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "kangroo") && (kangroo != 2))) // 87
   {
      kangroo = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "inch") && (inch != 2))) // 88
   {
      inch = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "mental") && (mental != 2))) // 89
   {
      mental = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "avoid") && (avoid != 2))) // 90
   {
      avoid = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "arts") && (arts != 2))) // 91
   {
      arts = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "easy") && (easy != 2))) // 92
   {
      easy = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "spoil") && (spoil != 2))) // 93
   {
      spoil = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "felt") && (felt != 2))) // 94
   {
      felt = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "shelter") && (shelter != 2))) // 95
   {
      shelter = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "held") && (held != 2))) // 96
   {
      held = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "wine") && (wine != 2))) // 97
   {
      wine = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "bull") && (bull != 2))) // 98
   {
      bull = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "speaker") && (speaker != 2))) // 99
   {
      speaker = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "iland") && (iland != 2))) // 100
   {
      iland = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "bird") && (bird != 2))) // 101
   {
      bird = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "loan") && (loan != 2))) // 102
   {
      loan = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "seed") && (seed != 2))) // 103
   {
      seed = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "heart") && (heart != 2))) // 104
   {
      heart = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "chase") && (chase != 2))) // 105
   {
      chase = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "noun") && (noun != 2))) // 106
   {
      noun = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "move") && (move != 2))) // 107
   {
      move = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "slot") && (slot != 2))) // 108
   {
      slot = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "import") && (import != 2))) // 109
   {
      import = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "mall") && (mall != 2))) // 110
   {
      mall = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "port") && (port != 2))) // 111
   {
      port = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "coin") && (coin != 2))) // 112
   {
      coin = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "read") && (read != 2))) // 113
   {
      read = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "peak") && (peak != 2))) // 114
   {
      peak = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   if ((!strcmp(inp, "land") && (land != 2))) // 115
   {
      land = 2;
      sco++;
      strcpy(cmn, c);
      goto start;
   }
   /*if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }
   if((!strcmp(inp,"")&&(!=2))) //                    stop
      {
      =2;
      sco++;
      strcpy(cmn,c);
      goto start;
      }*/
   strcpy(cmn, w); // end
   goto start;
exit:
   printf("%d", important);
   return 0;
}
