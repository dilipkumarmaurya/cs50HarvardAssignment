#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main (int argc, string argv[])

{

int key = 0;
bool keysuccessful = false;

//  Take the Input for for the key from the command line arguments.......
do{
    if(argc != 2)
    {
        printf("You have to give only twos Input command Check again and try\n");
        return 1;
    }
    else
    {
       key = atoi(argv[1]);
       keysuccessful  = true;
    }
}while(!keysuccessful);

    //prompt the string input

    string s = get_string();

    // Calculate the length of the string here....
    int k =  strlen(s);

    for(int i=0;i<k;i++)
    {
        // Check for the Alphabet here ..........
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))

            {

                //Write the condition fot the upper case letter here
                printf("%c", ((((s[i] - 65)+key)%26)+65));

            }
            else
            {
                // Write the condition for the lower case letter here
                printf("%c", ((((s[i] - 97)+key)%26)+97));



            }
        }
        // If not alphabet direct print it .......

       else
       {
           printf("%c", s[i]);
       }

    }
    printf("\n");


    return 0;
}