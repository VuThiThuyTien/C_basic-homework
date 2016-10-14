//tinh dien tich xung quanh, dien tich toan phan, the tich hinh tru
#include<stdio.h>
#include<math.h>
main()
{
    float R,h,dienTichXQ,dienTichTP,theTich;
    printf("Nhap ban kinh va chieu cao: ");
    scanf("%f%f",&R,&h);
    dienTichXQ=2*3.14*R*h;
    dienTichTP=(2*3.14*R*h)+(2*3.14*(R*R));
    theTich=3.14*R*R*h;
    printf("Dien tich xung quanh hinh tru la: %0.2f\n",dienTichXQ);
    printf("Dien tich toan phan hinh tru la: %0.2f\n",dienTichTP);
    printf("The tich hinh tru la: %0.2f",theTich);
}
