#include <stdio.h>

int main()
{
    int x=0,j=1,l,i;
    char a[9];
    a[0]='1';
    a[1]='2';
    a[2]='3';
    a[3]='4';
    a[4]='5';
    a[5]='6';
    a[6]='7';
    a[7]='8';
    a[8]='9';
    
    while(x!=1){
        if(j%2==0){
            printf("Player2:");
            scanf("%d",&l);
            a[l-1]='o';
            j++;
        }
        else{
            printf("Player1:");
            scanf("%d",&l);
            a[l-1]='x';
            j++;
        }
        printf("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
        if(a[0]==a[1] &&a[1]==a[2] && a[0]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        if(a[3]==a[4] &&a[3]==a[5] && a[3]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        if(a[6]==a[7] &&a[6]==a[8] && a[8]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        if(a[0]==a[3] &&a[6]==a[3] && a[3]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        if(a[1]==a[4] &&a[7]==a[4] && a[4]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        if(a[2]==a[8] &&a[2]==a[5] && a[5]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        if(a[0]==a[4] &&a[4]==a[8] && a[8]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        if(a[2]==a[4] &&a[6]==a[4] && a[4]!=' '){
            if(a[0]=='x')printf("Player2 Win!");
            else printf("Player1 Win!");
            x=1;
        }
        else printf("Draw!");
    }
}
