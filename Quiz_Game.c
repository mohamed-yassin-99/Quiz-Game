/*
THe Quiz gmae with c 
that is m frist Real Projects 
there some futher soon 
*/


#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"
#define BLUE    "\x1b[34m"




void  Corrcet()
{
    printf (GREEN "Corrcet +2 \n "RESET);
    

}
void  Wrong ()
{
    printf (RED "Wrong \n"RESET);
    
}
void rules()
{
    system ("clear");
    printf (GREEN  "Corrcet +2\t\t" RESET );
    printf (RED    "Wrong -1\n"RESET );
}
void qu1()
{

    printf ("in What country did the frist Starbucks open outside of North America \n");
    printf ("1) China \n");
    printf ("2) France\n");
    printf ("3) Japan\n");
    printf ("4) ENgland\n");
    

}
void qu2()
{
    printf ("The digital yuan is giving Alipay a run for its money as the largest mobile payment network based in what country? \n");
    printf ("1) America\n");
    printf ("2) China\n");
    printf ("3) Egypt \n");
    printf ("4) Canda\n");


}
void qu3()
{
    printf ("What day is known as Star Wars Day?\n");
    printf ("1) May 4th   \n");
    printf ("1) June 4th  \n");
    printf ("2) June 5th  \n");
    printf ("3) Aprli 5th \n");
}
void qu4()
{
    printf ("How many planet in solor system \n");
    printf ("1) 7 \n");
    printf ("2) 8 \n");
    printf ("3) 9  \n");
    printf ("4) 10  \n");
}
void qu5()
{
    printf ("Which country has the most Olympic medals in swimming? \n\n");
    printf ("1) USA \n");
    printf ("2) Russia \n");
    printf ("3) Canada \n");
    printf ("4) Japan \n");
}
void qu6()
{
    printf ("How many players are on each side of the net in beach volleyball?\n\n");
    printf ("1) 3 \n");
    printf ("2) 4 \n");
    printf ("3) 2 \n");
    printf ("4) 1 \n");
}
void qu7()
{
    printf("In which sport can you win the Davis Cup?\n\n");
    printf ("1) Tennis \n");
    printf ("2) HandBall \n");
    printf ("3) Football \n");
    printf ("4) Basketball \n");
    
}
void qu8()
{
    printf ("How many hearts does an octopus have?\n\n");
    printf ("1) 1 \n");
    printf ("2) 2 \n");
    printf ("3) 4 \n");
    printf ("4) 3 \n");
    
}
void qu9()
{
    printf ("How many bones do sharks have?\n\n");
    printf ("1) 306 \n");
    printf ("2) 200 \n");
    printf ("3) 400 \n");
    printf ("4) Zero \n");

}
void qu10()
{
    printf ("What are rhinoceros horns made of?\n\n");
    printf ("1) hair \n");      
    printf ("2) Bone \n");
    printf ("3) Skin  \n");
    printf ("4) Muscle \n");

}



int main ()
{
    int my_point=0 , chooses;
    
    char s_q;
    int *ptr ;
    ptr = &my_point;
    printf ("\tWelocme in Quiz Game\n\n");

    printf ("press [s] to start Game \n");
    printf ("Press [q] to quit  Game \n");
    scanf("%c",&s_q);

    if (s_q == 's')
    {
        rules ();
        qu1();
        scanf("%d",&chooses);
        if (chooses == 3)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu2();
        scanf("%d",&chooses);
        if (chooses == 2)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu3();
        scanf("%d",&chooses);
        if (chooses == 1)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu4();
        scanf("%d",&chooses);
        if (chooses == 2)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu5();
        scanf("%d",&chooses);
        if (chooses == 1)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu6();
        scanf("%d",&chooses);
        if (chooses == 6)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu7();
        scanf("%d",&chooses);
        if (chooses == 1)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu8();
        scanf("%d",&chooses);
        if (chooses == 4)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu9();
        scanf("%d",&chooses);
        if (chooses == 4)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }
        sleep(5);
        rules ();
        qu10();
        scanf("%d",&chooses);
        if (chooses == 1)
        {
            Corrcet();
            my_point +=2;
        } else 
        {
            Wrong ();
            my_point -=1;
        }


        printf ("\n\n%d\n\n",my_point);

    }
    





















    else if (s_q == 'q')
    {
        printf ("Ok");
        system ("clear");
        exit (1);
    }
    else printf ("ENter True please\n");


















}