#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,ch,N;
    float Area,Circum,r;
    while (1)
    {
    printf("1: GREATER B/W TWO NO.\n");
    printf("2: CHECK NO. EVEN OR ODD\n");
    printf("3: CALCULATE AREA AND CIRCUMFERENCE\n");
    printf("4: EXIT\n");
    printf(" Enter a choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("FIND GREATER B/W TWO NO.\n");
        printf("Enter two numbers \n");
        scanf("%d%d",&a,&b);
        if(a>b)
        printf("%d is greater\n",a);
        else
        printf("%d is greater\n",b);
        break;
        case 2:
        printf("CHECK NO. IS EVEN OR ODD\n");
        printf("Enter the number\n");
        scanf("%d",&N);
        if(N%2==0)
        printf("%d is even\n",N);
        else
        printf("%d is odd\n",N);
        break;
        case 3:
        printf("CALCULATE AREA AND CIRCUMFERENCE OF CIRCLE\n");
        printf("Enter the radius  \n");
        scanf("%f",&r);
        Area=3.14*r*r;
        printf("Area of circle is %f\n",Area);
        Circum=2.0*3.14*r;
        printf("Circumference of circle is %f\n",Circum);
        break;
        case 4:
        exit(1);
        
    }
    
    }
    printf("GOOD BYE!\n");
 }         