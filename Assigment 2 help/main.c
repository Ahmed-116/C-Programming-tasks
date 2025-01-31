#include <stdio.h>
float convert_data(float,char,char);

int main()
{

    float value,result;
    char unit_from,unit_to;

    printf("Enter value to convert:");
    scanf("%f",&value);

    printf("Enter unit to convert from (b/B/K/M/G/T/P/E):");
    scanf("\n%c",&unit_from);

    printf("Enter unit to convert to (b/B/K/M/G/T/P/E):");
    scanf("\n%c",&unit_to);

    result=convert_data(value,unit_from,unit_to);
    if (result==-1)
        printf("Invalid units or conversion not supported.\n");
    else
        printf("%f %c is equal to %f %c\n", value,unit_from,result,unit_to);

    return 0;
}

float convert_data(float value, char unit_from, char unit_to) {
    switch (unit_from) {
        case 'b':
            switch (unit_to) {
                case 'B':
                    return value / 8;
                case 'K':
                    return value / (8 * 1024);
                case 'M':
                    return value / (8 * 1024 * 1024);
                case 'G':
                    return value / (8 * 1024 * 1024 * 1024);
                case 'T':
                    return value / (8LL * 1024 * 1024 * 1024 * 1024);
                case 'P':
                    return value / (8LL * 1024 * 1024 * 1024 * 1024 * 1024);
                case 'E':
                    return value / (8LL * 1024 * 1024 * 1024 * 1024 * 1024 * 1024);
                default:
                    return -1;
            }
        case 'B':
            switch (unit_to) {
                case 'b':
                    return value * 8;
                case 'K':
                    return value / 1024;
                case 'M':
                    return value / (1024 * 1024);
                case 'G':
                    return value / (1024 * 1024 * 1024);
                case 'T':
                    return value / (1024 * 1024 * 1024 * 1024);
                case 'P':
                    return value / (1024 * 1024 * 1024 * 1024 * 1024);
                case 'E':
                    return value / (1024 * 1024 * 1024 * 1024 * 1024 * 1024);
                default:
                    return -1;
            }
        case 'K':
            switch (unit_to) {
                case 'b':
                    return value * 8 * 1024;
                case 'B':
                    return value * 1024;
                case 'M':
                    return value / 1024;
                case 'G':
                    return value / (1024 * 1024);
                case 'T':
                    return value / (1024 * 1024 * 1024);
                case 'P':
                    return value / (1024 * 1024 * 1024 * 1024);
                case 'E':
                    return value / (1024 * 1024 * 1024 * 1024 * 1024);
                default:
                    return -1;
            }
        case 'M':
            switch (unit_to) {
                case 'b':
                    return value * 8 * 1024 * 1024;
                case 'B':
                    return value * 1024 * 1024;
                case 'K':
                    return value * 1024;
                case 'G':
                    return value / 1024;
                case 'T':
                    return value / (1024 * 1024 * 1024);
                case 'P':
                    return value / (1024 * 1024 * 1024 * 1024);
                case 'E':
                    return value / (1024 * 1024 * 1024 * 1024 * 1024);
                default:
                    return -1;
            }
        case 'G':
            switch (unit_to) {
                case 'b':
                    return value * 8 * 1024 * 1024 * 1024;
                case 'B':
                    return value * 1024 * 1024 * 1024;
                case 'K':
                    return value * 1024 * 1024;
                case 'M':
                    return value * 1024;
                case 'T':
                    return value / 1024;
                case 'P':
                    return value / (1024 * 1024);
                case 'E':
                    return value / (1024 * 1024 * 1024);
                default:
                    return -1;
            }
        case 'T':
            switch (unit_to) {
                case 'b':
                    return value * 8 * 1024 * 1024 * 1024 * 1024;
                case 'B':
                    return value * 1024 * 1024 * 1024 * 1024;
                case 'K':
                    return value * 1024 * 1024 * 1024;
                case 'M':
                    return value * 1024 * 1024;
                case 'G':
                    return value * 1024;
                case 'P':
                    return value / 1024;
                case 'E':
                    return value / (1024 * 1024);
                default:
                    return -1;
            }
        case 'P':
            switch (unit_to) {
                case 'b':
                    return value * 8LL * 1024 * 1024 * 1024 * 1024 * 1024;
                case 'B':
                    return value * 1024 * 1024 * 1024 * 1024 * 1024;
                case 'K':
                    return value * 1024 * 1024 * 1024 * 1024;
                case 'M':
                    return value * 1024 * 1024 * 1024;
                case 'G':
                    return value * 1024 * 1024;
                case 'T':
                    return value * 1024;
                case 'E':
                    return value / 1024;
                default:
                    return -1;
            }
        case 'E':
            switch (unit_to) {
                case 'b':
                    return value * 8LL * 1024 * 1024 * 1024 * 1024 * 1024 * 1024;
                case 'B':
                    return value * 1024 * 1024 * 1024 * 1024 * 1024 * 1024;
                case 'K':
                    return value * 1024 * 1024 * 1024 * 1024 * 1024;
                case 'M':
                    return value * 1024 * 1024 * 1024 * 1024;
                case 'G':
                    return value * 1024 * 1024 * 1024;
                case 'T':
                    return value * 1024 * 1024;
                case 'P':
                    return value * 1024;
                default:
                    return -1;
            }
        default:
            return -1;
    }
}
