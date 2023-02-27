#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct myStructure {   // Structure declaration
    int myNum;           // Member (int variable)
    char myLetter;       // Member (char variable)
}; // End the structure with a semicolon

int main(){
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);


    return 0;
}

void Input(){
    int num;
    char name[20];
    scanf("%d", num);
    printf("Your number is %d", num);

    scanf("%s", name);
    printf("Your name is %s", name);
}


void String(){
    char hi[] = "Hello World";
    printf("%s\n", hi);

    char greetings[] = "Hello World!";
    printf("%c\n", greetings[0]);
    greetings[0] = 'J';
    printf("%s\n", greetings);
}

void List(){
    int myNumbers[] = {25, 50, 75, 100};
    for(int i = 0; i < 4 ;i++){
        printf("%d\n", myNumbers[i]);
    }
}

void week(day){
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }
}

int main(){

    return 0;
}



