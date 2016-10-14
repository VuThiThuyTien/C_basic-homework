//Nhap vao so giay, quy doi ra gio phut
#include<stdio.h>
#include<math.h>
main()
{
    int giay;
    printf("Nhap giay: ");
    scanf("%d",&giay);
    printf("%d gio %d phut",giay/3600,(giay%3600)/60);
}
