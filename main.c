#include <stdio.h>

int main() {
    printf("Learn C Programming with Dr. Chuck (feat. classic book by Kernighan and Ritchie)!\n");


    //Exercise 1-1 :hello world program
    printf("\n");
    printf("Hello World");
    printf("\n");
    printf("\n");




    //Exercise 1-2: Variables And Arithmetic
    printf("Exercise 1-2: Variables And Arithmetic");
    printf("\n");
    printf("\n");

    printf("print fahrenheit-celsius table for f=0,20,...,300 \n");
    printf("\n");

    /*print fahrenheit-celsius table for f=0,20,...,300*/

    int lower,upper ,step;
    float fahr,celsius;

    lower=0;// lower liimit of temperature table
    upper=300;
    step=20;
    fahr=lower;

    //printf("Fah Cel \n");
    //each line of the table is computed the same way so we use a loop which repeats once per line
    //this is the purpose of the while loop
    while(fahr<=upper){
        celsius=(5.0/9.0)*(fahr-32.0);

        //precent signs shows where the varibles go
        //4 equals how many numbers whide
        //0 eqals how many numbers after decimal

        printf("%4.0f %6.1f\n",fahr,celsius);
        fahr =fahr+step;
    }




    //Exercise 1-3: The for-statement
    printf("\n");
    printf("\n");
    int fahr1;
    //this way of making the table removes all the varibles except for fah1
    // i prefer this because we all only remembering things that change not something that redundant


    for(fahr1=0;fahr1<=300;fahr1=fahr1+20){
        printf("%4d %6.1f\n",fahr1, (5.0/9.0)*(fahr1-32.0));
    }

    //the for is usually appropriate for loops in which the initialization and reinitialization are
    // single statements and logically related since it is more compact than while and keeps the
    //loop control statements together in one place

    /*
     * in modern languages we tend to have two loop structures
     * determinant and indeterminant
     * for and while loop structures are indeterminate because you must read them closely to make sure they are
     * properly constructed and for example are not unintentionally 'infinite loops'
     *an example of a determinant loop is a for each
     */







    //1.4 Symbolic Constants

    /*
     * its bad practice to bury ,magic numbers  like 300 and 20 in a program because it gives so little information
     * and is hard to change in a systemic way
     * use #define construction
     * lets you define a symbolic name or symbolic constant to be a particular string or characters
     * this can be done with numbers and with text
     * */

#define LOWER 0
#define UPPER 300
#define STEP 20
    int fahr2;
    //this way of making the table removes all the varibles except for fah1
    // i prefer this because we all only remembering things that change not something that redundant

    printf("\n");
    printf("\n");


    for(fahr2=LOWER;fahr2<=UPPER;fahr2=fahr2+STEP){
        printf("%4d %6.1f\n",fahr2, (5.0/9.0)*(fahr2-32.0));
    }

//1.5 A collection of useful programs

//character input and output

/*
 * .getChar will fetche the next input character each time it is called and returns that characters as its value
 *  that is after
 *  c=getchar()
 */

    //printf("Please enter a letter");
    //int c = getchar();


    /*
     * the fuction putchar is the complement of getchar and prints the contents of a variable c
     * on some output medium
     */
    // putchar(c);




    // File Copying

    /*
     * the simplest example is a program which copies its input to its out put one character at a time
     * psudo code
     * get a character
     * while (character is not end file signal)'
     * ouput the character just read
     * get a new character
     *
     */

    /* int d;
     d=getchar();
     while(d != EOF){
         putchar(d);
         d= getchar();//this line gets next char
         printf("ex1");
     }*/
    /*
     * main problem is detecting the end of the input
     * two conventions to get end of file value
     *
     * we declare d to be a int not a char so that it can hold the value which getchar returns
     */

    //program can be written concisely by
    //int e;
    // while ((e=getchar())!= EOF) putchar(e);

    /*
     * the program gets a character assigns it to c, then tests whether the character was the end of file signal
     * if no the body of the while is executed printing the character
     * the while then repeats
     * when the end of the input is finally reached the
     * while terminates and so does main
     */

    //Character counting
    /*
     * the next program counts characters,  it is a small elaboration
     * of the copy program
     */
    /*
     long nc;
      nc=0;
      while (getchar() != EOF){
          ++nc;
          printf("%ld\n",nc);


      }*/


    //double nc;
    //for (nc=0;getchar() != EOF; ++nc)
    //    ;
    //printf("%ld\n",nc);



    //Line Counting
    int c,nl;
    nl =0;
    while((c=getchar()) !=EOF){
        if(c=='\n'){
            ++nl;
        }
        printf("%d\n",nl);
    }
    return 0;
}
