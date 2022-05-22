#include<stdio.h>
#include<string.h>
 
int main(){
    char msg[20],key[20];
    printf("enter the plain text:");
    scanf("%[^\n]%*c",msg);
    printf("enter the key:");
    scanf("%[^\n]%*c",key);
    
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
 
    char newKey[msgLen], encryptedMsg[msgLen]; 
    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)j = 0;
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
    //encryption
    for(i = 0; i < msgLen; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    encryptedMsg[i] = '\0';
 
    printf("Original Message: %s", msg);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", encryptedMsg);
return 0;
}


