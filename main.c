#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
void main()
{
    int h,m,s;
    printf("enter hour,minutes and seconds:\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>=24||m>=60||s>=60)
    {
        printf("error data \n");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s==60)
        {
            m++;
            s=0;
        }
        if(m==60)
        {
            h++;
            m=0;
        }
        if(h==24)
        {
            h=0;
            m=0;
            s=0;
        }
        printf("Time : %02d:%02d:%02d",h,m,s);
        sleep(1);
        system("cls");
    }

}
