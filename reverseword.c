#include <stdio.h>  
#include <string.h>  
  
//Calling function to reverse string

void revstr(char *str1)  
{  
    // Declaring variables
  
    int i, len, word_1;  
   //Use strlen() to get the length of the word
    len = strlen(str1); 
        
    // Use for loop to iterate the string
    
    for (i = 0; i < len/2; i++)  
    {  
        // Variable to hold the string
        
        word_1 = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = word_1;  
    }  
}  
      
    int main()  
    {  
        char word[50]; 
        // size of char string
        
        printf (" Enter a word: ");  
        // use gets() function to take string
        gets(word); 
        
          
          
        // call reverseString() function
        
        revstr(word);  
        printf (" The reverse of the word you entered is: %s", word);  
    } 
