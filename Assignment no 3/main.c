//M.Ahmed
//SP24-BSE-066
//ASSIGNMENT NO 3
//Write a program which convert the user input text (single line) into ASCII-8 data.
//And also mentions how many bits/bytes/KB are required to hold/store user text.In the program user have to show the hex and binary value for that particular text.
#include<stdio.h>
#include<string.h>

int main()
{
    //Declare a character array to store input text
    char input[1000];
    //Prompt user to enter text
    printf("Enter any text: ");
    //Read input text from user
    fgets(input, sizeof(input),stdin);
    //Calculate length of input text (excluding newline character)
    int inputLength=strlen(input)-1;
    // Calculate number of bytes required to store input text
    int inputBytes=inputLength;

    // Calculate number of bits required to store input text
    int inputBits=inputBytes*8;

    // Calculate size of input text in kilobytes
    float inputKB=(float)inputBytes/1024;

    // Print information about input text
    printf("\nASCII-8 data:\n\n");
    printf("Text: %s", input);//Print the input text
    printf("Length: %d characters\n",inputLength); //Print length of input text
    printf("Bytes required: %d bytes\n",inputBytes); //Print number of bytes required
    printf("Bits required: %d bits\n",inputBits); //Print number of bits required
    printf("KB required: %.2f KB\n",inputKB); //Print size of input text in kilobytes

    // Print hexadecimal representation of input text
    printf("\nHex value:");
    for (int i=0;i<inputLength;i++) {
        printf("%02X ",input[i]);//Print each character in hexadecimal format
    }
    printf("\n");

    //Print binary representation of input text
    printf("\nBinary value:\n");
    for (int i=0;i<inputLength;i++) {
        for (int j=7;j>=0;j--) {
            printf("%d",(input[i]>>j)&1);//Print each character in binary format
        }
        printf(" ");
    }
    printf("\n");

    return 0;
}
