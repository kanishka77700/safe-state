#include<stdio.h> 
main()
{

int p=3, q=3, i, j, k,n, g; 

int a[n], t[n],need[p][q],flag=0;

int allocation[3][3] = { { 0, 0, 1 }, 
                         { 3, 2, 0 }, 
                         { 2, 1, 1 }}; 
                       
int maximum_no[3][3] = { { 8, 4, 3 }, 
                         { 6, 2, 0 }, 
                         { 3, 3, 3 }};
                   
int available[3] = { 3, 2, 2 }; 

for(k = 0; k < p; k++) a[k] = 0;

 
for (i = 0; i < p; i++)
 for (j = 0; j < q; j++)
  {need[i][j] = maximum_no[i][j] - allocation[i][j]; }

    
int y = 0;

for(k = 0; k < 3; k++) 
    for (i = 0; i < p; i++)
    {
		for (j = 0; j < q; j++)
		{ 
         if (need[i][j] > available[j])
		 {
		  flag = 1; break;
		 }
        } 
  
    if (flag == 0)
	{ 
    t[g++] = i; 
    for(int y = 0; y < q; y++) 
    {
	available[y] += allocation[i][y]; 
    a[i] = 1; 
    }
    
	}} 
	   
  
    printf("Following is not in SAFE STATE\n"); 
 
 
 int b[i],c[i];
    
    printf("enter the request of first process contain three resources : ");
    for(i=0;i<3;i++) scanf("%d",&b[i]);
    
    
    for(i=0;i<3;i++)
   		for(j=0;j<3;j++)
    	if(b[i]>available[i]) flag = 0;
		else flag = 1;
		
	if(flag)
	{
	
		available[i]+=b[i];
		printf(" available is");
			printf("%d \n",available[i]);
		need[i][j]=need[i][j]-b[i];
		printf("need value is");
			printf("%d \n",need[i][j]);
			printf("allocation is");
			allocation[i][j] +=b[i];
			printf("%d\n",allocation[i]);
	 printf("system is in safe state");
}
	   else 
	   {
	
	   printf("system is not in safe state"); 
}
	   
	printf("enter the request of second process contain three resources : ");
    for(i=0;i<3;i++) scanf("%d",&c[i]);
    
    
    for(i=0;i<3;i++)
   		for(j=0;j<3;j++)
    	if(c[i]>available[i]) flag = 0;
		else flag = 1;
		
	if(flag==1)
	{
	
	available[i]+=c[i];
	printf("available value is");
		printf("%d \n",available[i]);
		need[i][j]=need[i][j]-c[i];
		printf("need value is");
			printf("%d \n",need[i][j]);
			printf("allocation is");
			allocation[i][j]+= c[i];
			printf("%d\n",allocation[i]);
	 printf("system is in safe state");
}
	   else
	   {
		 printf("system is not in safe state"); 
	}
		
}
 
