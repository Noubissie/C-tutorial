#include <iostream>
#include <string>
std::string reverse_words(std::string str)
{
    std::string a,b,c;
    a="";
    c="";
    for(int i=0 ; i<str.length(); i++){


        if(str[i] != ' '){
            
            a=str[i]+a;
        }
        if(str[i] == ' '){
            
            c=c+a+" ";
            a="";

        }
      if(i==str.length()-1){
            
            c=c+a;
            a="";

        }
    }
    return c;
}

int main(){
    reverse_words("The quick brown fox jumps over the lazy dog.");
}