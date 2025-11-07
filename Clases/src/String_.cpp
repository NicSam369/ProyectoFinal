#include "String_.h"
#include <iostream>

String_::String_()
{
    sizestr=0;
    str_= nullptr;
}

String_::String_(char arr[])
{
    int cont=0;
    for(int i = 0; arr[i]!= '\0'; i++){
        cont++;
    }
    sizestr = cont+1;
    str_= new char[sizestr];
    for(int i =0; i< cont;i++){
        str_[i]=arr[i];
    }
    str_[sizestr-1]= '\0';
}

String_::String_ (const String_ &o)
{
    sizestr=o.getsize();
    str_= new char[sizestr];
    for(int i =0; i < sizestr;i++){
        str_[i]=o.str_[i];
    }
}




void String_::sizewords(){
    std::cout << sizestr-1 << std::endl;
}

void String_:: ChangeChar(char n, int idx){
    if(idx<sizestr-1 && idx >=0){
        str_[idx]=n;
    }
}

int String_::getsize() const{
    return sizestr;
}

char* String_::getstring() const{
    return str_;
}



String_::~String_()
{
    delete [] str_;
}
