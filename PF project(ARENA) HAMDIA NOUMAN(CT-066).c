#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
struct play {  
            char name[50];  
            int score;  
            int rat;//star ratings  
}p;  
void scramble(char *s);
void show_record();    
int main(){    
char choice,Choice,choose;
    char playername[50];
     arena:
      system("cls");
          printf("\n\t\t________________________________________");
      printf("\n\t\t________________________________________");
      printf("\n\t\t\t\t WELCOME ");
      printf("\n\t\t\t\t   TO ");
      printf("\n\t\t\t      GAMING ARENA ");
      printf("\n\t\t________________________________________");
      printf("\n\t\t________________________________________");
      printf("\n\t\t > Press R to play RUSTY BRAINS");
    printf("\n\t\t > Press S to play SCRAMBLE ");
      printf("\n\t\t > press Q to QUIT ");
             printf("\n\t\t________________________________________\n\n");
             printf("\n\t\t________________________________________  ");
        Choice=toupper(getch());
        if (Choice=='S'){
  goto scramble;
  }
  if(Choice=='R'){
  goto quiz;
}
else if (Choice=='Q'){
  printf("\n\n\nAre you sure you want to quit the Game?\n Press Y for yes\n");
  choose=getch();
  if(choose=='y' || choose=='Y'){
  exit(0);}
  else{
  goto arena;
}
  }
     quiz:
     system("cls");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t\t\t WELCOME ");
     printf("\n\t\t\t\t   TO ");
     printf("\n\t\t\t       RUSTY BRAINS ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score ");
     printf("\n\t\t > press Q to quit ");
     printf("\n\t\t________________________________________\n\n");
     printf("\n\t\t________________________________________  ");
choice=toupper(getch());
  if (choice=='V'){
  show_record();
  goto quiz;
  }
 else if (choice=='Q'){
  char choose;
  printf("\n\n\nAre you sure you want to quit Quiz Game?\n Press Y for yes\n");
  choose=getch();
  if(choose=='y' || choose=='Y'){
  goto arena;}
  else{
  goto quiz;
}
  }
 
else if(choice=='S'){
     system("cls");  
 int round2,round1,i,n;
          int ans;  
          int count=0,counter;  
          char rating[50];  
 
          FILE *fp;  
 
          if((fp=fopen("play.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
 
  printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    scanf("%s",p.name);
    //int i;
    for(i=0;i<strlen(p.name);i++){
    p.name[i]=toupper(p.name[i]);
}
    system("cls");
        printf("\n -------------------------------------------------------------------------");
        printf("\n\n******************* Welcome \" %s \"  to Rusty Brains *************************** \n\n", p.name);  
  printf("\n\nINSTRUCTIONS:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> We have 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked 3 question.");
    printf("\n          You are eligible to play the game if you give atleast 2");
    printf("\n          right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked ");
    printf("\n          10 questions. Each question carry 10 points");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n          right option.");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n\n");
    printf("\n\n   Press Y to start the game!\n");
    printf("\n   Press any other key to return to the main menu!");
    if (toupper(getch())=='Y'){
      goto home;
        }
  else{
        goto quiz;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     round1=i;

//warm-up round
     switch(round1)
  {
  case 1:
  printf("\n\nJIMMY father has three sons Paul I and Paul II can you guess the name of third son?\n");
  printf("\n\nA.Paul III \t\tB.Jerin \n\nC.Jimmy \t\tD.none");
  if (toupper(getch())=='C'){
       printf("\n\nCorrect!!!");
  count++;
       getch();
  break;}
  else{
             printf("\n\nWrong!!! The correct answer is C.Jimmy");
             getch();
             break;
         }

    case 2:
  printf("\n\n\nYou are at fourth place right now in a race.What will you be in when you pass the person in third place?\n");
  printf("\n\nA.First\t\tB.Second\n\nC.Third\t\tD.None");
  if (toupper(getch())=='C'){
  printf("\n\nCorrect!!!");
 count++;
   getch();
   break;
 }
  else{
 printf("\n\nWrong!!! The correct answer is C.Third");
         getch();
         break;
        }
        case 3:
        printf("\n\n\nI make a loud sound when I'm changing. When I do change, I get bigger but weigh less. What am I?");
        printf("\n\nA.Coal\t\tB.Popcorn\n\nC.Egg\t\tD.Cotton");
        if (toupper(getch())=='B'){
  printf("\n\nCorrect!!!");
  count++;
               getch();
               break;
            }
        else{
printf("\n\nWrong!!! The correct answer is B.Popcorn");
         getch();
         break;
         }

        }//end switch
         }//end for

 if(count>=2){
 goto test;}
 else{
 system("cls");
 printf("\n\nBETTER LUCK NEXT TIME!!");
 getch();
 goto quiz;
 }
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s You are eligible for Challenge Round ***\n",p.name);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     toupper(getch());{
goto round2;
}
round2:

     counter=0;
     for(i=1;i<=10;i++){
system("cls");
     round2=i;
//challenge-round
switch(round2){
  case 1:
  printf("\n\nI saw a boat full of people, yet there wasn't a single person on the boat. How is that possible?");
  printf("\n\nA.It was a dream\t\t  B.It was a ghost boat  \n\nC.They all were married\t\t  D.none");
  if(toupper(getch())=='C'){
  printf("\n\nCorrect!!! +10 points");
   ++counter;
getch();
break;
}
  else{
 printf("\n\nWrong!!! The correct answer is C.They all were married");
getch();
         break;
}

  case 2:
  printf("\n\n\nWhat type of music do rabbits listen to?");
  printf("\n\nA.Hip Hop\t\tB.Folk\n\nC.Opera\t\t       D.Funk");
  if (toupper(getch())=='A'){
  printf("\n\nCorrect!!! +10 points");
    ++counter;
   getch();
    break;}
  else{
  printf("\n\nWrong!!! The correct answer is A.Hip Hop");
  getch();
         break;
         }

  case 3:
  printf("\n\n\nWhich alphabet has the most water? ");
  printf("\n\nA.A\t\tB.B\n\nC.C\t\tD.D");
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!! +10 points");
   ++counter;
   getch();
    break;}
  else{
  printf("\n\nWrong!!! The correct answer is C.C");
getch();
         break;
}

  case 4:
  printf("\n\n\nThe answer is very big?");
  printf("\n\nA.THE ANSWER \t\tB.Really big\n\nC.An Elephant\t\tD.None");
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!! +10 points");
    ++counter;
   getch();
    break;}
  else{
            printf("\n\nWrong!!! The correct answer is A.THE ANSWER");
getch();
         break;
         }

  case 5:
  printf("\n\n\nWhat would be sure to find in the middle of Toronto?");
  printf("\n\nA.A beach\t\tB.A restaurant\n\nC.A parlour\t\tD.The alphabet O");
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!! +10 points");
   ++counter;
   getch();
    break;}
  else{
        printf("\n\nWrong!!! The correct answer is D.The alphabet O");
         getch();
         break;
         }

  case 6:
  printf("\n\n\nMr. Blue lives in the blue house. Mr. Yellow lives in the yellow house. Mr. Black lives in the black house. Who lives in the white house?");
  printf("\n\nA.It is empty\t\t\t         B.Mr.White\t\n\nC.It is too white for anyone's liking\t  D.The president");
  if (toupper(getch())=='D' )
   {printf("\n\nCorrect!!! +10 points");
   ++counter;
   getch();
    break;}
  else{
  printf("\n\nWrong!!! The correct answer is D.The president");
         getch();
         break;}

  case 7:
  printf("\n\n\nWhat is the National Name of Japan?");
  printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!! +10 points");
   ++counter;
   getch();
    break;}
  else {
  printf("\n\nWrong!!! The correct answer is D.Nippon");
getch();
         break;}

  case 8:
  printf("\n\n\nA cat had three kittens: Mopsy, Topsy and Spot. What was the mother's name?");
  printf("\n\nA.Cat   \t\tB.July\n\nC.It isn't known\tD.What");
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!! +10 points");
   ++counter;
   getch();
    break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.What");
getch();
         break;
}

       
  case 9:
  printf("\n\n\nA woman goes out of her room goes to the fridge, opens a can of tuna, soda, yoghurt and a cookie. What did she open first?");
  printf("\n\nA.Can of tuna\t\tB.Fridge\n\nC.Soda\t\t      D.Yoghurt");
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!! +10 points");
    ++counter;
   getch();
   break;}
  else{printf("\n\nWrong!!! The correct answer is B.Fridge");
getch();
break;
}
       

  case 10:
  printf("\n\n\nMr. Jones had 4 daughters.Each daughter had a brother. How many children does Mr. Jones have?");
  printf("\n\nA.8\t\tB.4\n\nC.7\t\tD.5");
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!! +10 points");
   ++counter;
   getch();
   break;}
  else{
  printf("\n\nWrong!!! The correct answer is D.5");
 getch();
         break;
}
  }//end switch
  }//end for
    system("cls");  
        //Score and ratings Calculator
        if(counter> 3){  
printf("\n\n\t\t**************** CONGRATULATION %s*****************",p.name);
      printf("\n\t You Won The Game \n\n");
  printf("Your score is '%d '",counter*10);  
                      p.score=counter*10;

                if(p.score >= 80){  
                    printf("\nRating: * * * * *");  
                    p.rat=5;  
                }  
                else if(p.score >= 60 && p.score < 80){  
                    printf("\nRating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 40 && p.score < 60){  
                    printf("\nRating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 20 && p.score < 40){
                    printf("\nRating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 20){  
                    printf("\nRating: *");  
                     p.rat=1;  
                }  
             //writing to file  
                    fprintf(fp,"%s %d %d", p.name,p.score,p.rat);  
                    fclose(fp);
goto go;
        }  
        else{  
           printf("\n\n\t******** SORRY %s YOU DIDN'T WIN ********",p.name);
  printf("Your score is '%d '",counter*10);
     printf("\nRating: *");  
      printf("\n\t\t Thanks for your participation");
      printf("\n\t\t TRY AGAIN");
                    fclose(fp);
goto go;  
        }
 go:
 puts("\n\n Do you want to play again?\nPress Y to play again\n");
 puts(" Press any other key if you want to go main menu");
 if (toupper(getch())=='Y')
  goto home;
 else{
  goto quiz;
  }  
}//end quiz
scramble:
system("cls");
printf("\n\t\t_____________________________________");
    printf("\n\t\t_____________________________________");
printf("\n\t\t\t\tWELCOME ");
     printf("\n\t\t\t\t  TO ");
    printf("\n\t\t\t    SCRAMBLE GAME ");
    printf("\n\t\t______________________________________");
    printf("\n\t\t______________________________________\n\n");
    printf("\t\tWould you like to proceed with the game?\n\t\tPress Y for yes\n\t\tPress any other key to return back to MainMenu\n\n");
    if(toupper(getch())!='Y'){
    goto arena;
}
    else if(toupper(getch())=='Y'){
    system("cls");
    printf("\n -----------------------------------------------------------------------------------");
        printf("\n\n  ******************* Welcome  To  SCRAMMBLE  *************************** \n\n");  
  printf("\n\nINSTRUCTIONS:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> We have 5 words for you to unjumble");
    printf("\n >> You will be required to unjumble the word within 3 tries to be able to proceed with the game");
    printf("\n >> Your number of tries will determine your score");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n\n");}
    printf("\n\n   Press Y to start the game!\n");
    printf("\n   Press any other key to return to the main menu!");
    if(toupper(getch())=='Y'){
    goto startscramble;
}
else{
goto arena;
}
  startscramble:
  system("cls");
  int counter=0,count=0,scramble_rat,scramble_score,triescount=0;
  int l,i=0,k=0,j=0;
  char scrambled[100];
char answer[100];
//words to be scrambled
char str[5][20]={"protagonist","friends","pledge","pawn","laws"};
  char hint[5][100]={"The main figure or one of the most prominent figures in a situation"," Person with whom one has a bond of mutual affection","A solemn promise or undertaking","A chess piece of the smallest size and value","The system of rules"};
    for(i=0;i<5;i++){
 
  strcpy(scrambled, str[i]);
  scramble(scrambled);

  bool game_over= false;
  int tries=0;
  do{
   
    printf("\n\n\t\tUnscramble the word: %s\n\n", scrambled);
     printf("\t\tHINT : %s\n\n",hint[i]);
    printf("\t\tAnswer: ");
    scanf("%s", answer);
    if (strcmp(answer,str[i]) == 0)
    {
      printf("\n\t\t------------------------------\n");
      printf("\n\t\t    You got it :) \n\n");
      game_over = true;
      tries=tries+1;
      counter++;
      printf("\t\t    Number of tries: %d\n\n",tries);
      printf("\t\t------------------------------\n");
      getch();
      system("cls");
    }
    else {
    printf("\n\t\t------------------------------\n");
    printf("\n\t\t     Try again :| \n\n");
    tries=tries+1;
    printf("\t\t------------------------------\n");
}
triescount=triescount+tries;
if(tries==3){
    system("cls");
    printf("\n\t\t\t\tGAME OVER\n");
    printf("\t\tYour number of tries has exceeded the limit\n\t\tYour score is '%d' \n",counter*20);
printf("\t\tBETTER LUCK NEXT TIME!\n");
goto again;
}
  } while (!game_over);
   if(str[i+1]){
    tries=0;
}//inner for end
}
system("cls");
if(triescount==5){
   triescount=5;
}
if(triescount==6){
    triescount=4;
}
if(triescount==7){
triescount=3;
}
if(triescount==8){
triescount=2;
}
if(triescount>8){
triescount=1;
}
//Score and ratings Calculator
if(triescount>0){  
printf("\n\n\t\t**************** CONGRATULATION *****************");
      printf("\n\t\tYou Won The Game \n\n");
  printf("\t\tYour score is '%d '",triescount*20);  
                scramble_score=triescount*20;  
 
                if(scramble_score >= 80){  
                    printf("\n\t\tRating: * * * * *");  
                    scramble_rat=5;  
                }  
                else if(scramble_score >= 60 && scramble_score < 80){  
                    printf("\n\t\tRating: * * * *");  
                    scramble_rat=4;  
                }  
                else if(scramble_score >= 40 && scramble_score < 60){  
                    printf("\n\t\tRating: * * *");  
                  scramble_rat=3;  
                }  
                else if(scramble_score >= 20 && scramble_score < 40){
                    printf("\n\t\tRating: * *");  
                    scramble_rat=2;  
                }  
                else if(scramble_score < 20){  
                    printf("\n\t\tRating: *");  
                     scramble_rat=1;  
                }
                getch();
}
again:
printf("\n\n\t\tWould you like to play again?\n\t\tPress Y for yes\n\t\tPress any other key to return to MainMenu\n");
choose=getch();
if(toupper(choose)=='Y'){
goto scramble;
}
else{
goto arena;
}
}//end main
void show_record(){
//maintaining record of players score and ratings
system("cls");
    int ch;  
    FILE *fp;  
    if((fp=fopen("play.txt", "r"))==NULL){  
                //printf("error opening file\n");  
                printf("\nNo games played yet!\n");  
            }  
            else{  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.rat) !=EOF){  
        printf("____________________________\n");  
        printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.rat);  
    }  
 
    fclose(fp);  
}
getch();
    }  
   
