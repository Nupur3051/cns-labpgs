#include<stdio.h>
int main()
{
    char ch,message[100];
    int key,i;
    printf("enter the message to be encrypted:");
    scanf("%[^\n]", &message);
    printf("\nenter the key:");
    scanf("%d", &key);
    for(i=0;message[i]!='\0';++i){
        ch=message[i];
        if(ch>='a'&& ch <='z'){
            ch=ch+key;
            if(ch>'z'){
                ch=ch-'z'+ 'a'-1;
            }
            message[i]=ch;
        }
        else if(ch>='A' && ch<='Z'){
            ch=ch+key;
            if(ch>'Z'){
                ch=ch-'Z'+ 'A'-1;
            }
            message[i]=ch;
            
        }
    }
    printf("encrypted message is:%s",message);
    for(i=0;message[i]!='\0';++i){
        ch=message[i];
        if(ch>='a'&& ch <='z'){
            ch=ch-key;
            if(ch<'a'){
                ch=ch+'z'- 'a'+1;
            }
            message[i]=ch;
        }
        else if(ch>='A' && ch<='Z'){
            ch=ch+key;
            if(ch>'Z'){
                ch=ch+'Z'- 'A'+1;
            }
            message[i]=ch;
            
        }
    }
    printf("\nthe decrypted message is %s",message);
}