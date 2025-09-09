#include <stdio.h>

int main()
{
    int age = 25;
    int year = 2025;
    int quality = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quality);

    double pi = 3.1415934757324;

    double e = 2.71127851751475;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa);
    printf("Your price is $%f\n", price);
    printf("Your temperature is %.1fºF\n", temperature);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    char name[] = "Shahibul Faraz";
    char food[] = "rice";
    char email[] = "123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    return 0;
}