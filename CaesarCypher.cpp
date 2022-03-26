#include <iostream>

std::string caesarCypherEncrypt(std::string message, int key){
    int length=message.length();
    char ch;  // create a char variable to store letters from the message

    for (int i=0; i<length; i++){
        ch = message[i];
        // encrypt for lowercase letters using the key
        if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;  // shifting the letter by 'key' steps
            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;  // go back to the start if the letter is out of the interval
            }
            message[i] = ch;
        }
        // encrypt for uppercase letters using the key
        else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;  // shifting the letter by 'key' steps
            if (ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;  // go back to the start if the letter is out of the interval
            }
            message[i] = ch;
        }
        // keeping the space unchanged
        else if (ch == ' ') {
            continue;  // message[i] = ' ';
        }
    }

    return message;

}

std::string caesarCypherDecrypt(std::string message, int key){
    int length=message.length();
    char ch;

    for (int i=0; i<length; i++){
        ch = message[i];
        // encrypt for lowercase letters using the key
        if (ch >= 'a' && ch <= 'z'){
            ch = ch - key;  // shifting the letter by 'key' steps
            if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;  // go back to the end if the letter is out of the interval
            }
            message[i] = ch;
        }
        // encrypt for uppercase letters using the key
        else if (ch >= 'A' && ch <= 'Z'){
            ch = ch - key;  // shifting the letter by 'key' steps
            if (ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;  // go back to the end if the letter is out of the interval
            }
            message[i] = ch;
        }
        // keeping the space unchanged
        else if (ch == ' ') {
            continue;  // message[i] = ' ';
        }
    }

    return message;

}
