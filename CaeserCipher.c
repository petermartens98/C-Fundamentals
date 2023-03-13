// Caesar Cipher: A simple substitution cipher where each letter 
// is shifted a fixed number of positions down the alphabet.

#include <stdio.h>

int main() {
    int shift, i;
    char message[100], ch;
    
    printf("Enter a message to encrypt: ");
    fgets(message, 100, stdin);  // read input string
    
    printf("Enter the shift amount: ");
    scanf("%d", &shift);
    
    for(i = 0; message[i] != '\0'; i++) {
        ch = message[i];
        
        if(ch >= 'a' && ch <= 'z') {
            ch = 'a' + ((ch - 'a' + shift) % 26);  // apply shift to lowercase letter
        }
        else if(ch >= 'A' && ch <= 'Z') {
            ch = 'A' + ((ch - 'A' + shift) % 26);  // apply shift to uppercase letter
        }
        
        message[i] = ch;
    }
    
    printf("Encrypted message: %s\n", message);
    
    return 0;
}
