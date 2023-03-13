// Vigenere Cipher: A more complex substitution cipher where each letter
//  is shifted by a different amount depending on a keyword.

#include <stdio.h>
#include <string.h>

void vigenere_encrypt(char *plaintext, char *key) {
    int keylen = strlen(key);               // length of the key
    int plaintextlen = strlen(plaintext);   // length of the plaintext
    char ciphertext[plaintextlen];          // allocate memory for the ciphertext
    
    for (int i = 0; i < plaintextlen; i++) { // iterate over each character in the plaintext
        int keyidx = i % keylen;            // index into the key (wrap around if necessary)
        int shift = key[keyidx] - 'a';      // convert key character to a shift value (0-25)
        ciphertext[i] = (plaintext[i] + shift - 'a') % 26 + 'a'; // encrypt the current character
    }
    
    printf("Ciphertext: %s\n", ciphertext); // print the encrypted ciphertext
}

void vigenere_decrypt(char *ciphertext, char *key) {
    int keylen = strlen(key);               // length of the key
    int ciphertextlen = strlen(ciphertext); // length of the ciphertext
    char plaintext[ciphertextlen];          // allocate memory for the plaintext
    
    for (int i = 0; i < ciphertextlen; i++) { // iterate over each character in the ciphertext
        int keyidx = i % keylen;              // index into the key (wrap around if necessary)
        int shift = key[keyidx] - 'a';        // convert key character to a shift value (0-25)
        plaintext[i] = (ciphertext[i] - shift - 'a' + 26) % 26 + 'a';  // decrypt the current character
    }
    
    printf("Plaintext: %s\n", plaintext); // print the decrypted plain text
}

int main() {
    char plaintext[100], key[100];
    int choice;
    printf("Enter plaintext: "); // get plaintext
    fgets(plaintext, 100, stdin);
    printf("Enter key: "); // gey key
    fgets(key, 100, stdin);
    
    // Remove trailing newline characters from input strings
    plaintext[strcspn(plaintext, "\n")] = 0;
    key[strcspn(key, "\n")] = 0;
    
    // Decide to Encrypt or Decrypt
    printf("Enter 1 to encrypt, 2 to decrypt: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: // encryption option
            vigenere_encrypt(plaintext, key);
            break;
        case 2: // decryption option
            vigenere_decrypt(plaintext, key);
            break;
        default: // invalid default
            printf("Invalid choice.\n");
            return 1;
    }
    
    return 0;
}