//Descending order
#include<stdio.h>
main(){
	int i,a[5],j,temp;
	
	for(i=0;i<5;i++){
		printf("Elements are %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d ",a[i]);
	}
}
