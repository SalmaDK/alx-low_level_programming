#include <stdlib.h>
#include "main.h"

/**
 * count_word - Function to count the number of words in a string.
 * @s: The input string.
 *
 * Return: The number of words.
 */
int count_word(char *s)
{
    int flag, c, words;

    flag = 0;
    words = 0;

    for (c = 0; s[c] != '\0'; c++)
    {
        if (s[c] == ' ')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            words++;
        }
    }

    return (words);
}

/**
 * split_word - Split a string into a word.
 * @str: The input string.
 * @start: The start index of the word.
 * @end: The end index of the word.
 *
 * Return: The split word as a newly allocated string.
 */
char *split_word(char *str, int start, int end)
{
    int i;
    char *word = (char *)malloc(sizeof(char) * (end - start + 1));

    if (word == NULL)
        return (NULL);

    for (i = 0; start < end; i++, start++)
        word[i] = str[start];

    word[i] = '\0';

    return (word);
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{
    char **matrix;
    int i, k = 0, len = 0, words, c = 0, start, end;

    while (str[len])
        len++;

    words = count_word(str);

    if (words == 0)
        return (NULL);

    matrix = (char **)malloc(sizeof(char *) * (words + 1));

    if (matrix == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                matrix[k] = split_word(str, start, end);
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
        {
            start = i;
        }
    }

    matrix[k] = NULL;

    return (matrix);
}

