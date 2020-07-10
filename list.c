#include <stdio.h>

int main()
 {  
    int sub,marks;
    
    
    printf("Hello User! Chek your Bca merit list\n\n");
    
    printf("Select your subject Code\n\n");
    printf("Code:1659  English\nCode:3167  Science\nCode:5126  Maths\n\n");
    printf("enter your subject Code.\n");
    scanf("%d",&sub);
    
       
    switch (sub)
    {
      case 1659:
        printf("your subject English\n\n");
        printf("Enter Your English Marks\n");
        scanf("%d",&marks);
        if(marks>=43){
          printf("Congratulations! User; your selected BCA course");
          } else {
            printf("Excuse me!  the user;  You are not selected for the BCA course");
          }
          
          
          
        break;
        
       
        case 3167:
        printf("your subject Science\n\n");
        printf("Enter Your Science Marks\n");
        scanf("%d",&marks);
        if(marks>=50){
          printf("Congratulations! User; your selected BCA course");
          } else {
            printf("Excuse me!  the user;  You are not selected for the BCA course");
          }
        
        break;
        
        
        
        
        case 5126:
        printf("your subject maths\n\n");
        printf("Enter Your Maths Marks\n");
        scanf("%d",&marks);
        if(marks>=63){
          printf("Congratulations! User; your selected BCA course");
          } else {
            printf("Excuse me!  the user;  You are not selected for the BCA course");
          }
        break;
        
        
        
        
        default:
          printf("Oh User! Subject are not matching; please check Subject Code");
          break;
          
          
         }
    return 0;
     
    }
