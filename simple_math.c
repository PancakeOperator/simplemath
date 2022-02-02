#include <stdio.h>
#include <stdlib.h>

int main() {
    double userinput;
    double userinput2;
    double answer;
    double subanswer;
    double multianswer;
    double divanswer;
    char goodjob;
    printf("enter a number: \n");
    scanf("%lf", &userinput);
    
    printf("enter another number: \n");
    scanf("%lf", &userinput2);

    answer = userinput + userinput2;
    subanswer = userinput - userinput2;
    multianswer = userinput * userinput2;
    divanswer = userinput / userinput2;
    goodjob = getchar();

    printf("Addition: %.3lf\n",answer);
    printf("Subtraction: %.3lf\n",subanswer);
    printf("Multiplication: %.3lf\n",multianswer);
    printf("Division: %.3lf\n",divan#include <stdio.h>
#include <stdlib.h>

int main() {
    double userinput;
    double userinput2;
    double answer;
    double subanswer;
    double multianswer;
    double divanswer;
    char goodjob;
    printf("enter a number: \n");
    scanf("%lf", &userinput);
    
    printf("enter another number: \n");
    scanf("%lf", &userinput2);

    answer = userinput + userinput2;
    subanswer = userinput - userinput2;
    multianswer = userinput * userinput2;
    divanswer = userinput / userinput2;
    goodjob = getchar();


};
    printf("y or no\n");
    scanf("%c", &goodjob);

    if(goodjob == 'y') {
        printf("sweet thanks!\n");
    }
    else {
        printf("my bad\n");
    }
    return 0;
}