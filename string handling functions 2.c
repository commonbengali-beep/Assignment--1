#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],ins[100],s3[100];
    int p,d,i,n;
    scanf("%s%s%s",s1,s2,ins);
    printf("Length=%d\n",strlen(s1));
    printf("Position=%d\n",strstr(s1,s2)-s1+1);
    printf("Compare=%d\n",strcmp(s1,s2));
    strcpy(s3,s1);
    strcat(s3,s2);
    printf("Concat=%s\n",s3);
    printf("Start position and length: ");
    scanf("%d%d",&p,&d);
    strncpy(s3,s1+p-1,d);
    s3[d]='\0';
    printf("Substring=%s\n",s3);
    printf("Delete position and length: ");
    scanf("%d%d",&p,&d);
    for(i=p-1;s1[i+d];i++) s1[i]=s1[i+d];
    s1[i]='\0';
    printf("Delete=%s\n",s1);
    printf("Insert position: ");
    scanf("%d",&p);
    n=strlen(ins);
    for(i=strlen(s1);i>=p-1;i--) s1[i+n]=s1[i];
    for(i=0;i<n;i++) s1[p-1+i]=ins[i];
    printf("Insert=%s",s1);
}
