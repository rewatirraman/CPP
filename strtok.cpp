#include <bits/stdc++.h>

int main()
{

    /*
        ---------
        Tokenizer    std::strtok
        ---------
    */
    // std::string str;
    // str = "Hello, My name is Rewati Raman.";    // String to tokenize
    // std::cout << str << std::endl;
    // for (auto tokens = std::strtok(&str[0], " "); tokens != NULL; tokens = std::strtok(NULL, " ")) 
    // {
    //     std::cout << tokens << std::endl;
    // }

    /*
        ---------------------------
        Conversion to (const) char*
        ---------------------------        
    */
    // std::string str{"Hello, My name is Rewati Raman."};
    // // const char *str_copy = str;   /*This will throw error.*/
    // const char *str_copy_1 = str.c_str();
    // const char *str_copy_2 = str.data();

    // std::cout << str_copy_1 << std::endl;
    // std::cout << str_copy_2 << std::endl;

    /*
        ---------------------------
        Lexicographical comparision
        ---------------------------
    */ 
    // std::string str_1 = "raman", str_2 = "rewati";
    // if (str_1 < str_2) {std::cout << str_1 << " is less than " << str_2 << std::endl;}
    // if (str_1 <= str_2) {std::cout << str_1 << " is less than equal to " << str_2 << std::endl;}
    
    // if (str_1 > str_2) {std::cout << str_1 << " is greater than " << str_2 << std::endl;}
    // if (str_1 >= str_2) {std::cout << str_1 << " is greater than equal to " << str_2 << std::endl;}

    // if (str_1 == str_2) {std::cout << str_1 << " is equal to " << str_2 << std::endl;}

    /*
        ------------------
        String replacement
        ------------------
    */
    // std::string str = "Hello, My name is Rewati Raman.";
    // str.replace(0,5, "SSS");
    // std::cout << str << std::endl;

    /*
        -------------------------
        Converting to std::string
        -------------------------
    */
    // int x = 10;
    // std::ostringstream ss;
    // ss << x;
    // std::string str = ss.str();
    // std::cout << str << std::endl;

    /*
        -----------------------------
        Generate substring   `substr`
        -----------------------------
    */
    // std::string str = "Hello, My name is Rewati Raman.";
    // std::string str_1 = str.substr(7);
    // std::cout << str_1 << std::endl;    // My name is Rewati Raman.

    // std::string str_2 = str.substr(7, 10);
    // std::cout << str_2 << std::endl;    // My name is
    
    // std::cout << str << std::endl;

    /*
        --------------------------
        find content in the string      `find`
        --------------------------
    */

    // std::string str = "Hello, My name is Rewati Raman.";
    // auto it = str.find("name", 11);
    // if (it != std::string::npos) {std::cout << "Found at position " << it << std::endl;}
    // else {std::cout << "Not found" << std::endl;}

    return 0;
}