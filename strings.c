#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main() {
    char first[MAX];
    char second[MAX];
    char name[MAX * 2]; //*2 to accomodate the concatenated name
    char str[MAX];
    
    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your second name: ");
    scanf("%s", second);
    
    //to uppercase and store in str
    int i =0;
    while (second[i]) {
    	str[i] = toupper(second[i]);
    	i++;
    }
    str[i] ='\0';
    printf("Converted second name: %s\n", str);
    
    //using strcmp or strcasecmp (ignoring the case of char)
    int result;
    result = strcmp(second, str);
    if (result == 0) {
        printf("The strings 'second' and 'str' are equal.\n");
    } else if (result < 0) {
        printf("The string 'second' is less than 'str'.\n");
    } else {
        printf("The string 'second' is greater than 'str'.\n");
    }
    //using strcasecmp
    result = strcasecmp(second, str);
    if (result == 0) {
        printf("The strings 'second' and 'str' are equal.\n");
    } else if (result < 0) {
        printf("The string 'second' is less than 'str'.\n");
    } else {
        printf("The string 'second' is greater than 'str'.\n");
    }
    
    // Concatenating first and second into name using strcat and strcpy
    strcpy(name, first); // Copy the contents of 'first' into 'name'
    strcat(name, " ");   // Append a space between the names
    strcat(name, second); // Append the contents of 'second' to 'name'

    // Print the concatenated name
    printf("Concatenated name: %s\n", name);
    
    //birth year
    int year;
    printf("Enter your birth year: ");
    scanf("%d", &year);
    printf("Your birth year is: %d\n", &year);
    
    //concatenating using snprintf
    snprintf(name, sizeof(name), "%s %s %d", first, second, year);
    printf("Concatenated name using snprintf: %s\n", name);
    
    //using sscanf to read from name
    sscanf(name, "%s %s %d", first, second, &year);
    printf("Extracted first name: %s\n", first);
    printf("Extracted second name: %s\n", second);
    printf("Extracted birth year: %d\n", year);



    return 0;
}

