#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct dress
{
char colour[20];
char gender[20];
float price;
char size[10];
int age;
char type_of_dress[20];
}d[20],p[10];


//FUNCTIONS.....
void print(void);
void read(void);
void search(void);
void purchase(void);
int type_dress(void);
int colour(void);
int price(void);
int size_dress(void);
int gender(void);
int age(void);
void sort(void);
void sort_age(void);
void sort_price(void);
void sort_size(void);
void sort_colour(void);
 int i,j,n,ch1,ch2;

void read(void)
{
for(i=0;i<n;i++)
{
printf("\n enter the details of dress[%d] as gender,color, size,age,price \n",i+1);
scanf("%s%s%s%d%f",d[i].gender,d[i].colour,d[i].size,&d[i].age,&d[i].price);
printf("\n enter the type of dress:");
scanf("%s",d[i].type_of_dress);
}
}

void sort(void)
{
int ch;
printf("\n ...MENU FOR SORTING...");
printf("\n 1.AGE \n 2.PRICE \n 3.SIZE \n 4.COLOUR");
printf("\n ENTER YOUR CHOICE:");
scanf("%d",&ch);
swi:
switch(ch)
{
case 1:
sort_age();
break;
case 2:
sort_price();
break;
case 3:
sort_size();
break;
case 4:
sort_colour();
break;
default:
printf("\n you selected wrong choice please try again:");
scanf("%d",ch);
goto swi;
break;
}
}
void sort_age(void)
{
int i,j,temp[20],temp1;
for(i=0;i<n;i++)
{
temp[i]=d[i].age;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(temp[i]<temp[j])
{
temp1=temp[i];
temp[i]=temp[j];
temp[j]=temp1;
}
}
}
for(i=0;i<n;i++)
{
printf("\n %d",temp[i]);
}
}

void sort_price(void)
{
int i,j;
float temp[20],temp1;
for(i=0;i<n;i++)
{
temp[i]=d[i].price;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(temp[i]<temp[j])
{
temp1=temp[i];
temp[i]=temp[j];
temp[j]=temp1;
}
}
}
 for(i=0;i<n;i++)
{
printf("\n %f",temp[i]);
}
}

void sort_size(void)
{
int i,j;
char str[10][20],temp[20];
for(i=0;i<n;i++)
{
strcpy(str[i],d[i].size);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(str[i][0]>str[j][0])
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}
}
}
for(i=0;i<n;i++)
{
printf("\n %s",str[i]);
}
}

void sort_colour(void)
{
int i,j;
char str[10][20],temp[20];
for(i=0;i<n;i++)
{
strcpy(str[i],d[i].colour);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(str[i][0]>str[j][0])
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}
}
}
for(i=0;i<n;i++)
{
printf("\n %s",str[i]);
}
}

