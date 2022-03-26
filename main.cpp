#include<CaesarCypher.h>
#include <iostream>
#include <string>

int main()
{
    int key;
    std::string message;

    std::cout<<"Enter the key: ";
    std::cin>>key;

    std::cout<<"Enter the secret message: ";
    std::cin.ignore();
    std::getline(std::cin, message);  // stores all the sentence's characters in the string 'message'

    std::string encrypted = caesarCypherEncrypt(message, key);  // encrypt the message
    std::string decrypted = caesarCypherDecrypt(encrypted, key);  // decrypt the message

    std::cout<<"Original:"<<message<<std::endl;
    std::cout<<"Encrypted:"<<encrypted<<std::endl;
    std::cout<<"Decrypted:"<<decrypted<<std::endl;

    return 0;
}
