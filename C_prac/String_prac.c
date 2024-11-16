#include <stdio.h>

int main1()
{

    /*
        char s1[10];
        //s1[10] = "Ujjawal"; // This is an error because you cannot assign a string to a single character.
        printf("%s\n",s1);
    */
    char s2[10] = {'U', 'j', 'j', 'a', 'w', 'a', 'l', '\0'};
    printf("%s\n", s2);
    char s3[] = {'U', 'j', 'j', 'a', 'w', 'a', 'l', '\0'};
    printf("%s\n", s3);
    char s4[10] = "Ujjawal";
    printf("%s\n", s4);
    char s5[] = "Ujjawal";
    printf("%s\n", s5);

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    /*
            // This is an error because you cannot assign a string to a single character.
        char s6[n] = {'U', 'j', 'j', 'a', 'w', 'a', 'l', '\0'};
        printf("%s\n",s6);

            // This is an error because you cannot assign a string to a single character.
        char s7[n] = "Ujjawal";
        printf("%s\n",s7);

    */

    char s8[n + 1];
    printf("Enter the string: ");
    scanf("%s", s8);

    // Ensure the string is null-terminated
    s8[n] = '\0';

    printf("The entered string is: %s\n", s8);

    //  All these gets, puts functions are present in stdio.h header file
    //  char str[25];
    //  printf("Enter a string: ");
    //  scanf("%s",&str);
    //  gets(str);

    /*
        printf("The string is: %s\n",str);

        printf("New str = %.4s\n",str); //This will print the first 4 characters of the string


        //printf("New str = %10.5s\n",str); //This will print the first 5 characters of the string and fill remaining spaces with ' '
        // Output= "New str =      Hello"

        puts(str);
        puts(str);
        puts(str);
    */

    // printf("%s\n",&str);      //    Output= "UjjawalBisht"
    // printf("%s\n",&str[3]);   //    Output= "awalBisht"
    // printf("%s\n",str);       //    Output= "UjjawalBisht"
    // printf("%s\n",str[3]);    //  No Output

    return 0;
}

#include <string.h>
int len()
{
    //  Without Function
    char str[15];
    printf("Enter name:- ");
    gets(str);

    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Length of string is %d\n", count);

    //  With Function
    printf("Length of string is %d", strlen(str));
    return 0;
}

int concat()
{
    char f[20], l[10];
    int i;
    printf("Enter first name:- ");
    gets(f);
    printf("Enter last name:- ");
    gets(l);

    int l1 = strlen(f);
    int l2 = strlen(l);

    for (i = 0; i <= l2; i++)
    {
        f[l1 + i] = l[i];
    }

    printf("Hello %s\n", f);

    puts(strcat(f, l));
    puts(strncat(f, l, 3));

    return 0;
}

void compare()
{
    char str1[15], str2[15];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    /*
        puts(str1);
        puts(str2);
    */

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    int i = 0, flag = 0;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i]){
            flag = 1; 
            break;       
        }   
    }
    
    if (flag == 0)
        printf("The two strings are equal\n");
    else
        printf("The two strings are not equal\n");

    /*
        int a = strcmp(str1,str2);
        printf("%d",a);
    */
}

void rev_with_2_variable(){

//  Reverse a string without inbuilt function
    char str[15];
    char new_str[15];
    int len ;
    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    for (int i=0 ; i<len ; i++){
        new_str[i] = str[len-i-1];
    }
    new_str[len] = '\0';

    printf("Reversed string:- ");
    puts(new_str);

//  Reverse a string with inbuilt function
    char str1[15];
    printf("Enter a string: ");
    gets(str1);
    puts(strrev(str1));

}

void rev_without_new_variable(){
    char str[15];
    printf("Enter a string: ");
    gets(str);

    int l = strlen(str);

    for (int i=0 ; i<l/2 ; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
    }

    printf("Reversed string:- ");
    puts(str);
}

void main()
{
    char s[15];
    printf("Enter a string: ");
    gets(s);

    for (int i=0 ; i<strlen(s) ; i++)
    {
        if (s[i]>'A' && s[i]<'Z'){
            s[i] = s[i] + 32;
        }
    }

    printf("Lowercase string:- ");
    puts(s);
}