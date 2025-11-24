#include "String_.h"
#include <iostream>

String_::String_()
{
    sizestr=0;
    str_= nullptr;
}
String_::String_(char n)
{
    sizestr=2;
    str_=new char[sizestr];
    str_[0]=n;
    str_[1]='\0';
}
String_::String_(const char arr[])
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
    sizestr=o.sizestr;
    str_= new char[sizestr];
    for(int i =0; i < sizestr;i++){
        str_[i]=o.str_[i];
    }
}
const String_& String_ ::operator=(const String_ &o)
{
    if( &o != this){
        if(this -> sizestr != o.sizestr){
            delete [] str_;
            this ->sizestr= o.sizestr;
            str_ = new char[this->sizestr];
        }
        for(int i=0; i< this -> sizestr; i++){
        this ->str_[i]= o.str_[i];
        }
    }
    return *this;
}

bool String_ ::operator==(const String_ &o)
{

    if(this-> sizestr == o.sizestr){
        for(int i=0; i< this -> sizestr; i++){
            if(str_[i] != o.str_[i]){
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

bool String_ ::operator==(const char* o)
{
    if(o!=nullptr){
        int len=0;
        for(int i = 0; o[i]!= '\0'; i++){
            len++;
        }
        if(this-> sizestr == len+1){
            for(int i=0; i< this -> sizestr; i++){
                    if(str_[i] != o[i]){
                        return false;
                    }
            }
            return true;
        }
        return false;
    }
    return false;
}
void String_:: sizewords() {
    //std::cout << sizestr-1 << std::endl;
}

void String_:: ChangeChar(char n, int idx){
    if(idx<sizestr-1 && idx >=0){
        str_[idx]=n;
    }
}
void String_::print() const{
    std::cout << str_ << std::endl;
}
String_::~String_()
{
    delete [] str_;
}
