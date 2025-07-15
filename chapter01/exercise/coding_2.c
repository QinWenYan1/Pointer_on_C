#include <stdio.h>
#include <stdlib.h>

int main(void){
    char* line; 
    int num = 1;
    char ch;
    int flag = 1; /*to flag if it's necessary to prinnt number*/ 

    
    /*
    *  we read the several lines of code
    *  if the user inputs nothing, the program will terminate
    */
    while( ( ch = getchar() ) != EOF){

        /* the number printed for line and premission has. been used*/
        if( flag ){
            printf("%d: ", num++);
            flag = 0; 
        }
        
        /*print the character*/
        printf( "%c", ch ); 
        
        /* we get premission of printing number if change the line */
        if ( ch == '\n' ){ flag = 1; }
        
    }

}