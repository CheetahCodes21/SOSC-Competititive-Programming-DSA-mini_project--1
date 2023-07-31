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

## More Information

For more information about arrays and strings in C++, you can refer to the following resources:

1. [Arrays in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/what-is-array/)
2. [Strings in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/strings-in-c/)
3. [Replace every character of string by character whose ASCII value is k times more than it - GeeksforGeeks](https://www.geeksforgeeks.org/replace-every-character-of-string-by-character-whose-ascii-value-is-k-times-more-than-it/)

Please note that these resources can be highly beneficial and cover approximately 70% of the project's implementation. However, some challenges and errors may arise during the remaining 30%, where you may need to explore concepts independently and use trial and error methods to find suitable solutions.

To gain further insights into Caesar Cipher and improve your understanding, you can watch this helpful [YouTube video](https://youtu.be/sMOZf4GN3oc).

## Note
This Caesar Cipher implementation is a basic example and not intended for secure encryption. It's meant for educational purposes and to demonstrate the Caesar Cipher algorithm. For secure encryption, consider using more advanced cryptographic methods.

Feel free to experiment with different messages and shift values to see how the Caesar Cipher works!

## Credits 

- 🧑🏻‍💻 [ChethanPai](https://github.com/CheetahCodes21)

---
This `README.md` provides a comprehensive description of the Caesar Cipher Encryption and Decryption C++ program, along with additional resources to aid in understanding arrays, strings, and a video tutorial for the Caesar Cipher. It also emphasizes the importance of exploring concepts and adding comments to enhance the development process.
