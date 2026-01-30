//1
// #include <stdio.h>
// int main(){
//     printf("Hello World");
//     return 0;
// }

//2
// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     printf("The number you entered is %d",a);
//     return 0;
// }


//3
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("Sum is : %d",a+b);
//     return 0;
// }

//4
// #include <stdio.h>
// int main(){
//     int rad;
//     printf("Enter radius :");
//     scanf("%d",&rad);
//     printf("The area of the circle is: %.2f\n",3.14*rad*rad);
//     printf("The circumference of the circle is : %.2f",2*3.14*rad);
//     return 0;
// }

//5
// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers : ");
//     scanf(" %d %d",&a,&b);
//     char op;
//     printf("Enter a operator: ");
//     scanf(" %c",&op);
//     switch (op){
//         case '+': printf("%d + %d = %d",a,b,a+b); break; 
//         case '-': printf("%d - %d = %d",a,b,a-b); break;
//         case '/': printf("%d / %d = %d",a,b,a/b); break;  
//         case '*': printf("%d * %d = %d",a,b,a*b); break;  
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers : ");
//     scanf("%d %d",&a,&b);
//     if(a>b){
//         printf("%d is greater",a);
//     }
//     else{
//         printf("%d is greater",b);
//     }
// }

// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter age : ");
//     scanf("%d",&a);
//     printf("Enter you weight: ");
//     scanf("%d",&b);
//     if(a>18 && b>50){
//         printf("Eligible to donate blood");
//     }
//     else{
//         printf("Not eligible");
//     }
// }


// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers : ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b && a>c){
//         printf("%d is greater",a);
//     }
//     else if(b>c){
//         printf("%d is greater",b);
//     }
//     else{
//         printf("%d is greater",c);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number(1-4) :");
//     scanf("%d",&n);
//     switch(n){
//         case 1: printf("Forest"); break;
//         case 2: printf("Desert"); break;
//         case 3: printf("Rain Forest"); break;
//         case 4: printf("Snow Forest"); break;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number(1-4) :");
//     scanf("%d",&n);
//     switch(n){
//         case 1: printf("School of Engineering"); break;
//         case 2: printf("School fo Business"); break;
//         case 3: printf("School of Pharmacy"); break;
//         case 4: printf("School of mechanical"); break;
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int mainChoice, subChoice;

//     printf("1. Forest\n2. Desert\n");
//     printf("Enter main choice: ");
//     scanf("%d", &mainChoice);

//     switch(mainChoice){
//         case 1:
//             printf("School Choices:\n");
//             printf("1. School fo Business\n2. School of Engineering\n");
//             printf("Enter sub choice: ");
//             scanf("%d", &subChoice);

//             switch(subChoice){
//                 case 1:
//                     printf("You selected Rain Forest");
//                     break;
//                 case 2:
//                     printf("You selected Snow Forest");
//                     break;
//                 default:
//                     printf("Invalid forest type");
//             }
//             break;

//         case 2:
//             printf("You selected Desert");
//             break;

//         default:
//             printf("Invalid main choice");
//     }

//     return 0;
// }

#include <math.h>
#include <stdio.h>
int main(){
    printf(2/5);
    return 0;
}