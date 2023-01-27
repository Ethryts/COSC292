#include <stdio.h>

#define MAX_NAME 8 

enum BOOL {false=10,true=20};

void enumerations()
{
    int i=1;
    //Instance of enumeration,.
    enum BOOL done = false;
    do {
        printf("%c\n", i);       
        i++;
        if(i>15)
        {
            done = true;
        }
    } while(!done);
    printf("%d\n",done);
}


void string_cat(char * leftPtr, char * rightPtr)
{
    // int sideLength = leftPtr - rightPtr;
    printf("%s\n", leftPtr);
    for (int i = 0; i<5; i++) {
        printf("%c\n", *leftPtr+i);
    }


}

void test_string_cat(){
    char left [] = "HELLO";
    char right [] = "WORLD";
    char concat[20];
    concat[0] = '\0';
    string_cat(concat, left);
    string_cat(concat, " ");
    string_cat(concat,right);
    printf("%s\n", concat);
}

void testSwap(){
    int x = 10;
    int y = 20;
    swap(&x , &y);
    printf("x %d y: %d\n", x,y);
}

void test_string_cat(){
    char left [] = "HELLO";
    char right [] = "WORLD";
    char concat[20];
    concat[0] = '\0';
    string_cat(concat, left);
    string_cat(concat, " ");
    string_cat(concat,right);
    printf("%s\n", concat);
}

void enter_name(char *cNamePtr, char * cPromtp)
{
    
    printf("%s\n", cPromtp);
    char format[4];
    format[0] = '%';
    format[1] = 's';
    format[1] = MAX_NAME + '0';
    format[3] = '\0';
    printf("%s\n", format);
    
    // scanf()


}

void test_enter_name()
{
    char firstName[10];
    enter_name(firstName, "Enter First Name");

}

int main(int argc, char *argv[])
{

    // enumerations();
    test_enter_name();
    return 0;
}



