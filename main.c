//
//  main.c
//  decrypt_caesar
//
//  Created by Sahil Malhotra on 24/01/16.
//  Copyright © 2016 Sahil Malhotra. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str [1000];
    int i, j;
    //int k;
    long n;
    printf("Enter a string : ");
    
    /*for(a=0, n=strlen(str); a<(int)n; a++)
     {
     scanf("%c", &str[a]);
     }*/
    
    gets(str);
    
    for(i=1; i<26; i++)
    {
        for (j=0, n=strlen(str); j<n; j++)
        {
            if(isalpha(str[j]))
            {
                if(str[j]=='z')
                {
                    str[j]= 'a';
                }
                else if(str[j]=='Z')
                {
                    str[j]= 'A';
                }
                else
                {
                    str[j]=str[j]+1;
                }
            }
            
        }
        
        
    /*
    for (k=0;k<n;k++)
    {
        if(str[k]=='t' && str[k+1]=='h' && str[k+2]=='i' && str[k+3]=='s')   //"this" present in str or not
        {
    */
        printf("%s\n\n", str);
    /*  break;
        
        }
    }
    */
        
    }
    
    return 0;
}
