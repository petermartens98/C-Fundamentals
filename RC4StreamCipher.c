#include <stdio.h>
#include <string.h>

void swap(unsigned char *a, unsigned char *b)
{
    unsigned char temp = *a;
    *a = *b;
    *b = temp;
}

void rc4(unsigned char *key, unsigned char *plaintext, unsigned char *ciphertext)
{
    int i, j = 0, k;
    int keylen = strlen(key);
    unsigned char S[256];
    unsigned char K[256];

    // Initialize S and K
    for (i = 0; i < 256; i++)
    {
        S[i] = i;
        K[i] = key[i % keylen];
    }

    // Permute S
    for (i = 0; i < 256; i++)
    {
        j = (j + S[i] + K[i]) % 256;
        swap(&S[i], &S[j]);
    }

    // Generate keystream and encrypt or decrypt plaintext
    i = j = 0;
    for (k = 0; k < strlen(plaintext); k++)
    {
        i = (i + 1) % 256;
        j = (j + S[i]) % 256;
        swap(&S[i], &S[j]);
        int t = (S[i] + S[j]) % 256;
        if (ciphertext == NULL)
        {
            plaintext[k] ^= S[t]; // Decrypt plaintext
        }
        else
        {
            ciphertext[k] = plaintext[k] ^ S[t]; // Encrypt plaintext
        }
    }
}

int main()
{
    int option;
    unsigned char key[256];
    unsigned char plaintext[256];
    unsigned char ciphertext[256];

    printf("Enter text to encrypt or decrypt: ");
    fgets(plaintext, 256, stdin);
    plaintext[strcspn(plaintext, "\n")] = 0; // Remove trailing newline

    printf("Enter key: ");
    fgets(key, 256, stdin);
    key[strcspn(key, "\n")] = 0; // Remove trailing newline

    printf("Enter 1 to encrypt or 2 to decrypt: ");
    scanf("%d", &option);

    if (option == 1)
    {
        rc4(key, plaintext, ciphertext);
        printf("Encrypted text: ");
        for (int i = 0; i < strlen(plaintext); i++)
        {
            printf("%02x", ciphertext[i]);
        }
        printf("\n");
    }
    else if (option == 2)
    {
        rc4(key, plaintext, NULL);
        printf("Decrypted text: %s\n", plaintext);
    }
    else
    {
        printf("Invalid option\n");
    }

    return 0;
}
