#include <bits/stdc++.h>
using namespace std;

// Encryption Function
void Encrypt(string inputText, int shift) {

    // Iterate through each character
    for(char &s: inputText) {

        // Check for alphabet
        if(isalpha(s)) {

            // Check for uppercase or lowercase
            if(s<'a') {
                s+=shift;           // Shift ascii value right
                if(s>'Z') s-=26;    // If shift exceeds z, cycle start from a
            } else {
                s+=shift;           // Same procedure as above
                if(s>'z') s-=26;
            }
        } 
    }

    cout << "The encoded message is " << inputText << "\n";
}

//Decryption Function
void Decrypt(string inputText, int shift) {

    // Iterate through each character
    for(char &s: inputText) {

        // Check for alphabet
        if(isalpha(s)) {

            // Check for uppercase or lowercase
            if(s<'a') {
                s-=shift;           // Shift ascii value left
                if(s<'A') s+=26;    // If shift preceeds a, cycle back from z
            } else {
                s-=shift;           // Same procedure as above
                if(s<'a') s+=26;
            }
        }
    }

    cout << "The decoded message is " << inputText << "\n";
}

int main() {
    
    string codeType, inputText;
    int shift;

    cout << "Type 'encode' to encrypt or 'decode' to decrypt: ";
    cin >> codeType;
    
    // Invalid case
    if(codeType != "encode" && codeType != "decode") {
        cout << "Invalid input\n";
        return 0;
    }

    cout << "Type the message: ";
    cin >> inputText;

    cout << "Enter the number of shifts: ";
    cin >> shift;

    if(codeType == "encode") Encrypt(inputText,shift);
    else Decrypt(inputText,shift);

    return 0;
}