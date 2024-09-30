#include<stdio.h>
int main()
{
	int stu,i,maths[stu],english[stu],total[stu];
	    printf("Enter the number of students:");
	    scanf("%d",&stu);
	    for(i=0;i<stu;i++)
	    {
		    printf("Enter the Maths marks for student %d:",i+1);
		    scanf("%d",&maths[i]);
		    printf("Enter the English marks for student %d:",i+1);
                    scanf("%d",&english[i]);
		    total[i]=maths[i]+english[i];
	    }
	    for(i=0;i<stu;i++)
            {
		    printf("The total marks of student %d is %d.\n",i+1,total[i]);
	    }
	    return 0;}
	    

