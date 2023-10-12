#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *add(char *, char *);
char *subtract(char *, char *);
char *multiply(char *, int);

int main()
{
    char *a,*b;
    int n;
    char *c;
    char *d;
    char *e;
    char *f;
    char *g;
    
    
    a = (char *)malloc(sizeof(char)*500);
    b = (char *)malloc(sizeof(char)*500);
    c = (char *)malloc(sizeof(char)*500);
    d = (char *)malloc(sizeof(char)*500);
    e = (char *)malloc(sizeof(char)*500);
    f = (char *)malloc(sizeof(char)*500);
    g = (char *)malloc(sizeof(char)*500);
    
    
    
    
    
   
    gets(a);
    g=(char*)malloc(sizeof(char)*strlen(a)+3);
    strcpy(g,a);
    g[strlen(a)+2]='\0';
    g[strlen(a)+1]=' ';
    g[strlen(a)]=' ';
    
    gets(b);
    scanf("%d",&n);
    
    /*printf("%s\n",a);
    printf("%s\n",b);
    printf("%d\n",n);       check*/
    
    
    

    c=multiply(b,n);
    d=subtract(g,b);
    e=add(d,c);
    f=add(g,e);
    
    
    puts(f);
    
    
    
    //system("pause"); check
    return 0;
}


char *multiply(char *str, int N)
{
     int i,z=0,t=0,f=1;
     char *result;
     char *result2;
     
     
     
     z=strlen(str);
     //printf("%d",z);
     
     t=(z+1)*N;
       
     result=(char*)malloc(sizeof(char)*t+1);
     result2=(char*)malloc(sizeof(char)*(z+2));
     
     
     result[t]='\0';
     result2[z+1]='\0';
     
     strcpy(result2,str)  ;
     result2[z]=' ';
    
     
     for(i=0;i<t;i++)
     {
                     result[i]=result2[i%(z+1)];
                                    
     }
     
     //printf("length %d\n",strlen(result));
     
     return result;
     
}


char *subtract(char *str1, char *str2)
{
     int i,s;
     int j=0, k=0;
     char *temp; 
     
     j=strlen(str1);
     k=strlen(str2);
             
     temp=(char*)malloc(sizeof(char)*j+1);
     strcpy(temp,str1);
     
     for(i=0;i<j-k;i++)
     {
        for(s=0;s<k;s++)
        {
            if(temp[i+s]!=str2[s])
            break;
        }
        if(s==k)
        {
        for(s=i; s<j-k; s++) temp[s]=temp[s+k];
                     
        temp[j-k-1]='\0';
        j=j-k-1;
        i--;         
        }        
     }
     
     
     
     return temp;
}


char *add(char *str1, char *str2)
{
     char *res;
     int c=0;
     
     
     
     c=strlen(str1)+strlen(str2);
     
     res=(char*)malloc(sizeof(char)*c);
     
     res=strcat(str2,str1);
     
     return res;
}

