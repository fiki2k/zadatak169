// Napisi polje koristeci realloc funkciju.

#include<stdio.h>
#include<stdlib.h>
int main( )
{
        int i, *ptr;
        ptr = (int *)malloc(5 *sizeof(int));
        if(ptr == NULL)
        {
                printf("Memorija nije moguca.\n");
                exit(1);
        }
        printf("Unesi 5 brojeva : ");
        for(i=0; i<5; i++)
                scanf("%d", ptr+i);
                
        /*Alociraj memoriju za jos 4 integera.*/
        ptr = (int *)realloc(ptr, 9*sizeof(int));
        if(ptr == NULL)
        {
                printf("Memorija nije moguca.\n");
                exit(1);
        }
        printf("Unesi 4 jos broja : ");
        for(i=5; i<9; i++)
                scanf("%d", ptr+i);
        for(i=0; i<9; i++)
                printf("%d ", *(ptr+i));
                
        return 0;
}
// Ako memorija nije dovoljna ili je previse mozemo ju korigirat pomocu realloc naredbe.
