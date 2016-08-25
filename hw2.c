#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * HW2: Strings & Arrays in C
 * COSC 301, Operating Systems, Fall 2016
 * Name: TODO
 */

/*
 * Obtains the character at a particular location in a string.
 * @param mystring the string whose character to return
 * @param index the location of the charcter to return
 * @return the character at the provided index, or -1 if the index is out of 
 * bounds
 */
char charat(char mystring[], int index) {
    // TODO
    return '\0';
}

/*
 * Swaps the case of all characters in a string.
 * @param mystring the string whose character case to swap
 */
void swapcase(char mystring[]) {
    // TODO
}

/*
 * Identifies the starting location of a string within another string.
 * @param mystring the string to search
 * @param find the string to search for
 * @return the index of the first occurence of find, or -1 if it does not exist 
 * in mystring
 */
int index_in(char string[], char find[]) {
    // TODO
    return -2;
}

/*
 * Indentifies the starting location of a string within another string using
 * C standard library functions.
 * @param mystring the string to search
 * @param find the string to search for
 * @return the index of the first occurence of find, or -1 if it does not exist 
 * in mystring
 */
int index_in_library(char string[], char find[]) {
    // TODO
    return -2;
}

/*
 * Computes the parity bit for a one-dimensional array of bits.
 * @param bits one-dimensional array of bits
 * @param num length of the array
 * @return the parity bit
 */
char parity1d(char bits[], int num) {
    // TODO
    return -1;
}

/*
 * Computes the parity bits for a two-dimensional array of bits.
 * @param nrows number of rows in the array
 * @param ncols number of columns in the array
 * @param bits two-dimensional array of bits
 * @param rows parity bits for each row
 * @param cols parity bits for each column
 */
void parity2d(int nrows, int ncols, char bits[nrows][ncols], 
        char rows[nrows], char cols[ncols]) {
    // TODO
}

/*
 * Test each function included in this file.
 */
int main() {
    // charat
    char result1a = charat("Colgate", 3);
    if (result1a != 'g') {
        printf("1a) Incorrect: '%c' is not at index 3\n", result1a);
    } else {
        printf("1a) Correct\n");
    }
    char result1b = charat("Colgate", 10);
    if (result1b != -1) {
        printf("1b) Incorrect: should return -1\n");
    } else {
        printf("1b) Correct\n");
    }

    // swapcase
    char result2a[] = "CoLgAtE";
    swapcase(result2a);
    if (strcmp("cOlGaTe", result2a) != 0) {
        printf("2a) Incorrect: swapcase of \"CoLgAtE\" is not \"%s\"\n", 
                result2a);
    } else {
        printf("2a) Correct\n");
    }
    char result2b[] = "go 'gate";
    swapcase(result2b);
    if (strcmp("GO 'GATE", result2b) != 0) {
        printf("2b) Incorrect: swapcase of \"go 'gate\" is not \"%s\"\n", 
                result2b);
    } else {
        printf("2b) Correct\n");
    }

    // index_in
    int result3a = index_in("operating", "per");
    if (result3a != 1) {
        printf("3a) Incorrect: \"per\" starts at 1, not %d, in \"operating\"\n",
                result3a);
    } else {
        printf("3a) Correct\n");
    }
    int result3b = index_in("operating", "pear");
    if (result3b != -1) {
        printf("3b) Incorrect: \"operating\" does not contain \"pear\"\n");
    } else {
        printf("3b) Correct\n");
    }

    // index_in_library
    int result4a = index_in_library("operating", "per");
    if (result4a != 1) {
        printf("4a) Incorrect: \"per\" starts at 1, not %d, in \"operating\"\n",
                result4a);
    } else {
        printf("4a) Correct\n");
    }
    int result4b = index_in_library("operating", "pear");
    if (result4b != -1) {
        printf("4b) Incorrect: \"operating\" does not contain \"pear\"\n");
    } else {
        printf("4b) Correct\n");
    }

    // parity1d
    char input5a[] = {1,0,1,0};
    char result5a = parity1d(input5a, 4);
    if (result5a != 0) {
        printf("5a) Incorrect: parity for 1,0,1,0 should be 0 not %d\n", 
                result5a);
    } else {
        printf("5a) Correct\n");
    }

    // parity2d
    char input6a[2][4] = {{1,1,0,0}, {0,0,1,1}};
    char rows6a[2];
    char cols6a[4];
    parity2d(2, 4, input6a, rows6a, cols6a);
    int error6a = 0;
    for (int r = 0; r < 2; r++) {
        if (rows6a[r] != 0) {
            printf("6a) Incorrect: parity for row %d should be 0 not %d\n",
                   r, rows6a[r]); 
            error6a = 1;
        }
    }
    for (int c = 0; c < 4; c++) {
        if (cols6a[c] != 1) {
            printf("6a) Incorrect: parity for col %d should be 1 not %d\n",
                   c, cols6a[c]); 
            error6a = 1;
        }
    }
    if (!error6a) {
        printf("6a) Correct\n");
    }
}
