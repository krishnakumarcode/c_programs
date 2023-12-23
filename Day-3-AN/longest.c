#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) 
{
	int i,j;
    for (i = 0; strs[0][i] != '\0'; ++i) 
	{
        for (j = 1; j < strsSize; ++j) 
		{
            if (strs[j][i] != strs[0][i] || strs[j][i] == '\0') 
			{
                char* result = (char*)malloc(i + 1);
                strncpy(result, strs[0], i);
                result[i] = '\0';
                return result;
            }
        }
    }
    return strdup(strs[0]);
}

int main() {
    char* strings[] = {"flower", "flow", "flight"};
    int size = sizeof(strings) / sizeof(strings[0]);

    char* result = longestCommonPrefix(strings, size);

    printf("%s\n", result);

    free(result);

    return 0;
}

