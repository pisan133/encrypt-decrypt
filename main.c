// Takes a secret key and a phrase from command line
// The secret key is a single lower case character
// The phrase can be any length
// The phrase is encrypted using XOR with key
// The decrypt function tries out all keys
// and prints the decrypted version to the console
// A person can inspect the printout and find out what the
// original key is

#include <stdio.h>
#include <string.h>

// encrypts given sentence using key using XOR
// key is a single lowerchase character
// Hint: strlen can be used to get the length of a C-string
void encrypt(char *sentence, char key) {
  // your CODE goes here
  printf("Encrypted: %s\n", sentence);
}

// try all possible lower case characters as keys
// print each decrypted string
// Hint: store decrypted string in a temp variable
// do not modify encryped string
void decrypt(char *encrypted) {
  // your CODE goes here
  // define key and temp apropriately
  // printf("For key %c, we get: %s\n", key, temp);
}

int main(void) {
  // your CODE goes here - define variable secret
  // secret is a single lowercase character
  // you need to use fgets to read a whole line
  // and then use the first character as "secret"
  printf("Enter secret key: ");
  // your CODE goes here - define variable phrase
  printf("Enter phrase to encode: ");
  // your CODE goes here

  // uncomment below lines when variables are defined
  // printf("Secret is: %c\n", secret);
  // printf("Phrase is: %s\n", phrase);
  // encrypt(phrase, secret);
  // decrypt(phrase);
  return 0;
}