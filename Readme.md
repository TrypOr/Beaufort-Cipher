Beaufort cipher
The Beaufort cipher is a substitution cipher that uses a tableau (shown below) and a
keyword to encipher the plaintext. The keyword should be repeated in order to make a
key that matches the size of the plaintext. The steps for the encryption are the following
for every plaintext letter:
- find the plaintext letter in the topmost horizontal row
- travel down the column, until you find the current key letter
- the leftmost letter in the current row is the new ciphertext letter
For example, if the plaintext is “ATTACKATDAWN” and the keyword is “LEMON”, the
ciphertext is:
Plaintext: ATTACKATDAWN
Key: LEMONLEMONLE
Ciphertext: LLTOLBETLZPR
The deciphering is performed using the same algorithm.