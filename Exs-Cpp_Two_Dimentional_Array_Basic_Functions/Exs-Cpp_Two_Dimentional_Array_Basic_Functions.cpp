

#include <stdio.h>


int main()
{
    int a[10][10], i, i1, c, d, choise;
    printf("Maximum size: 10x10.\n");
    printf("Insert Array dimentions:\n");
    scanf_s("%d ", &c); scanf_s("%d", &d);
    int n = c*d;
    
    printf("The dimention of the Array is %d x %d\n", c, d);
    printf("\nPopulate:\n");
    for (i = 0; i < c; i++)
    {
        for (i1 = 0; i1 < d; i1++)
        {
            printf("\nElement %d,%d: ", i, i1); scanf_s("%d", &a[i][i1]);
        };

    };

    printf("\nThe Array is:\n");
    for (i = 0; i < c; i++)
    {
        printf("\n");
        for (i1 = 0; i1 < d; i1++)
        {
            printf("%d", a[i][i1]);
        };

    };
    printf("\n");

    printf("\nChoose from the menu what to do with the Array\n");
    printf("\n1 Display the biggest element\n");
    printf("2 Reorder the Array in Ashending mode\n");

    do
    {
        printf("\nEnter your choise: "); scanf_s("%d", &choise);
    } while (choise < 1 || choise>2);

    printf("\nYour choise is %d\n", choise);

    switch (choise)
    {
    case 1: {
        printf("\n----------Bigest element------------");
        int big = 0;
        for (i = 0; i < c; i++)
        {
            for (i1 = 0; i1 < d; i1++)
            {
                if (big < a[i][i1]) big = a[i][i1];
            };
        };
        printf("\nThe biggest element is %d\n", big);
        printf("\n--------------------------------");
        
        printf("\nThe number of elements is: %d\n", n);

    }; break;
    case 2: {
        printf("\n----------Ashending order-----------");
        int temp;
        int k;
        for (k = 1; k < n; k++)
        {
            for (i = 0; i < c; i++) {
                
                for (i1 = d-1 ; i1 >=i ; i1--) 
                {
                    if (a[i][i1-1] > a[i][i1])
                    {
                        temp = a[i][i1 - 1]; a[i][i1-1] = a[i][i1]; a[i][i1] = temp;
                    };
                };
            };
        };
        //Don't ask me how :D
        printf("\nThe Array is:\n");
        for (i = 0; i < c; i++)
        {
            printf("\n");
            for (i1 = 0; i1 < d; i1++)
            {
                printf("%d", a[i][i1]);
            };

        };
        printf("\n-------------------------------");
        printf("\n");
        
        printf("\nThe number of elements is: %d\n", n);

    }break;
        
    };
    
   

};

