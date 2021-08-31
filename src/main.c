/********************************** METADATA **********************************/

/*
* Contributors: roadelou
* Contacts: 
* Creation Date: 2021-08-31
* Language: C Source
*/

/********************************** INCLUDES **********************************/

// Trigraph
// ========
// I recently learned that the C preprocessor supports trigraphs for the ASCII
// characters which weren't supported by older keyboards. Since I am curious I
// now want to try out writing some code using those trigraphs. The trigraphs in
// question are documented on Wikipedia:
//
// https://en.wikipedia.org/wiki/Digraphs_and_trigraphs.
//
// Used for printf.
??=include <stdio.h>

/********************************* SINGLETONS *********************************/

/* The static global variables for your code goe here. */

/********************************* PROTOYPES **********************************/

/* The prototypes of your functions go here. */

/************************************ MAIN ************************************/

int main (int argc, char *argv??(??)) ??<
	return printf("??(%s??) C trigraphs are supported!\n", argv??(0??));
??>

/********************************* FUNCTIONS **********************************/

/* The functions for your code go here. */

/************************************ EOF *************************************/
