#include<stdio.h>

int main(void) {
	char a[22],b[22];
	scanf("%s",a);
	int i,j,k=0;
	for (i=0;a[i]!='\0';i++) {
		if (a[i]=='/' || a[i]=='.' || a[i]=='%') {
			for (j=i-1;j>=0;j--) {
				if (a[j]!='0') {
					for (;j>=0;k++,j--) 
						b[k]=a[j];
					break;
				}
			}
			if (k==0) {
				b[0]='0';
				k++;
			}
			b[k]=a[i];
			k++;
			if (a[i]=='%') {
				b[k]='\0';
				printf("%s\n",b);
				return 0;
			}
			for (j=i;a[j]!='\0';j++);
			j--;
			if (a[i]=='/') {
				for (;j>i;j--) {
					if (a[j]!='0') {
						for (;j>i;j--,k++)
							b[k]=a[j];
						break;
					}		
				}
				b[k]='\0';
				printf("%s\n",b);
				return 0;
			}	
			else {
				i++;
				for (;a[i]!='\0';i++) {
					if (a[i]!='0')	
						break;
				}
				if (a[i]=='\0') {
					b[k]='0';
					k++;
					b[k]='\0';
					printf("%s\n",b);
					return 0;
				}
				for (;j>i-1;j--,k++) {
					b[k]=a[j];
				}
				b[k]='\0';
				printf("%s\n",b);
				return 0;
			}
		}
	}
	k=0;
	for (i--;i>=0;i--) {
		if (a[i]!='0') {
			for(;i>=0;i--,k++)
				b[k]=a[i];
			b[k]='\0';
			printf("%s\n",b);
		break;
		}
	}
	if (k==0)
		printf("0\n");
	return 0;
}
			

