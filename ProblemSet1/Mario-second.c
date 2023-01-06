#include <csbootcamp.h>
#include <stdio.h>

int main(void)
{
    for(int i=0;i<8;i++)
    {
        printf("#\n");
        if(i==1)
        {
            printf("##");
            for(int i=0;i<8;i++)
            {
            if(i==2)
            {
                
                printf("###");
                
            }
                printf("\n");
            }
            
        }
        printf("\n");
    }
    //sau
    for (int i = 0; i < 1; i++)
        {
        printf("#\n");
        for (int i = 0; i < 2; i++)
            {
                printf("#");
                for (int i = 0; i < 3; i++)
            {
                printf("#\n");
                for (int i = 0; i < 3; i++)
            {
                printf("#");       
                    
             }
          
    
           }
           printf("\n");
        
       }
}
}
