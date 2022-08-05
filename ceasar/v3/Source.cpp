#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	char text_for_encryption[100], ch;
	int loop, key;
	cout << "Enter a text_for to decrypt: ";
	cin.getline(text_for_encryption, 100);
	cout << "Enter key: ";
	cin >> key;
	for (loop = 0; text_for_encryption[loop] != '\0'; ++loop) {
		ch = text_for_encryption[loop];
		if (ch >= 'a' && ch <= 'z') {
			ch = ch - key;
			if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}
			text_for_encryption[loop] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch - key;
			if (ch > 'a') {
				ch = ch + 'Z' - 'A' + 1;
			}
			text_for_encryption[loop] = ch;
		}
	}
	cout << "Decrypted  message is: " << text_for_encryption<<"\n";
	system("pause");
	return 0;
}