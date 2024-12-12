#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "filereader.h"


int main()
{
    int sum = 0;
    int lineCount;
    char ** lines = read_file_lines("../input-1.txt", &lineCount);
    
    for (int i = 0; i < lineCount; i++)
    {
        int lineslen = strlen(lines[i]);
        int firstDigit = -1;
        int secondDigit = -1;
        for (int j=0; j<lineslen; j++)
        {   
            int asciiValue = (int)lines[i][j];
            if(asciiValue >= 48 && asciiValue <= 57 && firstDigit != -1)
            {   
                firstDigit = lines[i][j];
                break;
            }
            if(asciiValue >= 48 && asciiValue <= 57)
            {   
                secondDigit = lines[i][j];
            }
        }
    }
}