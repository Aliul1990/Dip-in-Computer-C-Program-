#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Data Deletion Program Software : \n");
    int a[10],k,i,j,n,item;
    printf("\nEnter how many elements in the array (<10) : ");
    scanf("%d",&n);
    printf("\n input %d integers :",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n original array contains.....");
    for(i=0;i<n;i++)
        printf("\n Array [%d] =%d",i,a[i]);
    printf("\n\n To delete an element...");
    printf("\nEnter which array Position : ");
    scanf("%d", &k);
    item=a[k];
    for(j=k;j<=n-1;j++)
        a[j]=a[j+1];
    n=n-1;
    printf("\n\n After delete the element (%d) \n",item);
    printf("\n The array contains.....");
    for(i=0; i<n;i++)
        printf("\n Array [%d] = %d",i,a[i]);

    getch();
}
