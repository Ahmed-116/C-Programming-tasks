#include <stdio.h>
#include <string.h>

float convert_data(float data, char* from_unit, char* to_unit) {
    float units[5] = {1, 8, 8 * 1024, 8 * 1024 * 1024, 8 * 1024 * 1024 * 1024};
    char* unit_names[5] = {"bit", "byte", "kilobyte", "megabyte", "gigabyte"};
    float from_bits, to_bits;

    int i, from_index = -1, to_index = -1;

    for (i = 0; i < 5; i++) {
        if (strcmp(from_unit, unit_names[i]) == 0)
            from_index = i;
        if (strcmp(to_unit, unit_names[i]) == 0)
            to_index = i;
    }

    if (from_index == -1 || to_index == -1) {
        printf("Invalid units\n");
        return -1;
    }

    from_bits = data * units[from_index];
    to_bits = from_bits / units[to_index];

    return to_bits;
}

int main() {
    printf("Welcome to the data conversion program!\n");
    printf("Available units: bit, byte, kilobyte, megabyte, gigabyte\n");

    float data;
    char from_unit[20], to_unit[20];

    printf("Enter the amount of data: ");
    scanf("%f", &data);

    printf("Enter the unit of the data you have: ");
    scanf("%s", from_unit);

    printf("Enter the unit you want to convert to: ");
    scanf("%s", to_unit);

    float converted_data = convert_data(data, from_unit, to_unit);

    if (converted_data == -1) {
        printf("Invalid units entered. Please enter valid units.\n");
    } else {
        printf("%.2f %s is equal to %.2f %s\n", data, from_unit, converted_data, to_unit);
    }

    return 0;
}
