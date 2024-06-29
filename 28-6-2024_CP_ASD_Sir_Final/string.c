/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 12:18:18
    File: string.c
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    scanf("%s", str);
    printf("Print 1 : %s\n", str);

    fgets(str, 10, stdin);
    printf("Print 2 : %s\n", str);

    gets(str); // deprecated mean won't work in future
    printf("Print 3 : ");
    puts(str);

    // length
    char my_string[] = "I am a string";
    printf("Length : %ld\n", strlen(my_string));

    // strcpy
    char str1[10] = "Hello";
    char str2[10];
    strcpy(str2, str1);
    printf("Strcpy : %s\n", str2);

    // strcat
    char str3[10] = "Hello";
    char str4[10] = " World";
    strcat(str3, str4);
    printf("Strcat : %s\n", str3);

    // strcmp
    char str5[10] = "Hello";
    char str6[10] = "Hello";
    if (strcmp(str5, str6) == 0)
        printf("Strcmp : Equal\n");
    else
        printf("Strcmp : Not Equal\n");

    // strchr
    char str7[10] = "Hello";
    char *ptr = strchr(str7, 'l');
    printf("Strchr : %s\n", ptr);

    // // strupr
    // char str8[10] = "hello";
    // printf("Strupr : %s\n", strupr(str8));

    // // strlwr
    // char str9[10] = "HELLO";
    // printf("Strlwr : %s\n", strlwr(str9));

    // strrev
    char str10[10] = "Hello";
    printf("Strrev : %s\n", strrev(str10));

    return 0;
}