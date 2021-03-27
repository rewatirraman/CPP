==========================stl::string==========================

---------
Tokenizer    std::strtok
---------
    - It's the cheapest standard provided tokenization method.
    - Cannot be used on multiple string at the same time, hence can not be used on multiple thread simultaneously.
    - Calling str::strtok modifies the sts::string it is operating on, hence it cannot be used for
        - const string
        - const char *s
        - literal strings
    - It takes 2 argument
        char * strtok ( char * str, const char * delimiters );
    - In the first call the function expects a string as argument for str & 
        In the subsequent call, the function expect a NULL pointer as argument for str.
    
    Eg.
        std::string str;
        str = "Hello, My name is Rewati Raman.";    // String to tokenize
        std::cout << str << std::endl;
        for (auto tokens = std::strtok(&str[0], " "); tokens != NULL; tokens = std::strtok(NULL, " ")) 
        {
            std::cout << tokens << std::endl;
        }

---------------------------
Conversion to (const) char*
---------------------------
    - To get `const char*` access to the data of std::string, we can use below member functions:
        1. c_str()
        2. data()

    Eg.
        std::string str{"Hello, My name is Rewati Raman."};
        // const char *str_copy = str;          --> This will throw error.
        const char *str_copy_1 = str.c_str();
        const char *str_copy_2 = str.data();


---------------------------
Lexicographical comparision
---------------------------
    - Two strings can be compared lexicographically using the operators :
        ==, !=, <, <=, >, >=


------------------
String replacement
------------------
    - To replace a portion of a string we can use `replace` method from std::string.

    Syntax:
        string& replace (size_t start_pos,  size_t len,  const string& str);
        string& replace (iterator i1, iterator i2, const string& str);

    - It does the operation inPlace.
        Eg.
            std::string str = "Hello, My name is Rewati Raman.";
            str.replace(0,5, "SSS")
            std::cout << str << std::endl;      --> SSS, My name is Rewati Raman.

-------------------------
Converting to std::string
-------------------------
    - Eg. Converting int to string.
        int x = 10;
        std::ostringstream ss;
        ss << x;
        std::string str = ss.str();

-----------------------------
Generate substring   `substr`
-----------------------------
    - syntax:
        string substr (size_t pos = 0, size_t len = npos) const;


---------------------
Accessing a character
---------------------
    - operator[index]   --> returns a reference to the character at the given index, 
                            It is not bound safe, does not throw any exception.
    - at(index)         --> returns a reference to the character at the given index,
                            It is bound safe, throw std::out_of_range error in case index is not within the range.
    - front()           --> returns a reference to the first character.
    - back()            --> returns a reference to the last character.


--------------------------
find content in the string      `find`
--------------------------
    - It returns the position of the first character of the first match,
        if no match found it will return `std::string::npos`
    - syntax :
        size_t find (const string& str, size_t search_start_pos = 0) const;

-----------------------------------
Looping through each char in string
-----------------------------------
    std::string str = "My name is Raman";
    
    -   for (auto x : str) {std::cout << x;}
    -   for (int i=0; i < str.length(); ++i) {std::cout << str[i];}

------------
Concaenation
------------
    - we can use overloaded operators : `+` & `+=`
    - we can also use push_back('x')    --> This will insert the character at the end of the string.
    - we can also use append("string_to_append")          --> This is similar to the overloaded operator `+=`

-----------------------------------------
conversion to integers / floating points.
-----------------------------------------
    - String containing a number can be converted to int / float....
    - All of these functions stop parsing as they encounter a non numeric character.
        Eg.
            "123abc"    will be converted to    123
    - `std::ato*` family of fucntions convertes C-style strings(character arrays) to integer or floating point data types.
        Eg.
            std::string ten = "10";
            int num1 = std::atoi(ten.c_str());
            float num2 = std::atof(ten.c_str());
            double num3 = std::atod(ten.c_str());
            long num4 = std::atol(ten.c_str());
            long long num5 = std::atoll(ten.c_str());


        **
            Use of this function is discouraged b/c they return 0 if they fail to parse the string, this could result in wrong o/p. 
            eg. string itself is "0" , in this case it is impossible to determine if the conversion failed or the string is "0".
        **

    - `std::sto*` family of fcuntions to convert `std::strings` to integer / floating point data types.
        Eg.
            std::string ten = "10";
            int num1 = std::stoi(ten.c_str());
            float num2 = std::stof(ten.c_str());
            double num3 = std::stod(ten.c_str());
            long num4 = std::stol(ten.c_str());
            long long num5 = std::stoll(ten.c_str());
        
        **These functions can also handle octal and hex strings.**
        
        - syntax: 
            int stoi (const string&  str, size_t* idx = 0, int base = 10);