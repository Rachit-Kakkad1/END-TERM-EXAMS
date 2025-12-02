#include <stdio.h>

enum day {
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>6 || n<0){
        printf("Invalid number\n");
    }
    else{
        printf("You have entered number: %d\n", n);
    }

   enum day today = n;

   if(n == 0){
    printf("Monday\n");
   }
   else if(n == 1){
    printf("Tuesday\n");
   }
   else if(n == 2){
    printf("Wednesday\n");
   }
   else if(n == 3){
    printf("Thursday\n");
   }
   else if(n == 4){
    printf("Friday\n");
   }
   else if(n == 5){
    printf("Saturday\n");
   }
   else if(n == 6){
    printf("Sunday\n");
   }
   else{
    printf("Invalid number\n");
   }

    
    return 0;
}
