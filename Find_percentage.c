/*result */
#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    float per, total;
    printf("\nEnter your marks in 5 subject: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    per = (m1 + m2 + m3 + m4 + m5)/5.0;
    printf("\nOverall percentage = % .2f%%", per);
    if(per >= 60)
    printf("\nfirst divison");
    else {
    if(per >= 50)
    printf("\nsecond divison");
    else {
    if(per >= 40)
    printf("\nThird divison");
    else
    printf("\nfail");

    }
    }
    
    printf("\n----------------------------------\n");
    printf("\nmade by chetan");
    printf("\n-------------------------------------\n");
    
    return 0;
}
