#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
       char str[99],matris[99][99];
    int len=0,i=0,j,satir=0,sutun=0;

    printf("str girin ");
    scanf("%s",str);

    while(str[i]!='\0'){
        if(str[i]!='_'){
            matris[satir][sutun]=str[i];
            sutun++;
        }
        else{
            matris[satir][sutun]='\0';
            satir++;
            sutun=0;
        }
        i++;
    }

    matris[satir][sutun]='\0';

    int kelime=satir+1;

    for(i=0;i<kelime;i++){
        printf("%s\n",matris[i]);
    }
}
