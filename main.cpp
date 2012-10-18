#define SENTENCE_LENGTH 8

#include <stdio.h>
#include <iostream>
#include "fact.h"


char *Frevstrstr( const int senlen, char arga[] )
    {
        //Declare local variable for reversed string output and initialize to 0.
        char *revout = new char[senlen];
        
        //For loop reversing user provided string
        for (int i = 0; i <= senlen; i++) 
        {
            if (arga != NULL || arga != 0) 
            {
                revout[i] = arga[senlen - i];
            }
    //      std::cout << "i=" << i;
    //        std::cout << "\n";
    //        std::cout << "st_revsent=" << st_revsent[i];
    //        std::cout << "\n";
            
        }
    return revout;
    delete[] revout;
    }




int main (int argc, char const argv[]) 
    {
    // insert code here...
    
	//Project Euleur Task 1
	

	//Kartik's String Test 1
	
	//Declarations
    char *st_sentence[SENTENCE_LENGTH];
	char *st_revsent[SENTENCE_LENGTH];
	
    //N-factorial declarations
    int factvar = 0;
    int factvarout = 0;
    char varchoop;
    
    std::cout << "Type A for Factorial and B for sentence\n";
    std::cin >> varchoop;
    
    switch (varchoop) 
    {
        case 'A':
            std::cout << "Enter N value for N! calculation:";
            std::cin >> factvar;
            factvarout = Ffact(factvar);
            std::cout << factvarout;
            break;
            
        case 'B':
            //User Input Request
            std::cout << "Type a sentence\n";
            
            //Accept user input
            std::cin >> *st_sentence;
            
            std::cout << *st_sentence << "\n";
 
            //For loop reversing user provided string
            /*
             for (int i = 0; i <= SENTENCE_LENGTH; i++) 
             {
             if (st_sentence != NULL || st_sentence != 0) 
             {
             st_revsent[i] = st_sentence[SENTENCE_LENGTH - i];
             }
             std::cout << "i=" << i;
             std::cout << "\n";
             std::cout << "st_revsent=" << st_revsent[i];
             std::cout << "\n";
             }*/
            
             *st_revsent = Frevstrstr(SENTENCE_LENGTH, *st_sentence);
             
             std::cout << *st_revsent;
            break;
            
            
        default:
            std::cout << "You have come here in error";
            break;
    }
    
     
	//For loop reversing user provided string
   /*
    for (int i = 0; i <= SENTENCE_LENGTH; i++) 
    {
        if (st_sentence != NULL || st_sentence != 0) 
        {
            st_revsent[i] = st_sentence[SENTENCE_LENGTH - i];
        }
        std::cout << "i=" << i;
        std::cout << "\n";
        std::cout << "st_revsent=" << st_revsent[i];
        std::cout << "\n";
    }
    */
    

    return 0;
}
