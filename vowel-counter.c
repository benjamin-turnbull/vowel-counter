#include <stdio.h>
#include <ctype.h>

int main (void) {
	char c;
	int vowels;

	printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        switch (toupper(c)) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				vowels++;
				break;
			default:
				break;
		}
	}
	printf("Amount of vowels in sentence: %d\n", vowels);

	return 0;
}