void print(void)
{
int i,ch2;
printf("\n\t\t\t...details of dresses in this store...");
for(i=0;i<n;i++)
{
printf("\n\t\t\t\tDRESS %d\n",i+1);
printf("\n\t\t\t\t gender:%s\n\t\t\t\t color:%s",d[i].gender,d[i].colour);
printf("\n\t\t\t\t size:%s\n\t\t\t\t age:%d",d[i].size,d[i].age);
printf("\n\t\t\t\t price:%f\n\t\t\t\t type of dress:%s\n",d[i].price, d[i].type_of_dress);
}
}
void search(void)
{
printf("\n \t\t\t ---SEARCH OPTION---\n\n");
printf("\t\t 1.TYPE OF DRESS\n\t\t 2.COLOUR OF DRESS\n\t\t 3.PRICE OF DRESS\n\t\t 4.SIZE OF DRESS\n\t\t 5.GENDER\n\t\t 6.AGE.....");
printf("\n enter option:");
scanf("%d",&ch2);
abc:
switch(ch2)
{
case 1:
ch1=type_dress();
if(ch1==0)
exit(0);
else
purchase();
break;
case 2:
ch1=colour();
if(ch1==0)
exit(0);
else
purchase();
break;
case 3:
ch1=price();
if(ch1==0)
exit(0);
else
purchase();
break;
case 4:
ch1=size_dress();
if(ch1==0)
exit(0);
else
purchase();
break;
case 5:
ch1=gender();
if(ch1==0)
exit(0);
else
purchase();
break;
case 6:
ch1=age();
if(ch1==0)
exit(0);
else
purchase();
break;
default:
printf("\n SORRY you have choosed wrong option please TRY AGAIN...");
scanf("%d",&ch2);
goto abc;
break;
}
}
int type_dress(void)
{
char str1[20];
int i,ch1,j=1,k=0;
printf("\n 1.formal\n 2.event\n 3.party\n 4.casual\n 5.nightwear\n ENTER YOUR DRESS TYPE......");
lmn:
scanf("%s",str1);
for(i=0;i<n;i++)
{
if(strcmp(str1,d[i].type_of_dress)==0)
{
printf("\n \t DRESS %d",j++);
printf("\n gender:%s\n color:%s\n size:%s\n age:%d\n price:%f\n",d[i].gender,d[i].colour,d[i].size,d[i].age,d[i].price);
}
else
{
if(i==(n-1) && j==1)
{
printf("\n SORRY!! there is no %s dresses available right now... PLEASE ENTER YOUR DRESS TYPE...",str1);
goto lmn;
}
}
}
printf("\n form the above dresses which one would you buy (if you don't want to buy you can simply press zero) :");
scanf("%d",&ch1);
for(i=0,j=1;i<n;i++)
{
if(strcmp(str1,d[i].type_of_dress)==0)
{
if(ch1==j++)
{
strcpy(p[k].gender,d[i].gender);
strcpy(p[k].colour,d[i].colour);
strcpy(p[k].size,d[i].size);
strcpy(p[k].type_of_dress,d[i].type_of_dress);
p[k].age=d[i].age;
p[k].price=d[i].price;
k++;
}
}
}
return ch1; 
}
int colour(void)
{
char str1[20];
int ch1,i,j=1,k=0;
printf("\n Enter the Colour you want:");
scanf("%s",str1);
for(i=0;i<n;i++)
{
if(strcmp(str1,d[i].colour)==0)
{
printf("\n \t DRESS %d",j++);
printf("\n gender:%s\n color:%s\n size:%s\n age:%d\n price:%f\n",d[i].gender,d[i].colour,d[i].size,d[i].age,d[i].price);
}
}
printf("\n form the above dresses which one would you buy (if you don't want to buy you can simply press zero) :");
scanf("%d",&ch1);
for(i=0,j=1;i<n;i++)
{
if(strcmp(str1,d[i].colour)==0)
{
if(ch1==j++)
{
strcpy(p[k].gender,d[i].gender);
strcpy(p[k].colour,d[i].colour);
strcpy(p[k].size,d[i].size);
strcpy(p[k].type_of_dress,d[i].type_of_dress);
p[k].age=d[i].age;
p[k].price=d[i].price;
k++;
}
}
}
return ch1;
} 
int price(void)
{
float price,temp1;
int ch1,i,j=1,k=0;
printf("\n Enter the  avarage price you want:");
scanf("%f",&price);
temp1=price-500;
for(i=0;i<n;i++)
{
if(temp1>0)
{
if(d[i].price>temp1 && d[i].price<(price+500))
{
printf("\n \t DRESS %d",j++);
printf("\n gender:%s\n color:%s\n size:%s\n age:%d\n price:%f\n",d[i].gender,d[i].colour,d[i].size,d[i].age,d[i].price);
}
}
}
printf("\n form the above dresses which one would you buy (if you don't want to buy you can simply press zero) :");
scanf("%d",&ch1);
for(i=0,j=1;i<n;i++)
{
if(temp1>0)
{
if(d[i].price>temp1 && d[i].price<(price+500))
{
if(ch1==j++)
{
strcpy(p[k].gender,d[i].gender);
strcpy(p[k].colour,d[i].colour);
strcpy(p[k].size,d[i].size);
strcpy(p[k].type_of_dress,d[i].type_of_dress);
p[k].age=d[i].age;
p[k].price=d[i].price;
k++;
}
}
}
}
return ch1;
}
 int size_dress(void)
{
char str1[20];
int i,ch1,j=1,k=0;
printf("\n 1.Small\n 2.Medium\n 3.Large\n ENTER YOUR DRESS SIZE......");
scanf("%s",str1);
for(i=0;i<n;i++)
{
if(strcmp(str1,d[i].size)==0)
{
printf("\n \t DRESS %d",j++);
printf("\n gender:%s\n color:%s\n size:%s\n age:%d\n price:%f\n",d[i].gender,d[i].colour,d[i].size,d[i].age,d[i].price);
}
}
printf("\n form the above dresses which one would you buy (if you don't want to buy you can simply press zero) :");
scanf("%d",&ch1);
for(i=0,j=1;i<n;i++)
{
if(strcmp(str1,d[i].size)==0)
{
if(ch1==j++)
{
strcpy(p[k].gender,d[i].gender);
strcpy(p[k].colour,d[i].colour);
strcpy(p[k].size,d[i].size);
strcpy(p[k].type_of_dress,d[i].type_of_dress);
p[k].age=d[i].age;
p[k].price=d[i].price;
k++;
}
}
}
return ch1;
}
int gender(void)
{
char str1[20];
int i,ch1,j=1,k=0;
printf("\n ENTER YOUR GENDER......");
scanf("%s",str1);
for(i=0;i<n;i++)
{
if(strcmp(str1,d[i].gender)==0)
{
printf("\n \t DRESS %d",j++);
printf("\n gender:%s\n color:%s\n size:%s\n age:%d\n price:%f\n",d[i].gender,d[i].colour,d[i].size,d[i].age,d[i].price);
}
}
printf("\n form the above dresses which one would you buy (if you don't want to buy you can simply press zero) :");
scanf("%d",&ch1);
for(i=0,j=1;i<n;i++)
{
if(strcmp(str1,d[i].gender)==0)
{
if(ch1==j++)
{
strcpy(p[k].gender,d[i].gender);
strcpy(p[k].colour,d[i].colour);
strcpy(p[k].size,d[i].size);
strcpy(p[k].type_of_dress,d[i].type_of_dress);
p[k].age=d[i].age;
p[k].price=d[i].price;
k++;
}
}
}
return ch1;
}
int age(void)
{
int ch1,i,j=1,k=0,age,temp1;
printf("\n Enter your age:");
scanf("%d",&age);
temp1=age-1;
for(i=0;i<n;i++)
{
if(temp1>1)
{
if(d[i].age>=temp1 && d[i].age<=(age+1))
{
printf("\n \t DRESS %d",j++);
printf("\n gender:%s\n color:%s\n size:%s\n age:%d\n price:%f\n",d[i].gender,d[i].colour,d[i].size,d[i].age,d[i].price);
}
}
}
printf("\n form the above dresses which one would you buy (if you don't want to buy you can simply press zero) :");
scanf("%d",&ch1);
for(i=0,j=1;i<n;i++)
{
if(temp1>0)
{
if(d[i].age>=temp1 && d[i].age<=(age+1))
{
if(ch1==j++)
{
strcpy(p[k].gender,d[i].gender);
strcpy(p[k].colour,d[i].colour);
strcpy(p[k].size,d[i].size);
strcpy(p[k].type_of_dress,d[i].type_of_dress);
p[k].age=d[i].age;
p[k].price=d[i].price;
k++;
}
}
}
}
return ch1;
}
void purchase(void)
{
int i=0,m;
printf("\n details of your dress is...");
printf("\n\t\t\t\t gender:%s\n\t\t\t\t color:%s",p[i].gender,p[i].colour);
printf("\n\t\t\t\t size:%s\n\t\t\t\t age:%d",p[i].size,p[i].age);
printf("\n\t\t\t\t price:%f\n\t\t\t\t type of dress:%s\n",p[i].price,p[i].type_of_dress);
printf("\n\n ....SELECT A PAYMENT METHOD....");
printf("\n\t1.UPI---10 Percentage discount\n\t2.CREDIT CARD---15 Percentage discount");
printf("\n\t3.NET BANKING---Free delivery\n\t4.CASH ON DELIVERY---40Rs charge.....");
scanf("%d",&m);
switch(m)
{
case 1:
printf("\n Actual price of the dress is %f",p[i].price);
printf("\n discount price is %f",(p[i].price-p[i].price*0.1));
break;
case 2:
printf("\n Actual price of the dress is %f",p[i].price);
printf("\n discount price is %f",(p[i].price-p[i].price*0.15));
break;
case 3:
printf("\n Actual price of the dress is %f",p[i].price);
printf("\n discount price is %f",(p[i].price-p[i].price));
break;
case 4:
printf("\n Actual price of the dress is %f",p[i].price);
printf("\n discount price is %f",p[i].price+40);
}
}    

