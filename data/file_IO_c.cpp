// All functions and operations are included here instead of multiple files.

#include <iostream>
#include <stdio.h>
using namespace std;

void open_close(int); // Function to open and close a file
void fputc_dat();  // using fputc() to output data, character by character, to a file
void fputs_dat();   // using fputs() to output data, character array at once, to a file
void fprintf_dat();   // using fprintf() to output formatted data to a file
void fgetc_dat();   // Using fgetc() to count number of characters in a file
void fgetc_dat_a();   // Using fgetc() to count number of characters, newline, blanks in a file
void fgets_dat();   // using fgets() to input string data from a file
void fgets_dat_a();   // using fgets() to input a list of strings from a file
void fscanf_dat();   // using fscanf() to input string numeric data from a file
void fscanf_dat_a();   // reading same data differently from a data file

int main()
{
    cout << "This is Main Function" <<endl;
    // Uncomment following functions as per your needs.
    // open_close(0); 
    // fputc_dat();
    // fputs_dat();
    // fprintf_dat();
    // fgetc_dat();
    // fgetc_dat_a();
    // fgets_dat()
    // fgets_dat_a();
    // fscanf_dat();
    // fscanf_dat_a();
    return 0;
}

void open_close(int a)
{
    if(a != 1)
        cout << "OPEN_CLOSE()" << endl;
    FILE *fp;
    fp = fopen("sample.txt", "r");
    if(fp == NULL)
    {
        cout << "File does not exists" << endl;
        exit(1);
    }
    else
        cout << "File exists" << endl;
    fclose(fp);
}

void fputc_dat()
{
    cout << "FPUTC_DAT()" << endl;
    FILE *fp;
    char letter;
    fp = fopen("sample.txt", "w");
    open_close(1);
    printf("Enter the data to enter into the file ");
    do
    {
        letter = getchar();
        if ( letter == '\n')
            break;
        else
            fputc(letter, fp);
    } while (1);
    fclose(fp);
}

void fputs_dat()
{
    cout << "FPUTS_DAT()" << endl;
    FILE *fp;
    char st[100];
    fp = fopen("sample.txt", "w");
    open_close(1);
    printf("Enter a sentence ");
    gets(st);
    fputs(st, fp);
    fclose(fp);
}

void fprintf_dat()
{
    cout << "FPRINTF_DAT" << endl;
    FILE *fp;
    fp = fopen("sample.txt", "w");
    int acc = 1;
    float balance;
    open_close(1);
    do
    {
        printf("Enter customers account number (press 0 to end) ");
        scanf("%d", &acc);
        if (acc == 0)
            continue;
        printf("Enter customer account balance: ");
        scanf("%f", &balance);
        fprintf(fp, "%-5d%-10.2f", acc, balance);
        fprintf(fp, "\n");
    } while (acc != 0);
    fclose(fp);
}

void fgetc_dat()
{
    FILE *fp;
    int count = 0;
    fp = fopen("sample.txt","r");
    open_close(1);
    while( fgetc(fp) != EOF )
        count++;
    printf("Total characters = %d",count);
    fclose(fp);
}

void fgetc_dat_a()
{
    int count = 0, blank = 0, line = 0, a = 1;
    char letter;
    FILE *fp;
    fp = fopen("sample.txt","r");
    open_close(1);
    do
    {
        count++;
        letter = fgetc(fp);
        if ( letter == EOF )
            a = 0;
        if(letter == ' ')
            blank++;
        if(letter == '\n')
            line++;
    } while (a != 0);
    printf("Total characters : %d\n",count);
    printf("Total blanks : %d\n",blank);
    printf("Total newLines : %d\n",line);
}

void fgets_dat()
{
    FILE *fp;
    char s[100];
    fp = fopen("sample.txt", "r");
    open_close(1);
    fgets(s, 100, fp);
    printf("%s",s);
    fclose(fp);
}

void fgets_dat_a()
{
    FILE *fp;
    char s[100];
    fp = fopen("sample.txt", "r");
    open_close(1);
    cout << "Data in the file" << endl;
    while( fgets(s, 100, fp) != NULL)
        printf("%s",s);
    fclose(fp);
}

void fscanf_dat()
{
    FILE *fp;
    char name[100];
    int acc;
    float balance;
    fp = fopen("sample.txt", "r");
    open_close(1);
    while( fscanf(fp, "%[^\n]%d\n%f\n", name, &acc, &balance) != EOF )
    {
        printf("\nCustomer Name : %s", name);
        printf("\nCustomer Account Number : %d", acc);
        printf("\nCustomer Account Balancd : %f", balance);
    }
    fclose(fp);
}

void fscanf_dat_a()
{
    FILE *fp;
    open_close(1);
    int num1 = 123, num2 = 456, num3 = 789, num4, num5, num6;
    printf("\nOriginal valus :\tnum1=%3d, num2=%3d, num3=%3d",num1,num2,num3);
    fp = fopen("sample.txt", "w");
    fprintf(fp, "%3d%3d%3d", num1, num2, num3);
    fclose(fp);
    fp = fopen("sample.txt", "r");
    fscanf(fp, "%3d%3d%3d", &num4, &num5, &num6);
    printf("\nValues from file:\tnum4=%3d, num5=%3d, num6=%3d", num4, num5, num6);
    rewind(fp);
    fscanf(fp, "%3d%3d%3d", &num4, &num5, &num6);
    printf("\nValues from file:\tnum4=%3d, num5=%3d, num6=%3d", num4, num5, num6);
    fclose(fp);
}