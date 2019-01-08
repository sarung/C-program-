#include <stdio.h>
#include <string.h>

struct stdinfo{
	char name[30];
	char dep[20];
	int roll;
};
	
  main()
  {
		struct stdinfo dat[5];
		int i;
		
		//// Input Area
		for(i=0;i<5;i++){
			printf("\nInput name :",i);
			scanf("%s",dat[i].name);
			
			printf("Department : ");
			scanf("%s",dat[i].dep);
			
			printf("Roll No : ");
			scanf("%d",&dat[i].roll);
		}	
		
		/// Swapping 
		
		int j;
		char temp[30];
		int rtemp;
		for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					if(strcmp(dat[i].name,dat[j].name)>0){
						strcpy(temp,d
						at[j].name);
						
						strcpy(dat[j].name,dat[i].name);
						strcpy(dat[i].name,temp);
						
						strcpy(temp,dat[j].dep);
						
						strcpy(dat[j].dep,dat[i].dep);
						strcpy(dat[i].dep,temp);
						
						rtemp=dat[j].roll;
						dat[j].roll=dat[i].roll;
						dat[i].roll=rtemp;
					}
				}
		}		
		
		/// Result Printing
		
		printf("\n\n.................Sorted Data.........................\n");
		for(i=0;i<5;i++){				
					printf("\n %s \t %s \t %d",dat[i].name,dat[i].dep,dat[i].roll);							
		}		
		printf("\n\n");
		
	}

