//calculater app
# include <stdio.h>

int main ()
{
int option, addition , subtraction ,division ,multiply;


printf("Choose your option :\npress 1 for addition :\npress 2 for subtraction:\npress 3 for division\npress 4 for multiply\n");
    scanf("%d",&option);

printf("You have entered %d \n",option);

int result =0;
    int exit;
switch(option)
{
            printf("Option in switch %d \n ",option);
    case 1:
        printf("Option in case %d \n ",option);
                    result = add();
                printf("result is %d",result);
                     printf("Press any key to turminate !");
                        scanf("%d \n",&exit);
            break;
    case 2:
        printf("Option in case %d \n ",option);

                    result = sub();
                printf("result is %d",result);
                    printf("Press any key to turminate !");
                        scanf("%d \n",&exit);
            break;
    case 3:
        printf("Option in case %d \n ",option);
                    result = divis();
                printf("result is %d",result);
                    printf("Press any key to turminate !");
                         scanf("%d \n",&exit);
            break;            
    case 4:
        printf("Option in case %d \n ",option);
                    result = multi();
                printf("result is %d",result);
                 printf("Press any key to turminate !");
                       scanf("%d \n",&exit);
            break;
          
    default:
        printf("Please chose option correctly %d ", option);
             printf("Press any key to turminate !");
                 scanf("%d \n",&exit);
}
return 0;
}//Main method close
                            //solution
//addition
 
    int add(){
    
        int a,b,result=0;
   
            printf("Please enter two numbers to addition \n");
    
                scanf("%d",&a);
                    scanf("%d",&b);
                        printf("a= %d\n",a);
                            printf("b=%d\n",b);
        result = a+b;
        return result;
}
//subtraction

    int sub(){
    
        int a,b,result=0;
   
            printf("Please enter two numbers to subtraction \n");
    
                scanf("%d",&a);
                    scanf("%d",&b);
                        printf("a= %d\n",a);
                            printf("b=%d\n",b);
        result = a-b;
        
    return result;
}
//division

    int divis(){

            int a,b,result=0;
   
            printf("Please enter two numbers to divis \n");
    
                scanf("%d",&a);
                    scanf("%d",&b);
                        printf("a= %d\n",a);
                            printf("b=%d\n",b);
        result = a/b;
        return result;
}  
//multiply

    int multi()
{
            int a,b,result=0;
   
            printf("Please enter two numbers to multiplication \n");
    
                scanf("%d",&a);
                    scanf("%d",&b);
                        printf("a= %d\n",a);
                            printf("b=%d\n",b);
        result = a*b;
        
return result;
}