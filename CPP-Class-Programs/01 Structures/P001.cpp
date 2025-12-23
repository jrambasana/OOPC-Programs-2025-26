// Usage of a simple Structure for representing Student Information 

#include <iostream>
#include <stdio.h>
using namespace std;

/*structure creation*/
struct student                  
    {
        char name[50];          
        int id;                 
        char branch[20];        
        int age;                
        char place[50];         
    } stud, stud2;              
int main()
{
    student stud3;
    /*Taking information from keyboard and store it by using structure variable std*/
    printf("Enter Student Information\n");      
    printf("----------------------------\n");
    printf("enter name :");
    scanf("%s",stud.name);               
    printf("enter id :");
    scanf("%d",&stud.id);
    printf("enter branch name :");
    scanf("%s",stud.branch);
    printf("enter age :");
    scanf("%d",&stud.age);
    printf("enter location :");
    scanf("%s",stud.place);
    
    /*Displaying student information */
     //Accessing information by using structure variable std
    printf("Displaying Student Information\n");
    printf("----------------------------\n");
    
    printf(" name: %s\n", stud.name);       
    printf(" id: %d \n", stud.id);
    printf(" branch: %s \n", stud.branch);
    printf(" age: %d\n", stud.age);
    printf(" place: %s \n", stud.place);

    // printf("Enter Student 2 Information\n");      
    // printf("----------------------------\n");
    // printf("enter name :");
    // scanf("%s",stud2.name);               
    // printf("enter id :");
    // scanf("%d",&stud2.id);
    // printf("enter branch name :");
    // scanf("%s",stud2.branch);
    // printf("enter age :");
    // scanf("%d",&stud2.age);
    // printf("enter location :");
    // scanf("%s",stud2.place);
    
    // /*Displaying student information */
    //  //Accessing information by using structure variable std
    // printf("Displaying Student 2 Information\n");
    // printf("----------------------------\n");
    
    // printf(" name: %s\n", stud2.name);       
    // printf(" id: %d \n", stud2.id);
    // printf(" branch: %s \n", stud2.branch);
    // printf(" age: %d\n", stud2.age);
    // printf(" place: %s \n", stud2.place);

    
    return 0;
}
    