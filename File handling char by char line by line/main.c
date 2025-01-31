/* Display contents of a file on screen. */
# include <stdio.h>
int main( )
{
    FILE *fp ;          // Declare a file pointer
    char ch ;           // Declare a character variable

    fp=fopen("aaaa.txt","r");   // Open file "PR1.C" in read mode

    // Loop until end of file
    while(1)
    {
        ch=fgetc(fp);   // Read a character from the file
        if(ch==EOF )      // Check if end of file is reached
            break ;           // If end of file is reached, exit the loop
        printf ( "%c", ch ) ; // Print the character to the screen
    }

    printf ( "\n" ) ;        // Print a newline character
    fclose ( fp ) ;          // Close the file
    return 0 ;               // Return 0 to indicate successful execution
}

/*
# include <stdio.h>
int main( )
{
FILE *fp ;
char ch ;
int nol = 0, not = 0, nob = 0, noc = 0 ;
fp = fopen ( "D:\SP24-BSE-066\Add two matrices\main.c", "r" ) ;
while ( 1 )
{ch = fgetc ( fp ) ;
if ( ch == EOF )
break ;
noc++ ;
if ( ch == ' ' )
nob++ ;
if ( ch == '\n' )
nol++ ;
if ( ch == '\t' )
not++ ;
}
fclose ( fp ) ;
printf ( "Number of characters = %d\n", noc ) ;
printf ( "Number of blanks = %d\n", nob ) ;
printf ( "Number of tabs = %d\n", not ) ;
printf ( "Number of lines = %d\n", nol ) ;
return 0 ;
}
*//*
#include <stdio.h>

int main() {
    FILE *fp;   // Declare a file pointer
    char ch;    // Declare a character variable

    // Attempt to open file "aaa.txt" in read mode
    fp = fopen("aaa.txt", "r");

    // Check if file was opened successfully
    if (fp == NULL) {
        perror("Error opening file"); // Print an error message
        return 1;                     // Return non-zero to indicate failure
    }

    // Loop until end of file
    while (1) {
        ch = fgetc(fp);     // Read a character from the file
        if (ch == EOF) {    // Check if end of file is reached
            break;          // If end of file is reached, exit the loop
        }
        printf("%c", ch);   // Print the character to the screen
    }

    printf("\n");          // Print a newline character
    fclose(fp);            // Close the file
    return 0;              // Return 0 to indicate successful execution
}
*/
/*
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main() {
    FILE *fp;   // Declare a file pointer
    char ch;    // Declare a character variable
    const char *filename = "/full/path/to/aaa.txt";  // The name of the file to open

    // Print the current working directory
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working dir: %s\n", cwd);
    } else {
        perror("getcwd() error");
        return 1; // Return non-zero to indicate failure
    }

    // Attempt to open file in read mode
    fp = fopen(filename, "r");

    // Check if file was opened successfully
    if (fp == NULL) {
        perror("Error opening file");
        printf("Failed to open file: %s\n", filename);
        return 1; // Return non-zero to indicate failure
    }

    // Loop until end of file
    while (1) {
        ch = fgetc(fp);     // Read a character from the file
        if (ch == EOF) {    // Check if end of file is reached
            break;          // If end of file is reached, exit the loop
        }
        printf("%c", ch);   // Print the character to the screen
    }

    printf("\n");          // Print a newline character
    fclose(fp);            // Close the file
    return 0;              // Return 0 to indicate successful execution
}
*/
