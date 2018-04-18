#include<stdio.h>
#include<conio.h>
int main()
{
Int i, j n, time=0,r,flag=0,tq; 
Int wt=0,tat=0,at[i],bt[i],rt[i]; 
printf("Enter Total Process:\t "); 
scanf("%d",&n); 
r=n; 
for(i=0;i<n;i++) 
  { 
printf("Enter Arrival Time and Burst Time for Process Process Number %d :",i+1); 
scanf("%d",&at[i]); 
scanf("%d",&bt[i]); 
rt[i]=bt[i]; 
  } 
printf("Enter Time Quantum:\t"); 
scanf("%d",&tq); 
printf("\n\nProcess\t|TurnaroundTime|Waiting Time\n\n"); 
for(time=0,i=0;r!=0;) 
  { 
if(rt[i]<=tq&&rt[i]>0) 
    { 
time=time+rt[i]; 
rt[i]=0; 
flag=1; 
    } 
else if(rt[i]>0) 
    { 
rt[i]=rt[i]-tq; 
time=time+tq; 
    } 
if(rt[i]==0 && flag==1) 
    { 
remain--; 
printf("P[%d]\t|\t%d\t|\t%d\n",i+1,time-at[i],time-at[i]-bt[i]); 
wt = wt+time-at[i]-bt[i]; 
tat = tat+time-at[i]; 
flag=0; 
    }
	if(i==n-1) 
i=0; 
else if(at[i+1]<=time) 
i++; 
else
i=0; 
  } 
printf("\nAverage Waiting Time= %f\n",wt*1.0/n); 
printf("Avg Turnaround Time = %f",tat*1.0/n);
}

