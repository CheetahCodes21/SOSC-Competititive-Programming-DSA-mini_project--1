# SOSC-Competititive-Programming-DSA(mini-project)-1

# Caesar Cipher Encryption and Decryption

This C++ program implements a simple Caesar Cipher encryption and decryption algorithm. The Caesar Cipher is a substitution cipher where each letter in the plaintext is shifted a certain number of positions to the right (for encryption) or left (for decryption) to produce the ciphertext.

## How It Works

The program takes the following steps:

1. User Input: The user is prompted to choose between encryption ('encode') or decryption ('decode') and provides the message to be processed and the number of shifts.

2. Encryption Function: The `Encrypt` function iterates through each character in the input message and shifts the ASCII value to the right by the given number of shifts. If the shift exceeds the letter 'Z' or 'z', the alphabet cycles back to 'A' or 'a'.

3. Decryption Function: The `Decrypt` function performs the opposite process by shifting the ASCII value to the left by the given number of shifts. If the shift preceeds 'A' or 'a', the alphabet cycles back to 'Z' or 'z'.

4. Output: The program displays the encoded or decoded message based on the user's choice.

## Usage

1. Compile the C++ program.

2. Run the compiled executable.

3. Choose between encryption ('encode') or decryption ('decode').

4. Enter the message you want to process.

5. Provide the number of shifts.

6. The program will display the encoded or decoded message accordingly.

## Note

This Caesar Cipher implementation is a basic example and not intended for secure encryption. It's meant for educational purposes and to demonstrate the Caesar Cipher algorithm. For secure encryption, consider using more advanced cryptographic methods.

Feel free to experiment with different messages and shift values to see how the Caesar Cipher works!

---
This `README.md` provides a brief description of the Caesar Cipher Encryption and Decryption C++ program. It explains the purpose of the program, how it works, usage instructions, and a note about its intended use for educational purposes only.
