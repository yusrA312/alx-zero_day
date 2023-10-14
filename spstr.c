#include "main.h"
/**
 * split_string - Split a string into words
 * @str: The input string to be split.
 * @separators: A string  used as separators.
 * @word_count: A pointer to store the count of words .
 *Return: NULL - strings
 */

char **split_string(char *str, char *separators, size_t *word_count)
{
	int c, v;
	char **words, *str_ptr;
	bool start;
	int no_of_words, word_sizes[MAX_WORD_COUNT];
(void)start;

	set_zeros(word_sizes, MAX_WORD_COUNT);
	no_of_words =  words_count(str, separators, word_sizes);
	str_ptr = str;
	start =  false;
	if (no_of_words == 0)
	return (NULL);
	words = malloc((sizeof(char *) * no_of_words) + 1);
	if (!words)
	return (NULL);
	for (v = 0; v < no_of_words; v++)
{
	words[v] = malloc((sizeof(char) * word_sizes[v]) + 1);
	if (!words[v])
	{
		for (v--; v >= 0; v--)
			free(words[v]);
		free(words);
		return (NULL);
	}
	for (c = 0; c < word sizes[v]; c++, str_ptr++)
	{
		while (is_delim(*str_ptr, separators))
			str_ptr++;
		words[v][c] = *str_ptr;
	};
	words[v][c] = '\0';
}
*word_count = no_of_words;
words[v] = NULL;
return (words);
}
