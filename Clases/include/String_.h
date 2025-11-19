#ifndef STRING__H
#define STRING__H


class String_
{
    public:

        int sizestr;
        char *str_;

        String_();
        String_(char arr[]);
        String_(const String_ &o);
        void sizewords();
        const String_& operator=(const String_ &o);
        bool operator==(const String_ &o);
        bool operator==(char* o);
        void ChangeChar(char n, int idx);

        ~String_();

};

#endif // STRING__H