void scramble(char *s){
  int length = strlen(s);
  int i,j;
  // making all characters lowercase for consistency
  for ( i = 0; i < length; i++)
    s[i] = tolower(s[i]);
  char original[length + 1];
  strcpy(original, s);
  double diff = 0;
  bool same_start = false;
  bool same_end = false;
  int times_stuck = 0;
  // keep attempting to scramble the word until it is sufficiently scrambled
  do
  {
     // Scrambling the word by finding two indexes at random position in the string and swapping the characters at those indexes
    int i = 0;
    while (i < length)
    {

      int pos1 = rand() % length;
      int pos2 = rand() % length;
     
      if (pos1 != pos2)
      {
        char temp = s[pos1];
        s[pos1] = s[pos2];
        s[pos2] = temp;
        i++;
      }
    }
   
    int differences = 0;
    for ( j = 0; j < length; j++)
      if (original[j] != s[j]) differences++;
    // computing how many characters are different from the original  string
    diff = (double) differences / length;
   
// checking if the scrambled string has the same start
//and same end character as the original string
    same_start = s[0] == original[0];
    same_end = s[length - 1] == original[length - 1];
   
    // incrementing times_stuck so we know how many times we've run the loop
    times_stuck++;
   /* Loop will go on
          *till we don't have same start and end characters
          *till less than half characters our scrambled
          *loop will stop if it had repeated upto 100 times and still not able to scramble the word to avoid infinite loop */
 
  } while ( ((same_start && same_end) ||
             (diff < 0.5)) &&
            (times_stuck < 100));
 
}

