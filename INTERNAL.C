//Internal Mark Calculator
#include<stdio.h>
#include<conio.h>
void main()
{
int mark1,mark2,mark3,model_mark,attend,avg,Total_Internal_Marks=0;
clrscr();
printf("Enter Test Mark1:\n ");
scanf("%d", &mark1);
printf("Enter Test Mark2:\n ");
scanf("%d", &mark2);
printf("Enter Test Mark3:\n ");
scanf("%d", &mark3);
printf("Enter Model Test Mark:\n ");
scanf("%d",&model_mark);
printf("Enter Attendance:\n ");
scanf("%d",&attend);
avg=(mark1+mark2+mark3)/3;
if(avg>=90)
{
Total_Internal_Marks +=10;
}
else if(avg>=70)
{
Total_Internal_Marks +=5;
}
else if(avg>=50)
{
Total_Internal_Marks +=3;
}
else
{
Total_Internal_Marks +=0;
}

//MODEL TEST MARKS
if(model_mark>=90)
{
Total_Internal_Marks +=5;
}
else if(model_mark>=70)
{
Total_Internal_Marks +=3;
}
else
{
Total_Internal_Marks +=0;
}

//ATTENDANCE
if(attend>=90)
{
Total_Internal_Marks +=10;
}
else if(attend>=70)
{
Total_Internal_Marks +=5;
}
else
{
Total_Internal_Marks +=0;
}

//PRINT INTERNAL MARKS
printf("INTERNAL MARK : %d/25 \n",Total_Internal_Marks);

//GRADE
if(Total_Internal_Marks>=20)
{
printf("A GRADE\n");
}
else if(Total_Internal_Marks>=15)
{
printf("B GRADE\n");
}
else if(Total_Internal_Marks>=10)
{
printf("C GRADE\n");
}
else
{
printf("Fail\n");
}
getch();
}