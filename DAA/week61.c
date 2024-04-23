#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ASCII_SIZE 255
int *compute_bad_shift(char *pattern, char *text)
{
    int pattern_len = strlen(pattern);
    int text_len = strlen(text);
    int *bad_table = malloc(sizeof(int) * ASCII_SIZE);
    for (int i = 0; i < ASCII_SIZE; i++)
    {
        bad_table[i] = pattern_len;
    }
    for (int i = 0; i < pattern_len - 1; i++)
    {
        bad_table[pattern[i]] = pattern_len - i - 1;
    }
    return bad_table;
}

void operation(char *pattern, char *text, int *gscore, int *bscore)
{
    // Write your code here
    int pattern_len = strlen(pattern);
    int text_len = strlen(text);
    *bscore = *gscore = 0;
    int i, j;
    int flag = 0;
    int *bad_table = compute_bad_shift(pattern, text);
    for (i = 0; i < text_len; i++)
    {
        j = pattern_len - 1;
        while (j >= 0 && pattern[j] == text[i + j])
        {
            j--;
        }
        if (j == -1)
        { // pattern found if(*gscore==pattern_len) {
            flag = 1;
            break;
        }
        else
        {
        }
    }
    *gscore = pattern_len;
    i += *gscore - 1;

    int shifter = bad_table[text[i + j]];
    i += shifter - 1;
}
if (flag == 1)
{
    *bscore = i;
}
if (*gscore == 0)
{
    *bscore = pattern_len;
}


// Driver's code

int main()
{
    char text[500], pattern[500];
    int gscore = 0, bscore = 0;
    // scanf("%d", text);
    // scanf("%d", pattern); gets(text); gets(pattern);
    operation(pattern, text, &gscore, &bscore);
    printf("%d %d", gscore, bscore);
    return 0;
}
