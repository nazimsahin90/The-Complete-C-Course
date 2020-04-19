#include <stdio.h>
#include <stdlib.h>

struct StudentDetails{
char names[20];
char address[50];
int standard;
float feePerMonth;
};
int main()
{
    // Create a structure object
    struct StudentDetails stuDet1, stuDet2;
    // Get the details from console
    printf("Enter names: ");
    gets(stuDet1.names);
    printf("Names entered: ");
    puts(stuDet1.names);

    return 0;
}

struct Student
{
    char[30] name;
    int age;
    /* here Address is a structure */
    struct Address
    {
        char[50] locality;
        char[50] city;
        int pincode;
    }addr;
};
